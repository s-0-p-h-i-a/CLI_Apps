# Fitness Tracker v5.0 Functions Index

## getLevel.c

### Functions:

#### int getLevel (int total)
Takes the monthly total workouts for a given workout type and assigns it to a level from 1 to 3.

Level 1:    0 <= total <= 7
Level 2:    7 <   total <= 21
Level 3:  21 <   total <= 28
### Includes:
- getLevel.h
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

#### int getMonthlyTotal (int i)
For a given workout type (mapped to int i):
- Takes user input: workouts done over 4 weeks (for i=1 to i=4)
- Input taken via buffer char, parsed to int at input validation (while)
- Tallies monthly total, prints it
- Returns monthly total
### Includes:
- inputValidation.h
- printInput.h
- global.h
- getMonthlyTotal.h
### Calls: 
```
- bool inputValidation(int valueToCheck)
```
```
- void printInput (char *workoutType, int value)
```
### Called in:
- Main:
```
	workoutLevels[i] = getLevel(getMonthlyTotal(i));
```

---
## global.c

### Definitions:
Global "database arrays" containing workout type strings, feedback comment strings.

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
#### int getMonthlyTotal (int i)
```
bool inputValid = sscanf(input, "%d", &workoutsThisWeek) == 1 && inputValidation(workoutsThisWeek);
```

---
## output.c

### Functions:

#### void output (char type[30], char comment[70])
Outputs personalised feedback on monthly activity for a given workout type:

```
printf("Feedback on %s workouts: %s\n", type, comment);	
```

### Includes:
output.h
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

#### void printInput (char * workoutType, int value)
Helper function used in getMonthlyTotal to print monthly total for a given workout type. Used for intermediary value checking.

```
printf("Monthly total for %s workouts: %d\n", workoutType, value);
```

### Includes:
printInput.h
### Calls:
/
### Called in:
- getMonthlyTotal.c
```
	printInput(workoutType[i], workoutsTotal);
```
