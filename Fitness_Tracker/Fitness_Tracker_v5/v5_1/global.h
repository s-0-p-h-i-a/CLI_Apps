#include <string.h>

#ifndef GLOBAL_H
#define GLOBAL_H

typedef enum {
	UPPER_BODY 	= 0,
	LOWER_BODY 	= 1,
	CORE 		= 2,
	CARDIO		= 3,
} WORKOUTS;

typedef enum {
	LEVEL_ONE 	= 0,
	LEVEL_TWO	= 1,
	LEVEL_THREE	= 2,
} LEVELS;

typedef enum {
	WEEK_ONE 	= 1,
	WEEK_TW0 	= 2,
	WEEK_THREE 	= 3,
	WEEK_FOUR	= 4,
} WEEKS;

extern const int TOTAL_WORKOUTS;
extern const int TOTAL_LEVELS;

extern const WORKOUTS FIRST_WORKOUT;

extern const int WORKOUT_NAMES_SIZE;
extern const int FEEDBACK_SIZE;

extern const char workoutType[4][11];
extern const char levelFeedback[3][35];

#endif
