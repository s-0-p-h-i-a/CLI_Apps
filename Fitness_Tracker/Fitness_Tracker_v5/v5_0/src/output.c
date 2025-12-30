#include "output.h"
#include <stdio.h>
#include <string.h>

void output (char type[30], char comment[70]) {

	printf("\n");			
	printf("Feedback on %s workouts: %s\n", type, comment);	
}
