/** Fitness Tracker v3.0 sketch
 * Refactor: introduce functions, add while loop input validation
 * Process: observe program structure:
 * - 4 different combined input and monthly total calculation cycles with range based input validation for int types
 * - 4 level assignment cycles
 * - 4 output cycles
 * 
 * Part 1: input+calc section
 * Process:
 * Start from the middle level: one input+validation+calculation function, repeated 4 times?
 * 'Inner' level: bool function for input validation inside the middle level function?
 * 'Outer' level: main function that runs the middle function 4 times (possibility for easier expansion to more workout types?)?
 * 
 * Side notes:
 * - future improvement idea: let user choose workout cycle length (weeks or months), option for repeat cycles (eg 3 months, 1 year)
 * - current refactor will probably also involve a rework of the validity checks structure
 * 
 * Part 1 start:
 * - open separate file, isolate relevant code (input+calculation cycles)
 * - isolate code for one workout type
 * - remove mention of the workout type within the function, this can be output in main() or in a potential outer level function
 * - rename variable to generic workoutsWeek and workoutsTotal
 * - v2.2 loop count + break command to exit loop is for handling non int inputs, assuming int only inputs for now: since input validation goes in its own function,
 * this can be improved on later
 * 
 * - Middle function compiles -> do input validation function (inner function)
 * - Inner function compiles -> use it in middle function
 * - Both compile -> start outer function
 * - Realise outer function would have to return 4 separate values: not possible for now (arrays coming later in my course)
 * 
 * How to use these first 2 functions in main? Is input validation necessary between monthly total calculation for each workout type? Is it doable with my current knowledge?
 * Realise current structure only allows for 28 day months: leaving it like this for now to stay in scope
 * 
 * - Write a main(), use getMonthlyTotal to get the totals for each workout type
 * - Add string input for getMonthlyTotal to personalise cout request for input
 * - Write totals check function to avoid repeated code between getting monthly totals
 * - bool cont checking redundant in this case/assuming int only input but just doing it for practice
 * - add couts to do test run
 * - try to compile: scope issue with monthly total variables declaration inside if branches, fix that
 * - test run: it works
 * 
 * Part 1 refactor complete!
 * 
 * Part 2: level assignment
 * Process:
 * Same as in part 1:
 * - isolate upper body level assignment block from previous version
 * - change variable names to general ones
 * - put function "shell" around it
 * 
 * Side notes:
 * - levels concept still unrealistic (doing every workout every day is not healthy). Leaving as is for now, will be addressed in future rework
 * - functions implementation process in this refactor is highlighting areas where function modularity is limited,
 * and specific ways/situations where arrays would help a lot
 * 
 * - implement getLevel in main, same way as getMonthlyTotal
 * - keeping validity check boolean flag (cont) feels odd but keeping it in as placeholder until a future refactor/logic rework
 * - compile check for getLevel implementation
 * 
 * Part 3: output
 * 
 * Output section is a for loop with 3 sections:
 * 
 * 1. Assigns values to the variables used to output the report
 * 2. Define output string for feedback comment
 * 3. Output report message
 * 
 * This means: 3 functions
 * 
 * 3.1 Switch branch:
 * - impossible to turn the cases into a function without arrays
 * - will put the switch branch inside a function anyway for practice, placeholder for future rework
 * - isolate code, put function shell around it
 * - what should this function return? is it possible to have a function that returns nothing?
 * - realise turning this into a function is impossible due to variable scope issues
 * - switch branch inside of for loop goes into main
 * 
 * 3.2 String assignment switch branch:
 * - isolate code section
 * - put in function shell
 * - implement in for loop in main
 * - feedback output variables previously declared outside for loop, now inside as they are not used outside of the loop
 * - feedback output string variable direcly assigned at declaration with getFeedback
 * - compile check successful
 * 
 * 3.3 Final output:
 * - putting it in a function does not feel very necessary but doing it anyway to lay groundwork for more complex output
 * - copy code section
 * 
 * Side notes:
 * - increasing difficulty in defining separate but clearly understandable variable names
 * 
 * - put code in function shell: again, can a function return nothing?
 * - trying: function is int output and returns 1 (true)
 * - attempts to make this work were unsuccessful
 * - asked chatgpt for hints: learned that void functions are an option
 * - this worked (compiles)
 * - test run successful
 * 
 * - can a void function also be used for 3.1? at first thought there could still be variable scope issues
 * - trying it anyway to see how it goes
 * - realise it is still not possible due to variable scope: function assigns values to variables that need to be declared outside of function branch
 *
 * TO-DO:
 * - README
 * - Dev log
 * - Raw notes file
 * 
 * 

**/
