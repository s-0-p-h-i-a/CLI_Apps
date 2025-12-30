# Fitness Tracker v5.0 - C Port

## Overview

Fitness Tracker v5.0 is a refactored version of the previous C++ implementation (v4) and is the first version fully implemented in **C**. The primary goal of this version is to learn C language fundamentals, improve data handling with arrays, and simplify the program logic while maintaining the same functional behavior: collecting monthly workout data for four workout types and providing feedback levels.

This version introduces **arrays as central data structures**, removes certain intermediary variables from `main`, and moves string-based data to a **global header** to simplify string handling in C.

---
## Key Changes from v4

### 1. Move to C

- All C++ constructs (like `std::string` and `cin`) were replaced with C equivalents (`char arrays`, `printf`, `scanf`).
- Functions that previously returned strings (`getWorkoutType`, `getLevelFeedback`) are replaced by global arrays in `global.h`.
- Input validation and I/O were reimplemented using C’s `scanf` and looping constructs.
- Namespaces and headers were simplified for C conventions.

### 2. Array-Based Data Handling

- **Workout levels:** Instead of separate variables for each workout type (`upperBodyLevel`, `lowerBodyLevel`, etc.), v5 stores all levels in an array `workoutLevels[4]`.
- **Global data arrays:**
    - `workoutType[4]`: Stores workout names.
    - `levelFeedback[3]`: Stores feedback messages for levels 1–3.
- Main `for` loops now use **array indices** instead of `switch` statements, eliminating redundant variables like `feedbackLevel` and `workoutType` inside `main`.

### 3. Function Updates

- `getMonthlyTotal()` now accepts an **integer index** instead of a string workout type, reflecting the shift to arrays.
- `getLevelFeedback()` was removed; feedback is now directly indexed from `levelFeedback` in `main`.
- `getResults()` from v4 was renamed to `getLevel()`.

### 4. Conceptual/Logical Improvements

- Intermediary variables in `main` were removed wherever possible.
- Input validation is more consolidated.
- Arrays act as a simple “database” for workout names, feedback, and levels, demonstrating C’s approach to static data storage.

---
## Notes & Learning Points

- C requires **careful management of pointers, scope, and value passing**. Returning strings from functions is more complex due to memory handling, which led to the decision to use global "data arrays".

- Using global constant arrays is a practical approach to store and reuse strings without dynamic memory allocation. This is possibly a better approach in terms of separation of concerns and future-proofing.

- Understanding arrays as a data storage method is critical before moving to dynamic structures or structs.

- Future work includes learning **data structures in C**, memory management (stack vs heap), and improving modularity with structs or enums.

---
## File Structure

```
/Fitness_Tracker_v5/v5_0
└── include                # .h Header guards
│   │── main.c
└── src                    # Source files
│   │── .h                 # Header guards
│   │── global.c           # Contains workoutType and levelFeedback arrays
│   │── main.c
│   │── inputValidation.c
│   │── printInput.c
│   │── getMonthlyTotal.c
│   │── getLevel.c
│   │── output.c
│   │── Makefile (optional)
```

---
## Usage Note:

- Copy .h files in ./include into ./src folder to run program.


