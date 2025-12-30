// Fitness tracker program v2
// 4 workouts: upper body, lower body, core, cardio
// 4 weeks
// 4 workout totals: 1 for each week

// 06/06/25
// * = chatGPT suggestion
// New version of fitness tracker app, now implementing iterations
// Sketch: restart program from scratch, consider how for loops affect
//		   the flow and how the variables use changes
//		- no more need for separate weekly numbers for each workout type variable
//		- note possibility to integrate individual totals calculation
//		in the input section -> more integrated, data-saving and optimised
//		than v1 structure
//		- consider that frequency level assignment might also become more direct

// Start writing program: write program 'shell', consider new input format.
// Different workout types input not yet possible.
// Noted new implementation option: let user choose how many weeks to track
//	-> leaving this for laters for more gradual progress and focus on main structure change.
// Integrated input+totals calculation structure can be easily copy pasted
// and reworded for each different workout type.
// Noticed I am getting better at mentally 'automating' this manual process.
// Decided to keep previous version's switch branches for workout frequency level assignment.
// Decided to use longer but more explicit variables: upperTotal -> upperBodyTotal.
// Noticed no more input/main logic separation due to totals calculation existing inside
// the input loops.
// Output definition + display: previous version initialised counter variable,
// then 4 subsequent switch branches: each containing 4 embedded branches;
// and followed by a counter += 1 command. This is ready to be collapsed into a for loop.
// Increased difficulty level: copying output switch branch from v1 required.
// careful rereading to make sure of correct variable usage and correct brackets for embedded branches/loops.
// Note: iteration loop variable is used inside of it, but not modified.
// Noted how the previous implementation, while excessively verbose with embedded switch branches,
// allowed for almost seamless porting into v2 structure.

// Ideas for v2.1:
//	- Implement input validation
//	- * Further optimise output loop by removing redundant repeating output
//	 string definition commands

// Ideas for v3:
//	- Implement functions
//	- Let user choose how many weeks/months to track


#include <iostream>
using namespace std;

int main() {
	
	//// Input
	// Input variables initialised at 0 to allow for direct use in total
	// frequency calculation inside the loops
	
	// Upper Body
	int upperBody;
	int upperBodyTotal(0);
	cout << endl;
	for (int i(1); i<=4; ++i) {
		cout << "Enter number of upper body workouts for week: " <<
		i << endl;
		cin >> upperBody;
		
		// Adds number of workouts for each week to total
		upperBodyTotal += upperBody;
		}

	cout << endl;

	// Lower Body
	int lowerBody;
	int lowerBodyTotal(0);
	for (int i(1); i<=4; ++i) {
		cout << "Enter number of lower body workouts for week: " <<
		i << endl;
		cin >> lowerBody;
		
		// Adds number of workouts for each week to total
		lowerBodyTotal += lowerBody;
		}	

	cout << endl;	
		
	// Core
	int core;
	int coreTotal(0);
	for (int i(1); i<=4; ++i) {
		cout << "Enter number of core workouts for week: " <<
		i << endl;
		cin >> core;
		
		// Adds number of workouts for each week to total
		coreTotal += core;
		}

	cout << endl;

	// Cardio
	int cardio;
	int cardioTotal(0);
	for (int i(1); i<=4; ++i) {
		cout << "Enter number of cardio workouts for week: " <<
		i << endl;
		cin >> cardio;
		
		// Adds number of workouts for each week to total
		cardioTotal += cardio;
		}	
		
	cout << endl;
		
	//// Assign level to totals
	// Upper body
	int upperBodyLevel;
	switch (upperBodyTotal) {
		
		case 1: upperBodyLevel = 1;
			break;
		case 2: case 3: upperBodyLevel = 2;
			break;
		case 4: upperBodyLevel = 3;
			break;
		default: upperBodyLevel = 1; }		
		
	// Lower body
	int lowerBodyLevel;
	switch (lowerBodyTotal) {
		
		case 1: lowerBodyLevel = 1;
			break;
		case 2: case 3: lowerBodyLevel = 2;
			break;
		case 4: lowerBodyLevel = 3;
			break;
		default: lowerBodyLevel = 1; }	
		
	// Core
	int coreLevel;
	switch (coreTotal) {
		
		case 1: coreLevel = 1;
			break;
		case 2: case 3: coreLevel = 2;
			break;
		case 4: coreLevel = 3;
			break;
		default: coreLevel = 1; }			
		
	// Cardio
	int cardioLevel;
	switch (cardioTotal) {
		
		case 1: cardioLevel = 1;
			break;
		case 2: case 3: cardioLevel = 2;
			break;
		case 4: cardioLevel = 3;
			break;
		default: cardioLevel = 1; }	
		
	//// Output definition & display
	int feedback;
	int totalOutput;		
	string typeOutput;
	string feedbackOutput;
	
	for (int i(1); i<=4; ++i) {
		
			switch (i) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperBodyTotal;
					feedback = upperBodyLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerBodyTotal;
					feedback = lowerBodyLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 3: { typeOutput = "core";
					totalOutput = coreTotal;
					feedback = coreLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 4: { typeOutput = "cardio";
					totalOutput = cardioTotal;
					feedback = cardioLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break; 
				
			}
	
	cout << endl;			
	cout << "Monthly total for " << typeOutput << " workouts:"
	<< totalOutput << endl;
	cout << feedbackOutput << endl;
	cout << endl;	
		
	}	
	
	
	return 0;
}
