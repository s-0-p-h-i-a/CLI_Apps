# Fitness Tracker v3.0 — Dev Log

## Overview

v3.0 refactors v2.2 into a modular, function-based design. The main goals were:

- Modularize input, calculation, level assignment, feedback, and output

- Implement reusable input validation using while loops

- Maintain linear 28-day month tracking while preparing for future dynamic features

---
## Key Changes

1. **Function Modularization**

    - `getMonthlyTotal(title)` → handles input per workout type

    - `inputValid(weekInput)` → validates user input (0–7)

    - `checkMonthlyTotal(total)` → ensures total within valid range

    - `getLevel(total)` → assigns fitness level

    - `getFeedback(level)` → returns feedback string

    - `output(type, total, comment)` → prints monthly report

2. **Input Validation**

    - Replaced do…while loops with while loops inside `inputValid`

    - Validation is reusable for all workout types

    - Maintains safe program flow without global flags

3. **Separation of Concerns**

    - Input, calculation, level assignment, and output are fully separated

    - Main loop iterates over all workout types, using functions for processing

4. **Limitations**

    - No arrays or structs yet → switch-case in output cannot be fully modularized

    - Month length is fixed at 28 days

    - `cont` flag retained for practice, though redundant with int-only input

---
## Lessons Learned

- Functions improve readability and make future refactors easier

- While-loop validation is simpler and safer than previous global-flag design

- Switching to functions highlighted where arrays or structs would simplify code

- `void` functions are effective for output-only tasks

- Modular design prepares the codebase for repeated cycles and dynamic month lengths

---
## Next Steps

- Replace repeated workout variables with arrays/structs for scalable design

- Enable variable-length months and multi-month cycles

- Integrate type-safe input handling using `cin.fail()`

- Further compact input + validation logic for enhanced reusability

- Add nuanced feedback and realistic level calculations