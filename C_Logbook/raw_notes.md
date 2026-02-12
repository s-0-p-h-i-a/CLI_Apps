# DEVELOPMENT NOTES
## 08/02
- Planning + first scaffolding done
- User input in main interface is buggy
- Got it to work a couple times and confirmed that reading execution path for no .txt file present works

## 09/02
### Main interface: runMenu
- Main interface now reacts correctly to 0, 1 or ESC user input
- For some reason entering wrong input twice chooses write mode
	-> inputValid update not working
- Changed bool userChoice logic to be stricter: userinput > ZERO instead of userinput - ZERO
- Error counter update logic was faulty: first error counter > max never triggered shutdown, then it did the opposite of the desired goal (error while loop only ran once and exited even with garbage value)
- Repeated 0 or 1 input enter respective mode, excess characters

### Read interface:
- Removed else branch with getchar, while loop and error counter:
	- User input irrelevant here
	- User does not need to manually trigger exit: openlogbook displays logbook content, then execution path goes back to main. Logbook content stays visible on screen anyway, logbook/reading mode does not have to stay open while user reads logbook.
- Added error return messages before return 0

### Write interface:
- Idem as read, once user has finished writing in write mode layer there is no need to have to manually return to main interface
- Added error return messages before return 0

### Write mode:
- Changed:

	invalidEntry = (fgets(logbookEntry, LOGBOOK_LINE_LENGTH, stdin) == NULL)
					|| (fgets(logbookEntry, LOGBOOK_LINE_LENGTH, stdin) == EOF);
					
To:
	logbookEntry[LOGBOOK_LINE_LENGTH] = fgets(logbookEntry, LOGBOOK_LINE_LENGTH, stdin);
	invalidEntry = (logbookEntry == NULL) || (logbookEntry == EOF);
	
(with respective char/bool declaration at first instance)
- Restructured so that user prompts for timestamp creation happen before file is opened
- Started writing helper funcs + enums etc for timestamp creation there, moved all to timestamp
- User can now choose to write more than 1 line

### Timestamp module:
- Created defines and enum for date stamp creation states: user has logged today, yesterday, or neither/exit
- How to have timestamp module handle all the timestamp stuff and write mode be able to use and print timestamp into logbook?
- Day/month/hour/min are static vars, latched state until updated
- Implementing timestamp generation for logged yesterday state, scaling down to just today or not and using c time lib
- Timestamp as 'local' state variable?

### Semantics:
- Renamed openLogbookReading/Writing to openReadingMode/WritingMode

### General Structure:
- Now read/write_interfaces pure moore-like transition interfaces between the menu layer and logbook read/write access layer. They have the exact same structure
- Read/write mode modules have the same structure, write module has additional user input functionality
- Add opening logbook message displays in read/write to track execution process
- Have as little 'side tasks' going on between fopen and fclose calls

## 10/02
### Write module:
- Broke down very long main func by making promptForNewLine and writeMode funcs to break down tasks
- Now all file open/close/editing happens inside writeMode only
- Added write_lib to store enums, constants, const strings as they were taking up a lot of space
- Does pointer to logbook need to be deleted if null? -> this case triggers an early return, which then goes out of the scope of the pointer, so it 'dies' right after anyway
- Now using if (!computeTimestamp()) to trigger another early return if there is an issue with the timestamp generation
-> Now the main/good path of the writeMode function has one less if check layer on it and belongs to the main body level of writeMode
- In writeMode: changing switch to if for more readable flow + all cases are not equal + too many instructions in case: NEW_LINE
- Issue: addnewline func cannot use fprintf, file is only opened in the scope of write mode
	- Potential solution: helper func only does inputNewLine, assigns a static newline string, then writemode calls fprintf?
- Was struggling with assining monthString: turns out it is not possible without srcpy

- Compile issues due to both timestamp.h and timestamp.c including timestamp lib?
duplicate symbol '_MAY' in:
    /Users/sophia/Documents/Projects/Embedded C/C_Diary/src/write/timestamp/timestamp.o
    /Users/sophia/Documents/Projects/Embedded C/C_Diary/src/write/write.o
- Both write and timestamp include timestamp.h
- Solved
- Issue with month string size needed in different places but include issue needs to be avoided
	-> local macro for timestamp lib
- Issue with timestamp display: time ok, date not displaying
- Add new line func now updates local string var, writemode func now uses local string to fprintf into file

## 11/02
### Write/Timestamp:
- Changed some things, now timestamp displays everything except it misses the 0 before <10 values (fixed)
- Adding a new log rewrites the whole text file. how to change this? use append
- If already logged today, new logs with only updated time show a 0 as 'date'
- Timestamp printing: now with conditional check for date printing, smaller for loop for hour+minute
- Timestamp array gets initialised at 0, so if day = 0 -> date hasnt been set bc user says they have already logged today
	-> print only the time
- Potential issue with solution for date printing: if user exits write mode then wants to go back and add new entry, the date will be set so it will not be 0, and it will be reprinted even if user says they already logged today
	-> not happening in practice bc exiting writing exits the whole program
- Issue with write input: throws invalid input error when line ends with a repeated letter or a punctuation character?
	- This wasn't happening before and I haven't changed invalid line logic today?
	- This seems to have stopped happening, keyboard smashes also ok (one threw error but prob accidentally pressed command key)
- Currently: if invalid line input, timestamp still saved in log. Finding way to fix that would need logic changes/increase in complexity beyond the current scope
- Issue: time stuck at 22:22
	- Stuck time started happening after fixing date display issue was fixed
	- FIXED: hour/minute display was displaying the hour value at each run of the for loop
