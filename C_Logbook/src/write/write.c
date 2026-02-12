#include "write.h"
#include "write_lib.h"
#include "timestamp/timestamp.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

// LOCAL VARIABLES
static char newLogbookEntry[LOGBOOK_LINE_LENGTH];
static const uint8_t ZERO = 0;
static const uint8_t TEN = 10;

// FORWARD DECLARATIONS
static bool inputNewLine(void);
static NewLinePromptOutcomes promptForNewLine(uint8_t counter);

// FUNCTIONS
static bool inputNewLine(void) {
	
	printf("%s \n", ADD_NEW_LINE_MSG);
	
	fgets(newLogbookEntry, LOGBOOK_LINE_LENGTH, stdin);
	
	bool invalidEntry = (newLogbookEntry[0] == '\0');
	
	uint8_t inputErrorCounter = 0;
	
	while (invalidEntry && (inputErrorCounter < MAX_ERRORS)) {
		
		++inputErrorCounter;
		printf("%s \n", WRITE_MODE_INPUT_ERROR_MSG);
		
		fgets(newLogbookEntry, LOGBOOK_LINE_LENGTH, stdin);
		invalidEntry = (newLogbookEntry[0] == '\0');
	}
	
	if (inputErrorCounter >= MAX_ERRORS) {
		printf("%s \n", WRITE_MODE_EXCESS_ERRORS_MSG);
		return 0;
	}
	return 1;
}

static NewLinePromptOutcomes promptForNewLine(uint8_t counter) {
	
	printf("%s \n", CONTINUE_WRITING_PROMPT);
			
	int userChoice = getchar();
	getchar();

	if ((userChoice == ESC) || (counter >= MAX_NEW_LINES)) {
		printf(" \n");
		printf("%s \n", DONE_WRITING_MSG);
		return NO_NEW_LINE;
	}
	
	if (userChoice == ONE) {
		printf("%s \n", CONTINUE_WRITING_MSG);
		printf(" \n");
		return WRITE_NEW_LINE;
	} else {
		printf("%s \n", NEW_LINE_PROMPT_ERROR_MSG);
		return NEW_LINE_PROMPT_ERROR;
	}
}

static bool writeMode(void) {
	
	FILE* const logbookPointer = fopen(LOGBOOK_NAME, "a");
	
	if (logbookPointer == NULL) {
		printf("%s \n", OPEN_FILE_ERROR_MSG);
		return 0;
	}
	
	if (!computeTimestamp()) {
	
		fclose(logbookPointer);
		printf("%s \n", FILE_CLOSED_MSG);
		return 0;
	}
	
	if (!printStartingTimestampWrite()) {
		fclose(logbookPointer);
		printf("%s \n", FILE_CLOSED_MSG);
		return 0;
	}
	
	fprintf(logbookPointer, "=================================================== \n");
	
	uint8_t day = getTimestampData(DAY);
	if (day != ZERO) {
		fprintf(logbookPointer, "%s", monthString);
		fprintf(logbookPointer, "%d", day);
		fprintf(logbookPointer, ", ");
	}
	
	for (uint8_t i = HOUR; i <= MINUTE; ++i) {
		if (getTimestampData(i) < TEN) {
		fprintf(logbookPointer, "%d", ZERO);
		}
		fprintf(logbookPointer, "%d", getTimestampData(i));
		if (i == HOUR) {
			fprintf(logbookPointer, ":");
		}
	}
		
	fprintf(logbookPointer, " \n");
		
	uint8_t newLineCounter = 1;
	uint8_t newLinePromptError = 0;
		
	bool continueWriting = 1;
		
	while (continueWriting && (newLineCounter < MAX_NEW_LINES) && (newLinePromptError < MAX_ERRORS)) {
			
		NewLinePromptOutcomes newLineMode = promptForNewLine(newLineCounter);
		
		if (newLineMode == NO_NEW_LINE) {
			continueWriting = 0;
			break;
		}
		
		if ((newLineMode == WRITE_NEW_LINE) && inputNewLine()) {
			fprintf(logbookPointer, "%s \n", newLogbookEntry);
			printf(" \n");
			++newLineCounter;
		 }
					
		if (newLineMode == NEW_LINE_PROMPT_ERROR) {
			++newLinePromptError;
		}
		
		continueWriting = 1;
	}

	fclose(logbookPointer);
	printf("%s \n", FILE_CLOSED_MSG);
	return 1;
}

bool enterWritingMode(void) {
	
	printf("%s \n", ADD_NEW_LOG_INTRO_MSG);
	
	printf("%s \n", WRITE_OPENING_FILE_MSG);
	printf(" \n");
	
	if (writeMode()) {
		printf("%s \n", WRITE_MODE_OK_MSG);
	} else {
		printf("%s \n", WRITE_MODE_FAIL_MSG);
	}
	
	printf("%s \n", WRITE_MODE_EXIT_MSG);
	
	return 1;
}
