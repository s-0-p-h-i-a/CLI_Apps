// Fitness Tracker v2.1
// 4 workout types: upper body, lower body, core, cardio
// 4 weeks of data per workout type
// Totals and feedback calculated per workout type

// * = ChatGPT suggestion

// == Update Highlights (10/06/2025) ==
// - * Simplified feedback string generation by moving it outside nested switch branches
// - Replaced switch-based level assignment with if branches for better readability
// - Totals initialized at 0 to prevent unpredictable behavior if input is skipped
// - Added `inputsValid` boolean to prevent output if invalid input is detected
// - Output and level assignment now happen only if all inputs are valid

// == Input Validation Decisions ==
// - Each input validated inside its input loop (range: 0–7)
// - If input is invalid: user gets 1 retry, else program stops
// - Rejected options: infinite retries or in-loop counter manipulation (bad practice)
// - `inputsValid` flag set to false if second input fails validation
// - Prevents totals calculation and stops output if any input is invalid

// == Input Validation Issues ==
// - Current validation doesn’t catch non-integer (e.g., char) inputs
// - Attempted fix with range checks (e.g., `!(x >= 0 && x <= 7)`) doesn't catch wrong types
// - Realized char inputs can silently become ints, causing confusing behavior
// - Too-large integers also not caught; type checking to be added in future version

// == Structural Challenges ==
// - Used trial and error to debug variable scope issues inside conditionals
// - Declared variables outside if-branches to prevent scope-related compile errors
// - Avoided manipulating loop counters directly to break early
// - Repeated input blocks accepted for now due to differing variables per type

// == Feedback Logic Improvements ==
// - Adjusted level thresholds to accept daily workouts:
//     - Level 1: 0–7
//     - Level 2: 8–21
//     - Level 3: 22–28
// - Feedback only shown if all inputs are valid
// - Level logic simplified to if branches instead of nested switches

// == Reflections ==
// - Repeated input validation helped surface modularity issues
// - Using boolean flags helped manage flow control at scale
// - Noted how different validation layers build on each other:
//     1. Weekly frequency (0–7)
//     2. Monthly totals (0–28)
//     3. Validity check before feedback/output

// == To-Do for v2.2 ==
// - Add while loops to simplify if-for-if structures
// - Strengthen error handling and input validation

// == To-Do for v3 ==
// - Add type checks (e.g., `cin.fail()`) to reject non-integer input


#include <iostream>
using namespace std;

