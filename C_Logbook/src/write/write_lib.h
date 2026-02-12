#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifndef WRITE_LIB_H
#define WRITE_LIB_H

// CONSTANTS
#define ESC 27

typedef enum {	WRITE_NEW_LINE = 0,
				NO_NEW_LINE,
				NEW_LINE_PROMPT_ERROR } NewLinePromptOutcomes;

const char ONE = '1';
const int MAX_ERRORS = 10;
const int MAX_NEW_LINES = 10;
const size_t LOGBOOK_LINE_LENGTH = 100;
const size_t OUTPUT_STRING_SIZE = 10;

const char LOGBOOK_NAME[] = "logbook.txt";

const char WRITE_OPENING_FILE_MSG[]			= "Opening file...";
const char ADD_NEW_LOG_INTRO_MSG[]			= "Adding new log...";
const char CONTINUE_WRITING_PROMPT[]		= "Write a line? 1 = Yes / Esc = Exit.";
const char ADD_NEW_LINE_MSG[]				= "Write new line:";
const char CONTINUE_WRITING_MSG[]			= "Continue writing.";
const char DONE_WRITING_MSG[]				= "Finished writing / Maximum new lines limit reached.";
const char FILE_CLOSED_MSG[]				= "File closed.";
const char WRITE_MODE_EXIT_MSG[]			= "Exiting writing mode now...";

const char WRITE_MODE_OK_MSG[]				= "Write OK";
const char WRITE_MODE_FAIL_MSG[]			= "ERRROR: write failed.";

const char OPEN_FILE_ERROR_MSG[]			= "ERROR: file could not be opened/found. Exiting open file mode now.";
const char WRITE_MODE_INPUT_ERROR_MSG[] 	= "ERROR: invalid write mode input. Try again.";
const char NEW_LINE_PROMPT_ERROR_MSG[]		= "ERROR: invalid input at new line prompt.";
const char WRITE_MODE_EXCESS_ERRORS_MSG[]	= "ERROR: too many invalid inputs. Exiting now.";

#endif
