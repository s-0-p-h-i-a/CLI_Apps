#include "inputValidation.h"
#include "monthlyTotals.h"
#include "printInput.h"
#include <iostream>
using namespace std;


void printInput (string workoutType, int value) {
	
	cout << endl;
	cout << "Monthly total for " << workoutType << " workouts: " << value << '\n';
	
}
