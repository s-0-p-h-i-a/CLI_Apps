#include "read_interface.h"
#include "read.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// CONSTANTS
static const char READ_TITLE_MSG[] 				= "READING";
static const char OPEN_READ_MODE_MSG[]			= "Opening logbook...";
static const char EXIT_READ_INT_MSG[] 			= "Exiting reading interface now...";
static const char OPEN_READ_MODE_ERROR_MSG[] 	= "ERROR: read mode cannot be accessed.";

// FUNCTIONS
bool openReadMenu(void) {
	
	printf("%s \n", READ_TITLE_MSG);
	printf("%s \n", OPEN_READ_MODE_MSG);
	
	if (!enterReadingMode()) {
		printf("%s \n", OPEN_READ_MODE_ERROR_MSG);
		printf("%s \n", EXIT_READ_INT_MSG);
		printf(" \n");
		return 0;
	}
	
	printf("%s \n", EXIT_READ_INT_MSG);
	return 1;
}
