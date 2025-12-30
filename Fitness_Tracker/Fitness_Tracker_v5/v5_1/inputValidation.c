#include "inputValidation.h"
#include <stdbool.h>

bool inputValidation(int valueToCheck) {
	
	bool isValid = valueToCheck >= 0 && valueToCheck <= 7;
	
	return isValid;
}
