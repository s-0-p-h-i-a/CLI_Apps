#include "monthlyTotals.h"
#include "getResults.h"
using namespace std;

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

			
string getLevelFeedback (int j) {
	
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
