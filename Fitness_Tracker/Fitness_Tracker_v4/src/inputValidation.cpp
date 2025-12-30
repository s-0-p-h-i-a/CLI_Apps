#include "inputValidation.h"
#include <iostream>
using namespace std;

bool inputValidation(bool in, int valueToCheck) {
	
	bool isValid = !in && valueToCheck >= 0 && valueToCheck <= 7;
	
	return isValid;
	
}
