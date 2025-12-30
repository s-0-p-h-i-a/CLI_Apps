Fitness Tracker v5.0  Refactor
 * 
 MAIN CHANGES:
 - Moving project to C to start learning
 - Introducing C arrays: user gets an array of size 4, each cell stores the monthly level for 
 each workout type
 
 PROCESS:
 1. ARRAYS
 - Start in main, refactor functions as needed
 - Main difference: switch branches swapped for array cell mention
 - Change range for i in for loops to map to array cell numbers
 - 2 variables eliminated in main: int feedbackLevel and string workoutType
 
 2. MOVE TO C
 - Start by translating all i/o
 - Look into C input validation
 
 
 NOTES:
 - C seems to require more conscious consideration of scope, variable vs argument vs value, and data flow processes
 - Difficulty implementing getWorkoutType and getLevelFeedback: they 
 are supposed to return strings, but that is hard to implement due to 
 currently limited understanding of pointers, compounded by the string 
 "type" being a pointer to an array of chars
 - New idea: further implement "arrays as database" concept by defining 
 global const arrays containing the strings needed for output
 - Removed getLevelFeedback, renamed getResults to getLevel
 - getMonthly total now takes an int i as argument, net improvement as 
 workout type string was not explicitly needed to define which workout 
 type data is currently being collected
 - "Data" arrays containing workout name and feedback strings now in 
 global.h so other functions can access them
 
 
 TO-DO:
 - Learn about data structures in C (data, stack, heap)