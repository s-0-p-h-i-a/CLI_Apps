# Fitness Tracker Project (v3.0)

A C++ program to track workout frequency across a month. This version refactors v2.2 by modularizing the code into functions, separating input, calculation, level assignment, and output, and implementing while-loop-based input validation. Arrays and fully dynamic structures are not yet used, but the architecture now prepares the codebase for easier future expansion.

---
## Project Summary

**Goal:**  
Strengthen understanding of functions, modular program design, and structured input/output handling — all while maintaining beginner-friendly C++ practices.

**Focus Areas:**

- Modularization of workflow with dedicated functions for input, validation, level calculation, feedback, and output

- Input validation via while loops within reusable functions

- Separation of concerns: calculation, level assignment, feedback generation, and output

- Preparing for future modularization improvements, such as arrays, structs, and variable month lengths

---
## Core Concept

**Workout Types:**

- Upper Body
- Lower Body
- Core
- Cardio

**Structure:**

- 4 weeks of user input per workout type

- Input: number of workouts per week, validated between 0–7

- Output: total monthly workouts, fitness level, and feedback


**Frequency Categories:**

- 0–7: insufficient (level 1)

- 8–21: good consistency (level 2)

- 22–28: excellent (level 3)

---
## Development Timeline

**v0–v2.2**

- Incrementally introduced loops, nested logic, input validation, do…while loops, local flags, and loop-limit protection
- Focused on safe input handling without functions or arrays

**v3.0**

- Introduced functions for modular workflow: `getMonthlyTotal`, `inputValid`, `checkMonthlyTotal`, `getLevel`, `getFeedback`, `output`

- Input validation now handled in a dedicated function using while loops

- Monthly total calculation separated from input validation

- Level assignment and feedback generation separated from input/output

- Output formatted via a dedicated function for clarity and reusability

- Limitations: no arrays yet; switch-case in output cannot be fully modularized without arrays

- Preparations made for future enhancements like variable month lengths, repeated cycles, and full modularization

---

## Implementation Highlights (v3.0)

- **Function-based workflow:**
    
    1. `getMonthlyTotal(title)` → calculates monthly total per workout type

    2. `checkMonthlyTotal(total)` → validates monthly totals

    3. `getLevel(total)` → determines fitness level

    4. `getFeedback(level)` → generates feedback string

    5. `output(type, total, comment)` → displays report

- Input validation handled within `inputValid` function, reusable across workout types

- Output loop iterates through all workout types, assigning totals, levels, and feedback

- Functions return meaningful values (`int`, `bool`, `string`) or `void` for output

- Maintains linear frequency categories; still limited to 28-day months

- Modular structure enables easier future addition of arrays, structs, or dynamic cycles

---
## Reflections & Takeaways

- First major refactor with proper functions, separating input, calculation, and output

- Modular design improves readability, maintainability, and debugging

- While-loop input validation reinforces structured error handling

- Function-based workflow exposes limitations in C++ without arrays or structs

- Placeholders like `cont` boolean flag kept for practice and future refactors

- Learned how `void` functions and returned values can manage program flow without global flags

---
## Future Improvements

- Implement arrays or structs to replace repeated variable blocks for workout types

- Allow variable-length months and repeated cycles (e.g., multi-month tracking)

- Fully modularize switch-case assignment logic using data structures

- Integrate type-safe input handling via `cin.fail()`

- Further separate and compact input + validation logic for enhanced reusability

- Add advanced feedback based on multiple metrics (e.g., intensity, balance)

---
## Files

- `fitnesstracker_v0.cc`: initial manual version

- `fitnesstracker_v1.cc`: grouped nested switch logic

- `fitnesstracker_v2_0.cc`: for-loop iteration, no validation

- `fitnesstracker_v2_1.cc`: one-shot validation with global flag

- `fitnesstracker_v2_2.cc`: retryable validation with loop protection

- `fitnesstracker_v3_0.cc`: function-based refactor with modular input, calculation, level assignment, and output

- `README.md`: this file

- `Fitness Tracker v3.0 Dev Log`

---
## Devlog Snapshot (v3.0)

v3.0 marks the first major modular refactor. The program now separates input, validation, calculation, level assignment, and output into functions. While arrays are not yet implemented, the modular structure lays the groundwork for cleaner code, reusability, and scalable future improvements. The switch-case limitations in output illustrate where arrays or structs will be necessary. Input validation using while loops ensures safe, repeated entry attempts, reinforcing best practices in C++ control flow.

---
## Next Steps

- Introduce arrays or structs for scalable workout type management

- Enable variable-length cycles (weeks/months) and repeated tracking

- Collapse duplicate input blocks into reusable, fully parameterized functions

- Integrate `cin.fail()` for robust type-safe input handling

- Expand feedback granularity and adjust unrealistic level calculations

---
## Documentation Workflow & AI Assistance

All documentation is derived from engineering notes taken during development. Notes are written manually on top of `.cc` files. AI tools are used selectively to assist with formatting, summarizing, and polishing, but all technical decisions are verified manually. Raw notes remain in a dev diary folder for traceability and transparency.