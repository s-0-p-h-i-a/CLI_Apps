/** Fitness Tracker v5.1  Refactor
 * 
Defining enums, switching global "database" arrays to const (+updating function argument types where relevant), switching ints for enums where relevant


**/

#include "global.h"
#include "getMonthlyTotal.h"
#include "getLevel.h"
#include "output.h"
#include <stdio.h>
#include <string.h>

int main () {
	
	LEVELS workoutLevels[TOTAL_WORKOUTS];
		
	for (WORKOUTS i = FIRST_WORKOUT; i < TOTAL_WORKOUTS; ++i) {
		
		workoutLevels[i] = getLevel(getMonthlyTotal(i));
		
		printf("Level : %d\n", workoutLevels[i]);
					
	}
	
	for (WORKOUTS i = FIRST_WORKOUT; i < TOTAL_WORKOUTS; ++i) {
		
		output(workoutType[i], levelFeedback[workoutLevels[i]]);
	}
	
	return 0;
}
