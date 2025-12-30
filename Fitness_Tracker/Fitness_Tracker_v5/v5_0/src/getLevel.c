#include "getLevel.h"
#include <string.h>

int getLevel (int total) {
	
	int level = 1;
	
	if (total >= 0 && total <= 7)
		{ level = 0; }
	else if (total > 7 && total <= 21)
		{ level = 1; }
	else if (total > 21 && total <= 28)
		{ level = 2; }
		
	return level;
}
