# Fitness Tracker v5 - Dev Log

**Series:** v5.0 → v5.1  
**Focus:** C port, arrays, enums, const correctness

---
## v5.0 - Initial C Port

- Migrated from C++ to C (`char` arrays, `scanf/printf`).

- Workout levels stored in `workoutLevels[4]`; feedback and workout names in global arrays.

- Looping and function arguments used plain integers.

- Modularized functions: `getMonthlyTotal()`, `getLevel()`, `output()`.

---
## v5.1 - Enums & Const Arrays

- Introduced `WORKOUTS`, `LEVELS`, and `WEEKS` enums for type-safe indexing.

- `workoutLevels` now uses `LEVELS` type; loops iterate over enums instead of raw integers.

- Global arrays `workoutType` and `levelFeedback` are now `const`.

- Added constants for array sizes and total counts (`TOTAL_WORKOUTS`, `TOTAL_LEVELS`).

- Function signatures updated to accept enums, improving clarity and maintainability.

---
## Overall Notes

- v5 series demonstrates **incremental improvement in C programming**:

    - v5.0: functional C port with arrays and modular structure.

    - v5.1: enhanced readability, type safety, and immutability.

- Core program behavior (monthly input → level calculation → feedback output) remains consistent.

**Tip:** Use v5.1 as the main reference for future development; v5.0 serves as a historical milestone showing initial migration from C++.

---
## Usage Note:

- Copy .h files in ./include into ./src folder to run program.