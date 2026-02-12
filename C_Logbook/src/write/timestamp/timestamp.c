#include "timestamp_lib.h"
#include "timestamp.h"
#include <stdint.h>
#include <stddef.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// CONSTANTS
typedef enum {	LOGGED_TODAY = 0,
				NOT_LOGGED_TODAY,
				EXIT } DatePromptOptions;

#define ZERO_CHAR '0'
#define ONE_CHAR '1'
#define TWO_CHAR '2'

// TIMESTAMP VARIABLES
static uint8_t timestampArray[TIMESTAMP_ARRAY_SIZE] = { 0, 0, 0, 0 };
char monthString[MONTH_STRING_SIZE];

// FORWARD DECLARATIONS
static DatePromptOptions checkIfLoggedToday(void);
static bool computeNewTime(void);
static bool computeNewDate(void);

//FUNCTIONS
DatePromptOptions checkIfLoggedToday(void) {
	
	printf("%s \n", LOGGED_TODAY_PROMPT);
	printf("%-20s", TODAY_OPTION_MSG);
	printf("%-20s", NOT_TODAY_OPTION_MSG);
	printf("%s \n", EXIT_OPTION_MSG);
	
	char userInput = getchar();
	getchar();
	
	switch (userInput) {
		case ZERO_CHAR:
			return LOGGED_TODAY;
		case ONE_CHAR:
			return NOT_LOGGED_TODAY;
		case TWO_CHAR:
		default:
			return EXIT;
	}
	return EXIT;
}

bool computeNewTime(void) {
	time_t now = time(NULL);
	struct tm *newTime = localtime(&now);
	
	timestampArray[HOUR] = newTime->tm_hour;
	timestampArray[MINUTE] = newTime->tm_min;
	
	return 1;
}

bool computeNewDate(void) {
	time_t now = time(NULL);
	struct tm *newTime = localtime(&now);
	
	timestampArray[MONTH] = newTime->tm_mon + MONTH_SHIFT;
	timestampArray[DAY] = newTime->tm_mday;
	
	return 1;
}

bool assignMonthString(void) {
	
	uint8_t index = timestampArray[MONTH] - MONTH_SHIFT;
	
	strcpy(monthString, *monthNamesArray[index]);
	
	return 1;
}

bool computeTimestamp(void) {
	
	DatePromptOptions dateComputeMode = checkIfLoggedToday();
	
	if (dateComputeMode == EXIT) {
		printf("%s \n", EXIT_TIMESTAMP_MODE_MSG);
		printf(" \n");
		return 0;
	}
	
	if (dateComputeMode == NOT_LOGGED_TODAY) {
		if (computeNewDate()) {
			assignMonthString();
			printf("%s \n", UPDATED_DATE_MSG);
		} else {
			printf("%s \n", DATE_UPDATE_ERROR_MSG);
			printf("%s \n", EXIT_TIMESTAMP_MODE_MSG);
			printf(" \n");
			return 0;
		}
	}
	
	if (computeNewTime()) {
		printf("%s \n", UPDATE_TIME_MSG);
		printf("%s \n", EXIT_TIMESTAMP_MODE_MSG);
		printf(" \n");
		return 1;
	} else {
		printf("%s \n", TIME_UPDATE_ERROR_MSG);
		printf("%s \n", EXIT_TIMESTAMP_MODE_MSG);
		printf(" \n");
		return 0;
	}
	
	printf("%s \n", UNDEFINED_BEHAVIOUR_ERROR_MSG);
	printf("%s \n", EXIT_TIMESTAMP_MODE_MSG);
	printf(" \n");
	return 0;
}

uint8_t getTimestampData(TimestampSections type) {
	
	if ((type >= DAY) && (type <= MINUTE)) {
		return timestampArray[type];
	} else {
		printf("%s \n", TIMESTAMP_DATA_NOT_FOUND_MSG);
		return 0;
	}
}

bool printStartingTimestampWrite(void) {
	printf("%s \n", ADDING_TIMESTAMP_MSG);
	return 1;
}
