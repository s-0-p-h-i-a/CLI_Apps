/**
# LOGBOOK CLI APP

This logbook app allows the user to read and write on a logbook.txt file.
The user can choose to read it or write on it.

Deleting/editing logs or searching for specific entries is not supported.
The user can write one line at a time, and max 10 lines per logbook entry.

This app is meant for practicing embedded C concepts and C syntax without the hardware element.

## STRUCTURE
### Main:
- Main interface
- Prompts user to choose between:
	- Creating a new logbook
	- Reading the logbook
	- Writing a new log

### Read:
- User chooses which logbook file to read
- Opens the file
- Returns to main interface

### Write:
- Creates new time-stamp
- Takes user input
- Writes time-stamp and new entry into most recent logbook file

### Timestamp:
- Handles computing the current date/time
- Creates a timestamp[4] with month, day, hour and minute
- Sets month name output string using timestamp[MONTH] to set index for a monthNames const array of strings

TO-DO
Write mode:
- Add create logbook/new logbook option
**/

#include "src/menu/menu_interface.h"
#include "src/read/read_interface.h"
#include "src/write/write_interface.h"
#include <stdbool.h>

int main(void) {
	
	if (runMainMenu()) {
		printClosingScreen();
	} else {
		printErrorScreen();
	}
	return 0;
}
