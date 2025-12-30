# Fitness Tracker v4.0 Functions Index

## getMonthlyTotal.cpp

### Functions:

#### int getMonthlyTotal (string workoutType)
Takes a workout type and prompts user to enter all (0-7) workouts of this type done each week 
(1-4), returns monthly total for type.

### Includes:
- inputValidation.h
- printInput.h
- getMonthlyTotal.h

### Calls: 
- bool inputValidation(bool in, int valueToCheck)

- void printInput (string workoutType, int value)

### Called in:
- Main:
	int level = getLevel(getMonthlyTotal(workoutType));

---
## getResults.cpp

### Functions:

#### int getLevel (int total)
Takes a monthly total of workouts done (for a given type) and assigns a level to it:

Level 1: 0 	<= total <= 7
Level 2: 7 	< total <= 21
Level 3: 21 < total <= 28

* Levels are unrealistic but kept simple for now

#### string getLevelFeedback (int j)
Takes a performance level (for a given workout type) and returns a feedback comment string, to be 
used in the output section.

### Includes:
getResults.h

### Calls:
/

### Called in:
#### int getLevel (int total)
- Main:
	int level = getLevel(getMonthlyTotal(workoutType));

#### string getLevelFeedback (int j)
- Main:
	output(workoutType, getLevelFeedback(feedbackLevel));
	
---
## getWorkoutType.cpp

### Functions:

#### string getWorkoutType(int i)
Maps a workout name (string) to its predefined "index" number:

1 = "upper body"
2 = "lower body"
3 = "core"
4 = "cardio"

### Includes:
getWorkoutType.h

### Calls:
/

### Called in:
- Main:
	string workoutType = getWorkoutType(i);

---
## inputValidation.cpp

### Functions:

#### bool inputValidation(bool in, int valueToCheck)
Currently used to check weekly workout totals input in getMonthlyTotal on two levels:

1. in = cin.fail()
2. valueToCheck = 0-7

bool isValid = !in && valueToCheck >= 0 && valueToCheck <= 7;

Unspecific name left as placeholder for future refactors (this specific input check might be moved 
elsewhere).

### Includes:
inputValidation.h

### Calls:
/

### Called in:
- getMonthlyTotal.cpp

---
## output.cpp

### Functions:

#### void output (string type, string comment) 
Takes workout type string + level feedback string and outputs structured feedback comment:

	cout << "Feedback on " << type << " workouts: \n";
	cout << comment << '\n';

### Includes:
output.h

### Calls:
/

### Called in:
- Main:
	output(workoutType, getLevelFeedback(feedbackLevel));

---
## printInput.cpp

### Functions:

#### void printInput (string workoutType, int value)
Takes workout type string + monthly total value and prints them:

cout << "Monthly total for " << workoutType << " workouts: " << value << '\n';

Used for intermediary values check while in user input loop.

### Includes:
printInput.h

### Calls:
/

### Called in:
- getMonthlyTotal:
	printInput(workoutType, workoutsTotal);
