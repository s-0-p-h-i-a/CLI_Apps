/** Fitness Tracker v3.0 — Refactor Overview
 *
 * Refactor goals:
 * - Modularize code with functions
 * - Input validation via while loops
 * - Separate calculation, level assignment, and output
 *
 * Main workflow:
 * 1. getMonthlyTotal(title) → calculates monthly total for each workout type
 * 2. checkMonthlyTotal(total) → validates totals
 * 3. getLevel(total) → assigns fitness level
 * 4. getFeedback(level) → returns feedback string
 * 5. output(type, total, comment) → displays report
 *
 * Notes:
 * - Input validation and totals calculation modularized for reusability
 * - Output loop handles all workout types
 * - Limitations: no arrays yet, switch-case assignment cannot fully move to functions
 * - Further improvements: variable month length, repeated cycles, more modular structure
 */



#include <iostream>
using namespace std;

bool inputValid (int weekInput);

int getMonthlyTotal (string title);
bool checkMonthlyTotal (int totalToCheck);

int getLevel (int total);
string getFeedback (int j);
void output (string type, int total, string comment);


int main () {
	
	// Input + monthly totals calculation
	int upperBodyTotal = getMonthlyTotal("upper body");
	
	bool cont = checkMonthlyTotal(upperBodyTotal);
	
	int lowerBodyTotal(0);
	if (cont) {
		lowerBodyTotal = getMonthlyTotal("lower body");
		
		cont = checkMonthlyTotal(lowerBodyTotal);
	}
	
	int coreTotal(0);
	if (cont) {
		coreTotal = getMonthlyTotal("core");
		
		cont = checkMonthlyTotal(coreTotal);
	}
	
	int cardioTotal(0);
	if (cont) {
		cardioTotal = getMonthlyTotal("cardio");
		
		cont = checkMonthlyTotal(cardioTotal);
	}
	
	cout << "upper body total: " << upperBodyTotal << endl;
	cout << "lower body total: " << lowerBodyTotal << endl;
	cout << "core total: " << coreTotal << endl;
	cout << "cardio total: " << cardioTotal << endl;
	
	if (cont) {
		
		int upperBodyLevel = getLevel(upperBodyTotal);
		
		int lowerBodyLevel = getLevel(lowerBodyTotal);
		
		int coreLevel = getLevel(coreTotal);
		
		int cardioLevel = getLevel(cardioTotal);
		
		for (int i(1); i<=4; ++i) {
			
			int feedback;
			int totalOutput;		
			string typeOutput;
				
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
				break;
			}
				
			string feedbackOutput = getFeedback(feedback);
		
			output(typeOutput, totalOutput, feedbackOutput);	
							
			}
	}
	
	return 0;
}


bool inputValid (int weekInput) {
	
	bool isValid;
	
	if (weekInput < 0 || weekInput > 7) {
		isValid = false;
		cerr << "Invalid input! Try again" << endl;
	}
	else {
	isValid = true;	
	}
	
	return isValid;
	
}


int getMonthlyTotal (string title)	{
	
	cout << "Enter your " << title << " workouts." << endl;
	int workoutsTotal(0);
	for (int i(1); i<=4; ++i) {
		
	bool weekInputValid(false);
	
	int workoutsWeek(0);
	
	do {
			cout << "Week " <<
			i << " (0-7): " << endl;
			cin >> workoutsWeek;
			
			weekInputValid = inputValid(workoutsWeek);
				
		} while (!weekInputValid);
		
		workoutsTotal += workoutsWeek;
	}
	
	return workoutsTotal;
}


bool checkMonthlyTotal (int totalToCheck) {
	
	bool check = totalToCheck >= 0 && totalToCheck <= 28;
	
	return check;
	
}


int getLevel (int total) {
	
	int level(1);
	
	if (total >= 0 && total <= 7)
		{ level = 1; }
	else if (total > 7 && total <= 21)
		{ level = 2; }
	else if (total > 21 && total <= 28)
		{ level = 3; }
		
	return level;
}

			
string getFeedback (int j) {
	
	string feedbackOutput;
	
	switch (j) {
		case 1: feedbackOutput = "Not enough! Add more next month.";
			break;
		case 2: feedbackOutput = "You're doing good, keep going!";
			break;
		case 3: feedbackOutput = "Perfect, great job!";
			break;
	}	
	
	return feedbackOutput;		
}


void output (string type, int total, string comment) {

	cout << endl;			
	cout << "Monthly total for " << type << " workouts: "
	<< total << endl;
	cout << comment << endl;
	cout << endl;
	
}

			
			
			
			




