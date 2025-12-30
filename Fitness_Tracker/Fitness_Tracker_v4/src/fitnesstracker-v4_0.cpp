/** Fitness Tracker v4.0  Refactor
 * 
 * Main changes:
 *
 * 1. First basic implementation of cin.fail for input validation
 * 		+ any related/relevant input validation structure changes
 * 
 * 2. Breaking project up into several files for better overview/modularity
 * 
 * Self-imposed requirements:
 * - Modularise as much as possible without sacrificing length/readability
 * - Use as few intermediary calculation variables as possible:
 * 		- previously cardioTotal -> cardioLevel
 * 		- now cardioTotal 'dies' when cardioLevel is computed
 * 		- considerations about scope, variable lifetimes, variable and data streams between functions and filess
 * 
 * 
 * START:
 * 
 * First: restructure project -> input validation update will be more efficient
 * - Move function declarations to headers
 * 		-> how to separate/group them?
 * 		- 1 header for inputValid
 * 		- 1 header for monthlyTotal functions
 * 		- 1 header for getLevel and getFeedback
 * 		- 1 output header
 * - For a simple first restructuring step: include all headers in main, all headers define
 * functions that are used in main
 * - Some functions may not be called in main and only be needed for other functions
 * 		-> scope issues to consider once more comfortable with multi file project structure
 * - Some headers need to be included in function definition files 
 * - Running into issues: unknown type name string -> need to include <string>
 * + write std::string in .h, and use std namespace in .cpp
 * 		-> library/namespace scope issues
 * - All functions from v3.0 are now in separate files
 * 
 * Second: further modularise functions structure
 * - How to streamline input+monthly calculations section?
 * - Move weekInput validation function from inputValidation header to monthlyTotals file:
 * weekInputVal is only used inside getMonthlyTotal, now inputVal header is only for pure cin
 * input checking
 * - Variable scope issue: how to streamline input section?
 * 		- The variables themselves are not needed in main, only their values as argument for getLevel
 * 		- Include Totals header in Results file so getLevel can call Total as argument
 * - Remove continue check for each workout type in input section: implement general input validation in
 * inputValidation
 * - Create inputSection header and include monthlyTotals and inputValidation
 * - Copy whole input section from main to inputSection
 * - Remove if branches and cont boolean flag: input validation will be reimplemented after program
 * is restructured as implementation specifics could depend on program structure
 * - If a variable is declared+used in a function.cpp file, can another function.cpp file see and use
 * the variable? -> test with simple function: no
 * - Further modularising the input section would probably require arrays or pointers: let's focus on
 * the current objectives instead
 * - Rename inputSection as inputCheck for the intermediary values checking output
 * - Move to input section contents
 * - Idea: use for/switch structure to optimise input section? No: monthlyTotal variables need to exist
 * and be modified in main
 * 		+ this option is safer as there is no risk of undefined behaviour between variable declaration
 * 		and control branches
 * - Input validation + range check will be integrated into input code, so that no flags and if branches
 * are needed in main
 * - Can i improve input section by calling getMonthlyTotal inside get Level?
 * After all, monthly total variable value were needed as intermediary to calculate levels, but logically
 * they do not need to exist in main and could be 'thrown out' after level calculation is done
 * - Yes, that works
 * - Input validation check output section will have to be integrated into getMonthlyTotal
 * - Input validation logic: catch all errors at weekly workouts input (define keyword if user wants to exit?)
 * - Monthly input validation "safety net" now redundant
 * - Weekly input validation also redundant as input check is now consolidated into one flag
 * - Turns out monthly totals value was needed later for feedback output, removing it from this section as there
 * already is a totals recap during the input section
 * - Condensing program by calling functions inside functions + as arguments in other functions:
 * 		-> defining and using the necessary values while skipping intermediary variable declarations
 * - Wrote reusable getWorkoutType switch function
 * 
 * - Compiled + built, but input validation issue: char input still has program running until the end
 * 		-> Logic issue: used || instead of && in expression
 * - Next issue: error message shows, but program gets stuck in a loop
 * 		-> restructured do-while loop and added cin.ignore
 * - Issue: feedback output now happens in between workout type inputs
 * 		-> use 4 string variables to store feedback for each workout type
 * - Now 2 output related cycles: definition, then actual output
 * - Total workouts recap at the end would be more user friendly, hard to implement without arrays/structs
 * 
 * FINAL STRUCTURE:
 * - Two for loops with 1 <= i <= 4: one for input + first calculation,
 * another for output variables definition + output
 * - INPUT -> INPUT PROCESSING -> OUTPUT DEFINITION -> OUTPUT
 * - Structure reflects data processing input to output flow
 * 
 * 
 * NOTES:
 * - New topics learned: cin.fail, multi file structure, build issues, makefile, inclusion and namespace
 * issues, scope/data flow/variable lifetime considerations
 * - To-do: remove unnecessary header declarations where applicable

**/


#include "getWorkoutType.h"
#include "getMonthlyTotal.h"
#include "getResults.h"
#include "output.h"
#include <iostream>
using namespace std;

int main () {
	
	int upperBodyLevel=0;
	int lowerBodyLevel=0;
	int coreLevel=0;
	int cardioLevel=0;
		
	for (int i(1); i<=4; ++i) {
		
		string workoutType = getWorkoutType(i);
		
		int level = getLevel(getMonthlyTotal(workoutType));
		
		switch(i) {
			case 1: upperBodyLevel = level;
				break;
			case 2: lowerBodyLevel = level;
				break;
			case 3: coreLevel = level;
				break;
			case 4: cardioLevel = level;
				break;
		}					
	}
	
	for (int i(1); i<=4; ++i) {
		
		int feedbackLevel=0;
		
		switch(i) {
			case 1: feedbackLevel = upperBodyLevel;
				break;
			case 2: feedbackLevel = lowerBodyLevel;
				break;
			case 3: feedbackLevel = coreLevel;
				break;
			case 4: feedbackLevel = cardioLevel;
				break;
		}	
		
		string workoutType = getWorkoutType(i);
	
		output(workoutType, getLevelFeedback(feedbackLevel));
	}
	
	return 0;
}
