#include <string.h>
#include <stddef.h>

#ifndef TIMESTAMP_LIB_H
#define TIMESTAMP_LIB_H

// CONSTANTS
#define MONTH_STRING_SIZE_LOCAL 14
const size_t TIMESTAMP_ARRAY_SIZE = 4;
const size_t MONTHS_ARRAY_SIZE = 12;
const char JANUARY[MONTH_STRING_SIZE_LOCAL]		= "January ";
const char FEBRUARY[MONTH_STRING_SIZE_LOCAL]	= "February ";
const char MARCH[MONTH_STRING_SIZE_LOCAL]		= "March ";
const char APRIL[MONTH_STRING_SIZE_LOCAL]		= "April ";
const char MAY[MONTH_STRING_SIZE_LOCAL]			= "May ";
const char JUNE[MONTH_STRING_SIZE_LOCAL]		= "June ";
const char JULY[MONTH_STRING_SIZE_LOCAL]		= "July ";
const char AUGUST[MONTH_STRING_SIZE_LOCAL]		= "August ";
const char SEPTEMBER[MONTH_STRING_SIZE_LOCAL]	= "September ";
const char OCTOBER[MONTH_STRING_SIZE_LOCAL]		= "October ";
const char NOVEMBER[MONTH_STRING_SIZE_LOCAL]	= "November ";	
const char DECEMBER[MONTH_STRING_SIZE_LOCAL]	= "December ";

// STATUS MESSAGES
const char LOGGED_TODAY_PROMPT[] 		= "Have you logged today?";
const char TODAY_OPTION_MSG[] 			= "Yes: Enter 0";
const char NOT_TODAY_OPTION_MSG[] 		= "No: Press 1";
const char EXIT_OPTION_MSG[] 			= "Exit: Press 2";
const char EXIT_TIMESTAMP_MODE_MSG[] 	= "Exiting timestamp interface...";
const char ADDING_TIMESTAMP_MSG[]		= "Writing timestamp in log...";

const char UPDATED_DATE_MSG[] 			= "Date updated.";
const char UPDATE_TIME_MSG[]			= "Time updated.";
const char DATE_UPDATE_ERROR_MSG[]		= "ERROR: date update.";
const char TIME_UPDATE_ERROR_MSG[]		= "ERROR: time update.";
const char UNDEFINED_BEHAVIOUR_ERROR_MSG[] = "ERROR: undefined.";
const char TIMESTAMP_DATA_NOT_FOUND_MSG[] = "ERROR: timestamp data not found.";
const char DATE_MODE_SELECTION_ERROR_MSG[] = "ERROR: date mode not selected.";

const int MONTH_SHIFT = 1;

// OUTPUT STRINGS FOR MONTHS
const char *monthNamesArray[MONTHS_ARRAY_SIZE][MONTH_STRING_SIZE_LOCAL] = 
	{ {JANUARY}, {FEBRUARY}, {MARCH}, {APRIL}, {MAY}, {JUNE}, {JULY}, {AUGUST}, {SEPTEMBER}, {OCTOBER}, {NOVEMBER}, {DECEMBER} };

#endif
