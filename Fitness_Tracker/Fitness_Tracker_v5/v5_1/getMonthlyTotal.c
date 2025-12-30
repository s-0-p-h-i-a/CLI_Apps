#include "inputValidation.h"
#include "printInput.h"
#include "global.h"
#include "getMonthlyTotal.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int getMonthlyTotal (WORKOUTS i) {
	
	printf("\n");
	printf("Enter your %s workouts: \n", workoutType[i]);
	int workoutsTotal = 0;
	
	for (WEEKS j=WEEK_ONE; j<=WEEK_FOUR; ++j) {

		int workoutsThisWeek = 0;
		char input[10];
		
		printf("\n");
		printf("Week %d (0-7): \n", j);
			
		// Keep reading input until the user enters a valid integer
		while (fgets(input, sizeof(input), stdin)) {
		// Try to read an integer from the input string
			bool inputValid = sscanf(input, "%d", &workoutsThisWeek) == 1 && inputValidation(workoutsThisWeek);
			if (inputValid) {
			  break;
			} else {
			  printf("Invalid input. Must be an integer 0-7. Try again: ");
			}
		}
			
		workoutsTotal += workoutsThisWeek;	
	}
	
	printInput(workoutType[i], workoutsTotal);
		
	return workoutsTotal;
}
