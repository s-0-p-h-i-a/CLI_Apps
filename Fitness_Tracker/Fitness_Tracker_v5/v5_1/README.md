# Fitness Tracker v5.1 - C Port with Enums and Const Arrays

## Overview

Fitness Tracker v5.1 refines v5.0 by introducing **enums for workout types, levels, and weeks** and **immutable global arrays** for workout names and feedback. The functional behavior remains the same: collecting monthly workout data for four workout types and providing level-based feedback.

This version emphasizes **type safety, readability, and maintainability** while keeping the program fully in C.

---
## Key Changes from v5.0

### 1. Enums

- `WORKOUTS` enum replaces numeric indices for workout types.

- `LEVELS` enum replaces numeric indices for level values.

- `WEEKS` enum replaces numeric week values in internal calculations.  
    **Benefit:** Improves readability, reduces magic numbers, and prevents accidental out-of-bounds errors.

### 2. Const-Correct Global Arrays

- `workoutType[4][11]` and `levelFeedback[3][35]` are now `const char` arrays, defined in `global.c`.  
    **Benefit:** Arrays are immutable, enforcing the “database” concept and preventing accidental modification.

### 3. Constants for Sizes

- Introduced `TOTAL_WORKOUTS`, `TOTAL_LEVELS`, `WORKOUT_NAMES_SIZE`, and `FEEDBACK_SIZE`.  
    **Benefit:** Centralizes array dimensions for easier maintenance and safer loops.

### 4. Main Logic Updates

- `main.c` now uses `WORKOUTS` and `LEVELS` types for loop indices and workout levels.

- Loops iterate from `FIRST_WORKOUT` to `TOTAL_WORKOUTS`.

- Function argument and return types updated to match enums.  
    **Benefit:** Ensures type safety and clarifies the program’s intent.

### 5. Simplified and Safer Data Flow

- Feedback levels are accessed via `levelFeedback[workoutLevels[i]]`.

- No numeric literals for indexing; everything is tied to enums or constants.

- Global arrays remain the central “database” for names and feedback.

---
## Program Structure

```
/Fitness_Tracker_v5/v5_1
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
## Notes & Learning Points

- Enums and `const` arrays improve **type safety, maintainability, and readability**.

- Program logic is unchanged but safer, easier to understand, and easier to scale.

- Preparing groundwork for future improvements: structs, dynamic memory, and more advanced C data structures.

---
## Usage Note:

- Copy .h files in ./include into ./src folder to run program.