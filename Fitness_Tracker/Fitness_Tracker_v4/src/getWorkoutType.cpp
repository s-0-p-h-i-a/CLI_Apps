#include "getWorkoutType.h"
using namespace std;


std::string getWorkoutType(int i) {
	std::string workoutType;
	switch (i) {
			case 1: { workoutType = "upper body";}
				break;
			case 2: { workoutType = "lower body";}
				break;
			case 3: { workoutType = "core";}
				break;
			case 4: { workoutType = "cardio"; }
				break;
	}
	return workoutType;
}
