#include "global.h"
#include <string.h>

const int TOTAL_WORKOUTS 	= 4;
const int TOTAL_LEVELS 		= 3;

const WORKOUTS FIRST_WORKOUT = UPPER_BODY;

const int WORKOUT_NAMES_SIZE 	= 11;
const int FEEDBACK_SIZE			= 35;

const char workoutType[TOTAL_WORKOUTS][WORKOUT_NAMES_SIZE] = {"upper body", "lower body", "core", "cardio"};
const char levelFeedback[TOTAL_LEVELS][FEEDBACK_SIZE] = {"Not enough! Add more next month.", 
	"You're doing good, keep going!","Perfect, great job!"};
