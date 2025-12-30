// Fitness tracker program v1
// 4 workouts: upper body, lower body, core, cardio
// 4 weeks
// 4 workout totals: 1 for each week

// 26/05
// Change from v0: different implementation for output definition structure

#include <iostream>
using namespace std;

int main () {
	
	////// User Input	
	//// Upper body
	// Variables
	int upperBody1;
	int upperBody2;
	int upperBody3;
	int upperBody4;
	
	// Message + input
	cout << endl;
	cout << "Enter your upper body workouts for weeks 1, 2, 3 and 4: " << endl;
	cin >> upperBody1 >> upperBody2 >> upperBody3 >> upperBody4 ;
	cout << endl;
	
	//// Lower body
	// Variables
	int lowerBody1;
	int lowerBody2;
	int lowerBody3;
	int lowerBody4;
	
	// Message + input
	cout << "Enter your lower body workouts for weeks 1, 2, 3 and 4: " << endl;
	cin >> lowerBody1 >> lowerBody2 >> lowerBody3 >> lowerBody4 ;
	cout << endl;
	
	//// Core
	// Variables
	int core1;
	int core2;
	int core3;
	int core4;
	
	// Message + input
	cout << "Enter your core workouts for weeks 1, 2, 3 and 4: " << endl;
	cin >> core1 >> core2 >> core3 >> core4 ;
	cout << endl;
	
	//// Cardio
	// Variables
	int cardio1;
	int cardio2;
	int cardio3;
	int cardio4;
	
	// Message + input
	cout << "Enter your cardio workouts for weeks 1, 2, 3 and 4: " << endl;
	cin >> cardio1 >> cardio2 >> cardio3 >> cardio4 ;
	cout << endl;
	
	////// Main logic
	//// Calculate monthly totals
	// Upper body
	int upperTotal;
	upperTotal = upperBody1 + upperBody2 + upperBody3 + upperBody4;
	
	// Lower body
	int lowerTotal;
	lowerTotal = lowerBody1 + lowerBody2 + lowerBody3 + lowerBody4;
	
	// Core
	int coreTotal;
	coreTotal = core1 + core2 + core3 + core4;
	
	// Cardio
	int cardioTotal;
	cardioTotal = cardio1 + cardio2 + cardio3 + cardio4;
	
	//// Assign level to totals
	// Upper body
	int upperLevel;
	switch (upperTotal) {
		
		case 1: upperLevel = 1;
			break;
		case 2: case 3: upperLevel = 2;
			break;
		case 4: upperLevel = 3;
			break;
		default: upperLevel = 1; }
		
	// Lower body
	int lowerLevel;
	switch (lowerTotal) {
		
		case 1: lowerLevel = 1;
			break;
		case 2: case 3: lowerLevel = 2;
			break;
		case 4: lowerLevel = 3;
			break;
		default: lowerLevel = 1; }
		
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
		

	//// Output definition + display
	int count(1);		
	int feedback;
	int totalOutput;		
	string typeOutput;
	string feedbackOutput;

	// 1: upper body
	switch (count) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperTotal;
					feedback = upperLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerTotal;
					feedback = lowerLevel;
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
				
	cout << "Monthly total for " << typeOutput << " workouts:"
	<< totalOutput << endl;
	cout << feedbackOutput << endl;
	cout << endl;
	
	count += 1;
	
	// 2: lower body
	switch (count) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperTotal;
					feedback = upperLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerTotal;
					feedback = lowerLevel;
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
				
	cout << "Monthly total for " << typeOutput << " workouts:"
	<< totalOutput << endl;
	cout << feedbackOutput << endl;
	cout << endl;
	
	count += 1;
	
	// 3: core
	switch (count) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperTotal;
					feedback = upperLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerTotal;
					feedback = lowerLevel;
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
				
	cout << "Monthly total for " << typeOutput << " workouts:"
	<< totalOutput << endl;
	cout << feedbackOutput << endl;
	cout << endl;
	
	count += 1;
	
	// 4: cardio
	switch (count) {
			case 1: { typeOutput = "upper body";
					totalOutput = upperTotal;
					feedback = upperLevel;
					switch (feedback) {
						case 1: feedbackOutput = "Not enough! Add more next month.";
							break;
						case 2: feedbackOutput = "You're doing good, keep going!";
							break;
						case 3: feedbackOutput = "Perfect, great job!";
							break; }}
				break;
			case 2: { typeOutput = "lower body";
					totalOutput = lowerTotal;
					feedback = lowerLevel;
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
				
	cout << "Monthly total for " << typeOutput << " workouts:"
	<< totalOutput << endl;
	cout << feedbackOutput << endl;
	cout << endl;
	
	
	return 0;
}



