# LOGBOOK CLI APP

This logger allows the user to read and write on a logbook.txt file.
The user can choose to read it or write on it.

Deleting/editing logs or searching for specific entries is not supported.
The user can write one line at a time, and max 10 lines per logbook entry.

Development log to be added, see raw notes for build process info.

## GOALS
This app is meant for practicing embedded C concepts and C syntax without the hardware element (see Topics practiced section for details).

## REQUIREMENTS
- Always have a voluntary exit path from every user prompt state
- Clean separation of interface, user i/o and data computing responsibilities
- "Linear" execution paths
- Function call chains only go from outer -> inner layers or inner > outer layers
- Use bool type functions for execution path control

## STRUCTURE
### Main:
- Main interface
- Prompts user to choose between:
	- Creating a new logbook
	- Reading the logbook
	- Writing a new log

### Interfaces:
Menu, read mode and write mode all have interfaces as communication/separation layers between the main task modes. For example, menu_interface.c does not see anything from write.h/.c.

### Read mode:
- Opens the file
- Returns to main interface

### Write mode:
- 'Orders' and writes new time-stamp
- Takes new logbook entry
- Writes time-stamp and new entry into logbook file

### Timestamp:
- Handles computing the current date/time
- Creates a timestamp[4] with month, day, hour and minute
- Sets month name output string using timestamp[MONTH] to set index for a monthNames const array of strings

## BEHAVIOUR
### Execution path for reading, regardless if errors happen:
* -> main.c
	* -> menu_interface.c
		* -> read_interface.c
			* -> read.c
		* -> read_interface.c
	* -> menu_interface.c
* -> main.c

### Execution path for writing (if no errors):
* -> main.c
	* -> menu_interface.c
		* -> write_interface.c
			* -> write.c
				* -> timestamp.c
			* -> write.c
		* -> write_interface.c
	* -> menu_interface.c
* -> main.c

## Topics practiced
### Execution path/flow control:
	- Direct execution paths using nested function calls
	- Only one process is running at any given time
	- Once an inner layer function closes, the function above it must close asap
	- At every user prompt, user can choose to exit
	
### System architecture:
	- Layered file structure mirrors execution paths
	- Different modules/interfaces handle specific tasks and own certain data and processes
	- Encapsulation to limit data/functions overlap

### Separation of concerns:
	- Files centered around one main purpose/function with static helper functions
	- Functions should execute only one main task
	- Exception for writeMode function due to scope needed to open/write/clos file
	- System control, input/output, data computing/retrieving tasks broken down into single responsibility helper functions

### Data flow:
	- Learning how to do file manipulation
	- Practice working with string == pointer to array type definition
		- Example: to build an array of strings, a constant length for all strings was defined and the array was initialised as a [TOTAL_STRINGS][STRING_SIZE] matrix
		- Data from matrix had to be retrieved via local buffer string, strcpy and dereferencing
		- Using strcpy the data can be passed to the address of the buffer variable
		- Buffer variable is also a string = pointer to array, so the operation "data in address B = data in address A" is possible

### Error handling:
	- Basic error handling system using bool type functions and early returns
	- Ideally execution path only continues if all processes/data are as should be
	- Catch and handle errors as close as possible to where they can happen

## BUILD PROCESS
### Scaffolding:
- Sketch description, structure and behaviour

### Drafting:
Sketch basic functionalities from the outside in:
- Write 'highest level' function call behaviour in main
- Menu interface: define functions called in main, call read or write interface layer
- Read/write interface -> read/write mode layer
- Finish in timestamp layer (included in write mode layer), after first review process

### Review & rewrite:
- Compile review and verify base program
- Fix unwanted behaviour and validate program
- Localised refactors to add more complex functionalities (eg timestamp creation and printing)
- Debug and verify full functionalities

### Test, fix and  finish:
- Test for unwanted inputs at prompts
- Handle unwanted input cases as proportional to the scope of this program
- Quick formatting and semantics fixes and compile + re-test to confirm
- Change minor things eg add/remove empty lines in console display

## STATE MACHINES
Mealy system with localised Moore-like dynamics:

### Main state:
Moore, independent of user input. Exists 'between' system ON/OFF states and menu interface state.
- ON -> **main** -> menu interface state
- Menu interface -> **main** -> OFF

### Menu interface state:
Mealy, user chooses read/write/esc.
- User chooses read or write mode:
	- main -> **menu interface** -> read_* or write_interface state
	- read_* or write_interface -> **menu interface** -> main state
- User chooses exit:
	main -> **menu interface** -> main

### Read_* or write_interface states:
Moore-like, only transition to and from read/write mode states. 
- Menu interface -> **read_ or write_interface** -> read/write mode
- Read/write mode interface -> **read_ or write_interface** -> menu

### Read mode state:
Moore, either opens file then exits, or cannot open file and also exits (same execution paths).
- Menu interface -> **read mode** -> menu interface

### Write mode state:
Mealy, depending both on what user inputs and when user makes which inputs.
- User does not ESC/do too many invalid inputs at timestamp creation or new entry input, regardless of whether input during the new logbook entry creation process is valid (invalid input triggers same execution path back to main):
	- Write_interface -> **write mode** -> timestamp mode -> **write mode** -> write_interface
- User escapes at timestamp creation prompt or gives it too many invalid answers:
	- Write_interface -> **write mode** -> write_interface

### Timestamp mode state:
Moore, only goes from/to write mode state regardless of success or errors in timestamp creation process.
- Write mode -> **timestamp** -> write mode

## TO-DO IDEAS
Write mode:
- Add create logbook/new logbook option
- Add option to choose in which logbook to write
