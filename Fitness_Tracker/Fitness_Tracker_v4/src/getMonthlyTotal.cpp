#include "inputValidation.h"
#include "printInput.h"
#include "getMonthlyTotal.h"
#include "getWorkoutType.h"
#include <iostream>
using namespace std;

int getMonthlyTotal (string workoutType)	{
	
	cout << endl;
	cout << "Enter your " << workoutType << " workouts: \n";
	int workoutsTotal(0);
	
	for (int i(1); i<=4; ++i) {
		
		bool inputValid(true);
		
		int workoutsThisWeek(0);
		
		cout << endl;
		cout << "Week " << i << " (0-7): \n";
		
		do {
			
			if (!inputValid) {
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
				cout << endl;	
				cerr << "Invalid input! Value must be an integer between 0 and 7. \n" << endl;	
			}
				
			cin >> workoutsThisWeek;
				
			inputValid = inputValidation(cin.fail(), workoutsThisWeek);
					
		} while (!inputValid);
			
		workoutsTotal += workoutsThisWeek;
		
	}
	
	printInput(workoutType, workoutsTotal);
		
	return workoutsTotal;
}
