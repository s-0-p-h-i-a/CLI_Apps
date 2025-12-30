#include "global.h"
#include "getLevel.h"
#include <string.h>

LEVELS getLevel (int total) {
	
	LEVELS level = LEVEL_ONE;
	
	if (total >= 0 && total <= 7)
		{ level = LEVEL_ONE; }
	else if (total > 7 && total <= 21)
		{ level = LEVEL_TWO; }
	else if (total > 21 && total <= 28)
		{ level = LEVEL_THREE; }
		
	return level;
}
