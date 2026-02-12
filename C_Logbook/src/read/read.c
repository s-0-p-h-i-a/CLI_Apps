#include "read.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

// CONSTANTS
static const size_t LOGBOOK_LINE_LENGTH = 100;

static const char LOGBOOK_NAME[] = "logbook.txt";

static const char READ_OPENING_FILE_MESSAGE[]	= "Opening file...";
static const char READ_FILE_END_MESSAGE[]		= "End of file. File closed.";
static const char READ_EXIT_MESSAGE[]			= "Exiting reading mode now...";
static const char OPEN_FILE_ERROR_MESSAGE[]		= "ERROR: file could not be opened/found.";

// FUNCTIONS
bool enterReadingMode(void) {
	
	printf("%s \n", READ_OPENING_FILE_MESSAGE);
	printf(" \n");
	
	FILE* logbookPointer = fopen(LOGBOOK_NAME, "r");
	
	if (logbookPointer == NULL) {
		printf("%s \n", OPEN_FILE_ERROR_MESSAGE);
		return 0;
	}
	
	char logbookContent[LOGBOOK_LINE_LENGTH];
	
	while (fgets(logbookContent, LOGBOOK_LINE_LENGTH, logbookPointer)) {
		printf("%s \n", logbookContent);
	}
	
	fclose(logbookPointer);
	printf("%s \n", READ_FILE_END_MESSAGE);
	printf("%s \n", READ_EXIT_MESSAGE);
	
	return 1;
}
