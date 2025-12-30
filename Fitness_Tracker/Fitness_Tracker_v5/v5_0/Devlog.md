# Fitness Tracker v5.0 - Dev Log

**Date:** 28/11/25 
**Version:** 5.0 - C Port

---
## Main Changes

- **Language migration:** Project moved from C++ to C.

- **Array-based storage:** Monthly workout levels stored in `workoutLevels[4]` instead of separate variables.

- **Global string arrays:** `workoutType[4]` and `levelFeedback[3]` in `global.h` replace functions returning strings.

- **Function updates:**

    - `getMonthlyTotal(i)` takes index `i` instead of a string.
    - `getLevelFeedback()` removed; feedback indexed directly from `levelFeedback`.
    - `getResults()` renamed to `getLevel()`.

- **Simplified main:** Removed intermediary variables (`feedbackLevel`, `workoutType`) and `switch` statements; all loops use array indices.

---
## Conceptual / Logic Improvements

- Arrays now act as a “database” for workout names, feedback, and levels.
- Consolidated input validation in `getMonthlyTotal()`.
- Emphasis on scope, argument vs value handling, and data flow in C.

---
## Notes / Lessons

- Returning strings from functions is tricky in C; using global arrays is simpler.
- Main `for` loops illustrate cleaner data flow from input → level calculation → output.
- Preparing groundwork for future improvements: structs, dynamic data, memory management.

**Reference:** See README for detailed conceptual changes and C implementation differences.