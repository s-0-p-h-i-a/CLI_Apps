# Fitness Tracker v5.1 Functions/Definitions Index

## global.h

### Contains:
- Enums used for for loop variables, arrays, and array sizes.
- Constant declarations for the same as above
- Constant "database" arrays with workout type and feedback comment strings
### Enums:
- `WORKOUTS` (0-3)
- `LEVELS` (0-2)
- `WEEKS` (1-4)
### Global constants:
```
extern const int TOTAL_WORKOUTS;
extern const int TOTAL_LEVELS;

extern const WORKOUTS FIRST_WORKOUT;

extern const int WORKOUT_NAMES_SIZE;
extern const int FEEDBACK_SIZE;
```
### "Database" constant arrays:
```
extern const char workoutType[4][11];
extern const char levelFeedback[3][35];
```
### Included in:
All source files except `inputValidation.c`

---
## getLevel.c

### Functions:

#### LEVELS getLevel (int total)
Takes the monthly total workouts for a given workout type and assigns it to a level from 1 to 3.

Level 1:    0 <= total <= 7
Level 2:    7 <   total <= 21
Level 3:  21 <   total <= 28
### Includes:
- `global.h`
- `getLevel.h`
### Calls: 
/
### Called in:
- Main:
```
	workoutLevels[i] = getLevel(getMonthlyTotal(i));
```

---
## getMonthlyTotal.c

### Functions:

#### int getMonthlyTotal (WORKOUTS i)
For a given workout type (mapped to int i):
- Takes user input: workouts done over 4 weeks (for i=1 to i=4)
- Input taken via buffer char, parsed to int at input validation (while)
- Tallies monthly total, prints it
- Returns monthly total
### Includes:
- `inputValidation.h`
- `printInput.h`
- `global.h`
- `getMonthlyTotal.h`
### Calls: 
```
- bool inputValidation(int valueToCheck)
```
```
- void printInput (const char *workoutType, int value)
```
### Called in:
- Main:
```
	workoutLevels[i] = getLevel(getMonthlyTotal(i));
```

---
## global.c

### Definitions:
- Global constants:
```
	const int TOTAL_WORKOUTS 	= 4;
	const int TOTAL_LEVELS 		= 3;
	
	const WORKOUTS FIRST_WORKOUT = UPPER_BODY;
	
	const int WORKOUT_NAMES_SIZE 	= 11;
	const int FEEDBACK_SIZE			= 35;
```

- Global "database arrays" containing workout type strings, feedback comment strings:

```
	char workoutType[4][11] = {"upper body", "lower body", "core", "cardio"};

	char levelFeedback[3][40] = {"Not enough! Add more next month.", 
		"You're doing good, keep going!","Perfect, great job!"};
```

---
## inputValidation.c

### Functions:
#### bool inputValidation(int valueToCheck)
Helper function for getMonthlyTotal:
- For a given workout type and week, checks whether weekly workouts are between 0 and 7
### Includes:
inputValidation.h
### Calls:
/
### Called in:
- `int getMonthlyTotal`
```
bool inputValid = sscanf(input, "%d", &workoutsThisWeek) == 1 && inputValidation(workoutsThisWeek);
```

---
## output.c

### Functions:

#### void output (const char type[WORKOUT_NAMES_SIZE], const char comment[FEEDBACK_SIZE])
Outputs personalised feedback on monthly activity for a given workout type:

```
printf("Feedback on %s workouts: %s\n", type, comment);	
```

### Includes:
- `global.h`
- `output.h`
### Calls:
/
### Called in:
- Main:
```
	output(workoutType[i], levelFeedback[workoutLevels[i]]);
```

---
## printInput.c

### Functions:

#### void printInput (const char * workoutType, int value) 
Helper function used in getMonthlyTotal to print monthly total for a given workout type. Used for intermediary value checking.

```
printf("Monthly total for %s workouts: %d\n", workoutType, value);
```

### Includes:
- `global.h`
- `printInput.h`
### Calls:
/
### Called in:
- `int getMonthlyTotal`
```
	printInput(workoutType[i], workoutsTotal);
```
