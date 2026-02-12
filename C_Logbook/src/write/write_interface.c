#include "write_interface.h"
#include "write.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// CONSTANTS
static const char WRITE_TITLE_MSG[] 			= "WRITING";
static const char OPEN_WRITE_MODE_MSG[]			= "Opening logbook...";
static const char EXIT_WRITE_INT_MSG[] 			= "Exiting writing interface now...";
static const char OPEN_WRITE_MODE_ERROR_MSG[] 	= "ERROR: write mode cannot be accessed.";

// FUNCTIONS
bool openWriteMenu(void) {
	
	printf("%s \n", WRITE_TITLE_MSG);
	printf("%s \n", OPEN_WRITE_MODE_MSG);
	
	if (!enterWritingMode()) {
		printf("%s \n", OPEN_WRITE_MODE_ERROR_MSG);
		printf("%s \n", EXIT_WRITE_INT_MSG);
		printf(" \n");
		return 0;	
	}
	
	printf("%s \n", EXIT_WRITE_INT_MSG);
	return 1;
}
