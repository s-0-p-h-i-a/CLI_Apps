// Fitness Tracker v2.2
// 4 workout types: upper body, lower body, core, cardio
// 4 weeks of data per workout type
// Totals and feedback calculated per workout type

// ^ = ChatGPT suggestion

// == Update Highlights (v2.2, 23/06/2025) ==
// - Replaced retry-if-invalid logic with do-while loops (always run once).
// - ^ Input validation now handled per week using local weekInputValid flags.
// - Global inputValid used to block processing/output if any invalid input occurs.
// - Added loopLimit + count to prevent infinite loops on bad input (e.g., chars).
// - Input validation now happens closer to input source, avoids repeating checks later.
// - Upper body block used as initial implementation; same logic applied to other blocks.
// - Outputs guarded by if (inputValid) to ensure only valid data is processed.
// - Known limitation: wrong type input (e.g., letters) breaks input stream behavior.
//   → Not fully fixable without cin.fail() and cin.clear() (planned for v3).
// - Level system kept simple for now (daily workouts = best score).

// == Planned for v3 ==
// - Add type checks with cin.fail()
// - Modularise input & level assignment into functions
// - Clean up redundant legacy validation


#include <iostream>
using namespace std;

int main() {
	
	//// Input
	// Input variables initialised at 0 to allow for direct use in total
	// frequency calculation inside the loops
	
	// Input validation variables
	const int loopLimit(10);
	bool inputValid(true);
	
	// Variable to stop infinite loop
	int count(0);
	
	// Upper Body
	int upperBody;
	int upperBodyTotal(0);
	cout << endl;
	for (int i(1); i<=4; ++i) {
		
		// Local input validation
		bool weekInputValid(false);
		
		do {
			// Input
			cout << "Enter number of upper body workouts for week " <<
			i << " (0-7): " << endl;
			cin >> upperBody;
			
			// Input validation
			if (upperBody < 0 || upperBody > 7) {
				++count;
				cout << "Invalid input! Try again" << endl; }
				
			else { weekInputValid = true; }
			
			if (count > loopLimit) { break; }
			
			// Only exit loop if valid input is given	
			} while (!weekInputValid);
		
		// Add week input to total	
		upperBodyTotal += upperBody;
		
		inputValid = weekInputValid;
		
		cout << endl; }
	
	// Lower Body
	// Proceed only if input valid
	int lowerBodyTotal(0);
	if (inputValid) {
		
		int lowerBody;
		for (int i(1); i<=4; ++i) {
			
			// Local input validation
			bool weekInputValid(false);
			
			do {
				// Input
				cout << "Enter number of lower body workouts for week " <<
				i << " (0-7): " << endl;
				cin >> lowerBody;
				
				// Input validation
				if (lowerBody < 0 || lowerBody > 7) {
					++count;
					cout << "Invalid input! Try again" << endl; }
					
				else { weekInputValid = true; }
				
				// Infinite loop prevention
				if (count > loopLimit) { break; }
			
			// Only exit loop if valid input is given	
			} while (!weekInputValid);
			
			// Add week input to total	
			lowerBodyTotal += lowerBody;
			cout << endl;
			
			inputValid = weekInputValid;
			} 
			
		cout << endl;	} 		
	
	// Core
	// Proceed only if input valid
	int coreTotal(0);
	if (inputValid) {
		
		int core;
		for (int i(1); i<=4; ++i) {
			
			// Local input validation
			bool weekInputValid(false);
			do {
				// Input
				cout << "Enter number of core workouts for week " <<
				i << " (0-7): " << endl;
				cin >> core;
				
				// Input validation
				if (core < 0 || core > 7) {
					++count;
					cout << "Invalid input! Try again" << endl; }
					
				else { weekInputValid = true; }
				
				// Infinite loop prevention
				if (count > loopLimit) { break; }
			
			// Only exit loop if valid input is given	
			} while (!weekInputValid);
		
			// Add week input to total	
			coreTotal += core;
			cout << endl; 
			
			inputValid = weekInputValid;}  
		
			
		cout << endl; }



	// Cardio
	// Proceed only if input valid
	int cardioTotal(0);
	if (inputValid) {
		
		int cardio;
		for (int i(1); i<=4; ++i) {
			
			// Local input validation
			bool weekInputValid(false);
			do {
				// Input
				cout << "Enter number of cardio workouts for week " <<
				i << " (0-7): " << endl;
				cin >> cardio;
				
				// Input validation
				if (cardio < 0 || cardio > 7) {
					++count;
					cout << "Invalid input! Try again" << endl; }
					
				else { weekInputValid = true; }
				
				// Infinite loop prevention
				if (count > loopLimit) { break; }
			
			// Only exit loop if valid input is given	
			} while (!weekInputValid);
		
			// Add week input to total	
			cardioTotal += cardio;
			cout << endl; 
			inputValid = weekInputValid;}  
		
			
		cout << endl; }
		
	//// Processing: assign level to totals
	if (inputValid) {
		
	// Upper body
	int upperBodyLevel;
	
		if (upperBodyTotal >= 0 && upperBodyTotal <= 7)
			{ upperBodyLevel = 1; }
		else if (upperBodyTotal > 7 && upperBodyTotal <= 21)
			{ upperBodyLevel = 2; }
		else if (upperBodyTotal > 21 && upperBodyTotal <= 28)
			{ upperBodyLevel = 3; }
			
	// Lower body
	int lowerBodyLevel;

		if (lowerBodyTotal >= 0 && lowerBodyTotal <= 7)
			{ lowerBodyLevel = 1; }
		else if (lowerBodyTotal > 7 && lowerBodyTotal <= 21)
			{ lowerBodyLevel = 2; }
		else if (lowerBodyTotal > 21 && lowerBodyTotal <= 28)
			{ lowerBodyLevel = 3; }
	
	// Core
	int coreLevel;
		
		if (coreTotal >= 0 && coreTotal <= 7)
			{ coreLevel = 1; }
		else if (coreTotal > 7 && coreTotal <= 21)
			{ coreLevel = 2; }
		else if (coreTotal > 21 && coreTotal <= 28)
			{ coreLevel = 3; }
			
	// Cardio
	int cardioLevel;
		
		if (cardioTotal >= 0 && cardioTotal <= 7)
			{ cardioLevel = 1; }
		else if (cardioTotal > 7 && cardioTotal <= 21)
			{ cardioLevel = 2; }
		else if (cardioTotal > 21 && cardioTotal <= 28)
			{ cardioLevel = 3; }

	//// Output definition & display
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
		cout << "Monthly total for " << typeOutput << " workouts: "
		<< totalOutput << endl;
		cout << feedbackOutput << endl;
		cout << endl;	}	
	}
	
	return 0;
}
