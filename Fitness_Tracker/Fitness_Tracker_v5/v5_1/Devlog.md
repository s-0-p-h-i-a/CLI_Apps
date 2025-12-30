# Fitness Tracker v5.1 - Dev Log

**Date:** 29/11/25 
**Version:** 5.1 - Enums & Const Arrays

---
## Main Updates

- Introduced **enums**:

    - `WORKOUTS` for workout types

    - `LEVELS` for feedback levels

    - `WEEKS` for weekly indices

- Replaced numeric loop indices and level variables with enum types for **type safety**.

- Updated function arguments and return types to use enums where relevant.

---
## Global Data Changes

- `workoutType[4][11]` and `levelFeedback[3][35]` are now **`const` arrays**, defined in `global.c`.

- Introduced constants: `TOTAL_WORKOUTS`, `TOTAL_LEVELS`, `WORKOUT_NAMES_SIZE`, `FEEDBACK_SIZE`.

- Loops and array accesses now reference constants and enums instead of literals.

---
## Code & Logic Improvements

- Main logic unchanged but cleaner and safer:
```
for (WORKOUTS i = FIRST_WORKOUT; i < TOTAL_WORKOUTS; ++i) { ... }
```
- Feedback accessed directly from `levelFeedback[workoutLevels[i]]`.

- Eliminates magic numbers, improves maintainability, and clarifies intent.

---
## Notes / Lessons

- Enums improve readability and prevent accidental out-of-bounds indexing.

- Const arrays act as an immutable “database” for workouts and feedback.

- Prepares the foundation for future C improvements: structs, dynamic memory, and more advanced data handling.

**Reference:** See README v5.1 for detailed overview and file structure.