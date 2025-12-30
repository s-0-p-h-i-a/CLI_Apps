/**
 * Fitness Tracker v5.0 — C Port
 *
 * Overview:
 * - Tracks monthly workouts for 4 types, outputs level-based feedback.
 * - Uses arrays: `workoutLevels[4]`, `workoutType[4]`, `levelFeedback[3]`.
 *
 * Structure:
 * 1. main.c: loops to collect totals (getMonthlyTotal) and compute levels (getLevel),
 *    then outputs feedback using global arrays.
 * 2. getMonthlyTotal.c: sums weekly workouts with input validation.
 * 3. getLevel.c: maps totals to levels 0–2.
 * 4. output.c: prints workout type and feedback.
 * 5. global.h: holds workout and feedback strings.
 * 6. inputValidation.h and printInput.h: helper functions for getMonthlyTotal.
 *
 * Key Changes:
 * - Ported from C++ to C (no std::string, cin/cout).
 * - Arrays replace multiple variables and switch statements.
 * - Feedback accessed directly from global arrays; getLevelFeedback removed.
 * - getMonthlyTotal() uses index instead of workout string.
 *
 * Notes:
 * - C requires careful handling of scope, pointers, and data flow.
 * - Global arrays act as a simple “database” for names, levels, feedback.
 */


#include "global.h"
#include "getMonthlyTotal.h"
#include "getLevel.h"
#include "output.h"
#include <stdio.h>
#include <string.h>

int main () {
	
	int workoutLevels[4];
		
	for (int i=0; i<4; ++i) {
		
		workoutLevels[i] = getLevel(getMonthlyTotal(i));
		
		printf("Level : %d\n", workoutLevels[i]);
					
	}
	
	for (int i=0; i<4; ++i) {
		
		output(workoutType[i], levelFeedback[workoutLevels[i]]);
	}
	
	return 0;
}