int main() {
	
	//// Input
	// Input variables initialised at 0 to allow for direct use in total
	// frequency calculation inside the loops
	
	// Input validation variable
	bool inputValid(true);
	
	// Upper Body
	int upperBody;
	int upperBodyTotal(0);
	cout << endl;
	for (int i(1); i<=4; ++i) {
		
		// Only proceed to next week if current week input is valid
		if (inputValid) {
		
			cout << "Enter number of upper body workouts for week: " <<
			i << endl;
			cin >> upperBody;
		
			// Input validation
			if (upperBody < 0 || upperBody > 7) {
				cout << "Invalid input! Try again" << endl;
				cin >> upperBody; }
			
			if (upperBody < 0 || upperBody > 7) { inputValid = false;}
		
			// Adds number of workouts for each week to total
			else { upperBodyTotal += upperBody; } } 
			cout << endl; }
		
	// Legacy input check, cf Dev Log, 'Challenges' Section:
	// if (upperBodyTotal < 0 || upperBodyTotal > 28) { inputValid = false; }
	// (Handled earlier through per-week input validation)
	
	// Lower Body
	// Proceed only if input valid
	int lowerBodyTotal(0);
	if (inputValid) {
		
		int lowerBody;
		for (int i(1); i<=4; ++i) {
			
			// Only proceed to next week if current week input is valid
			if (inputValid) {
			
				cout << "Enter number of lower body workouts for week: " <<
				i << endl;
				cin >> lowerBody;
			
				// Input validation
				if (lowerBody < 0 || lowerBody > 7) {
					cout << "Invalid input! Try again" << endl;
					cin >> lowerBody; }
				
				if (lowerBody < 0 || lowerBody > 7) { inputValid = false;}

				// Adds number of workouts for each week to total
				else { lowerBodyTotal += lowerBody; } } } 
				cout << endl; } 	
	
	// Core
	// Proceed only if input valid
	int coreTotal(0);
	if (inputValid) {
		
		int core;
		for (int i(1); i<=4; ++i) {
			
			// Only proceed to next week if current week input is valid
			if (inputValid) {
			
				cout << "Enter number of core workouts for week: " <<
				i << endl;
				cin >> core;
			
				// Input validation
				if (core < 0 || core > 7) {
					cout << "Invalid input! Try again" << endl;
					cin >> core; }
			
				if (core < 0 || core > 7) { inputValid = false;}
			
				// Adds number of workouts for each week to total
				else { coreTotal += core; } } } 
				cout << endl; }

	// Cardio
	// Proceed only if input valid
	int cardioTotal(0);
	if (inputValid) {

		int cardio;
		for (int i(1); i<=4; ++i) {
			
			// Only proceed to next week if current week input is valid
			if (inputValid) {
			
				cout << "Enter number of cardio workouts for week: " <<
				i << endl;
				cin >> cardio;
			
				// Input validation
				if (cardio < 0 || cardio > 7) {
					cout << "Invalid input! Try again" << endl;
					cin >> cardio; }

				if (cardio < 0 || cardio > 7) { inputValid = false;}

				// Adds number of workouts for each week to total
				else { cardioTotal += cardio; } } } 
				cout << endl; }
		
	//// Processing: assign level to totals
	// Upper body
	int upperBodyLevel;
	if (inputValid) {
	
		if (upperBodyTotal >= 0 && upperBodyTotal <= 7)
			{ upperBodyLevel = 1; }
		else if (upperBodyTotal > 7 && upperBodyTotal <= 21)
			{ upperBodyLevel = 2; }
		else if (upperBodyTotal > 21 && upperBodyTotal <= 28)
			{ upperBodyLevel = 3; }
		else { inputValid = false; } }

	// Lower body
	int lowerBodyLevel;
	if (inputValid) {			
		
		if (lowerBodyTotal >= 0 && lowerBodyTotal <= 7)
			{ lowerBodyLevel = 1; }
		else if (lowerBodyTotal > 7 && lowerBodyTotal <= 21)
			{ lowerBodyLevel = 2; }
		else if (lowerBodyTotal > 21 && lowerBodyTotal <= 28)
			{ lowerBodyLevel = 3; }
		else { inputValid = false; } }
	
	// Core
	int coreLevel;
	if (inputValid) {
		
		if (coreTotal >= 0 && coreTotal <= 7)
			{ coreLevel = 1; }
		else if (coreTotal > 7 && coreTotal <= 21)
			{ coreLevel = 2; }
		else if (coreTotal > 21 && coreTotal <= 28)
			{ coreLevel = 3; }
		else { inputValid = false; } }		
	
	// Cardio
	int cardioLevel;
	if (inputValid) {
		
		if (cardioTotal >= 0 && cardioTotal <= 7)
			{ cardioLevel = 1; }
		else if (cardioTotal > 7 && cardioTotal <= 21)
			{ cardioLevel = 2; }
		else if (cardioTotal > 21 && cardioTotal <= 28)
			{ cardioLevel = 3; }
		else { inputValid = false; } }	
	
	// Proceed only if input valid
	if (!inputValid)
		{ cout << "Error! Invalid input." << endl; }

	//// Output definition & display
	else {
		int feedback;
		int totalOutput;		
		string typeOutput;
		string feedbackOutput;
		
		for (int i(1); i<=4; ++i) {
			
			// Define relevant workout type at this stage of the loop
			switch (i) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperBodyTotal;
					feedback = upperBodyLevel; }
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerBodyTotal;
					feedback = lowerBodyLevel; }
				break;
			case 3: { typeOutput = "core";
					totalOutput = coreTotal;
					feedback = coreLevel; }
				break;
			case 4: { typeOutput = "cardio";
					totalOutput = cardioTotal;
					feedback = cardioLevel; }
				break; }
			
			// Define relevant feedback at this stage of the loop
			switch (feedback) {
				case 1: feedbackOutput = "Not enough! Add more next month.";
					break;
				case 2: feedbackOutput = "You're doing good, keep going!";
					break;
				case 3: feedbackOutput = "Perfect, great job!";
					break; }
			
			// Output: workout type + total over 4 weeks + feedback
			cout << endl;			
			cout << "Monthly total for " << typeOutput << " workouts:"
			<< totalOutput << endl;
			cout << feedbackOutput << endl;
			cout << endl;	}	
	}
	
	return 0;
}
