#include "menu_interface.h"
#include "../read/read_interface.h"
#include "../write/write_interface.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// CONSTANTS
#define ESC 27
static const char ONE = '1';
static const char ZERO = '0';
static const int MAX_ERRORS = 10;

// Menu text
static const char WELCOME_MSG[] 	= "Welcome to the logbook";
static const char CHOICE_INTRO[] 	= "Do you want to:";
static const char READ_OPTION[] 	= "Read? Enter 0";
static const char WRITE_OPTION[] 	= "Write? Enter 1";
static const char EXIT_OPTION[] 	= "Exit? Press ESC";
// Error messages
static const char MAIN_INPUT_ERROR_MSG[] 	= "Invalid input! Enter 0 or 1, ESC to exit";
static const char MAIN_EXCESS_ERRORS_MSG[]	= "Too many invalid inputs. Exiting now.";
static const char MAIN_EXIT_MSG[] 			= "Exiting main now.";
static const char ERROR_MSG[] 				= "ERROR. Exiting now.";

// Forward declarations
static bool printStartMessage(void);

// FUNCTIONS
static bool printStartMessage(void) {
	printf(" \n");
	printf("%s \n", WELCOME_MSG);
	printf(" \n");
	printf("%s \n", CHOICE_INTRO);
	printf("%-30s", READ_OPTION);
	printf("%-30s", WRITE_OPTION);
	printf("%s \n", EXIT_OPTION);
	return 1;
}


bool runMainMenu(void) {
	printStartMessage();
	
	int userInput = getchar();
	getchar();
	
	if (userInput == ESC) {
		return 1;
	}
	
	int errorCounter = 0;
	bool invalidInput = (userInput != ZERO) && (userInput != ONE);
	
	if (invalidInput) {
		while (invalidInput && errorCounter < MAX_ERRORS) {
			
			printf(" \n");
			printf("%s \n", MAIN_INPUT_ERROR_MSG);
			
			userInput = getchar();
			getchar();
			
			if (userInput == ESC) {
				return 1;
			}
			
			++errorCounter;
			putchar(userInput);

			invalidInput = (userInput != ZERO) && (userInput != ONE);	
		}
	}
	
	if (errorCounter >= MAX_ERRORS) {
			printf("%s \n", MAIN_EXCESS_ERRORS_MSG);
			return 0;
		}
	
	printf(" \n");
	
	bool userChoiceWrite = userInput > ZERO;
		
	if (userChoiceWrite == 0) {
		return openReadMenu();
	} else {
		return openWriteMenu();
	}
	return 1;
	
}

bool printClosingScreen(void) {
	printf(" \n");
	printf("%s \n", MAIN_EXIT_MSG);
	printf(" \n");
	return 1;
}

bool printErrorScreen(void) {
	printf(" \n");
	printf("%s \n", ERROR_MSG);
	printf(" \n");
	return 1;
}
