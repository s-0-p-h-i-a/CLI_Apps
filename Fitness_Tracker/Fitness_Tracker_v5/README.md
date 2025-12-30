# Fitness Tracker v5 - C Port Series

## Overview

Version 5 of the Fitness Tracker marks the migration from C++ to C, focusing on array-based data handling, modular design, and improved type safety. The series contains two main milestones:

- **v5.0:** Initial C port with arrays for workout levels and global string arrays for workout names and feedback.

- **v5.1:** Refined version introducing **enums** for workouts, levels, and weeks, plus **immutable `const` arrays** for the global “database.”

Both versions maintain the core functionality: collecting monthly workout data for four workout types and providing level-based feedback.

---
## Version Differences

### v5.0 - Initial C Port

- Ported from C++ to C, replacing `std::string` and `cin/cout` with `char` arrays and `scanf/printf`.

- Used arrays `workoutLevels[4]` for storing levels, and `workoutType[4]`/`levelFeedback[3]` for strings.

- Main loop indexing and feedback retrieval relied on integer indices.

- Functions adapted to C, with input validation and level mapping preserved.

### v5.1 — Enums & Const Arrays

- Introduced **`WORKOUTS`, `LEVELS`, and `WEEKS` enums** for safer and more readable indexing.

- `workoutLevels` array now uses `LEVELS` type.

- `workoutType` and `levelFeedback` declared as **`const` arrays** to prevent accidental modification.

- Constants added: `TOTAL_WORKOUTS`, `TOTAL_LEVELS`, `WORKOUT_NAMES_SIZE`, `FEEDBACK_SIZE`.

- Functions updated to accept enum types instead of raw integers.

- Loops iterate using enums and constants instead of numeric literals, improving readability and maintainability.

---
## Folder Structure

```
/Fitness_Tracker_v5
│── README.md                  # Overview of v5 series (this file)
│── Devlog.md
│
└── v5_0
│   └── include                # .h Header guards
│   └── src                    # Source files
│	│   │── getMonthlyTotal.c
│	│   │── getLevel.c
│	│   │── global.c.          # Contains workoutType and levelFeedback arrays
│	│   │── inputValidation.c
│	│   │── main.c
│	│   │── output.c
│	│   │── printInput.c
│	│   └── Makefile (optional)
│
└── v5_1
   └── include                 # .h Header guards
   └── src                     # Source files
	│   │── getMonthlyTotal.c
	│   │── getLevel.c
	│   │── global.c.          # Contains workoutType and levelFeedback arrays
	│   │── inputValidation.c
	│   │── main.c
	│   │── output.c
	│   │── printInput.c
	│   └── Makefile (optional)

```

---
## Notes

- v5 series demonstrates a stepwise progression in **C programming concepts**:

    - v5.0 emphasizes array usage and modular structure.

    - v5.1 adds type safety and const-correctness with enums and immutable arrays.

- Both versions are fully functional but v5.1 is recommended for maintainability and clarity.

---
## Usage Note:

- Copy .h files in ./include into ./src folder to run program.