#include "global.h"
#include "output.h"
#include <stdio.h>
#include <string.h>

void output (const char type[WORKOUT_NAMES_SIZE], const char comment[FEEDBACK_SIZE]) {

	printf("\n");			
	printf("Feedback on %s workouts: %s\n", type, comment);	
}
