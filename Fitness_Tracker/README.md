# Fitness Tracker — C/C++ Learning Project

A progressive, versioned C/C++ project for tracking monthly workout consistency while practicing core programming concepts. Each version explores new C/C++ structures while reinforcing clean code habits, control flow, and modular thinking.

---
## Latest Version:

- v5.0: refactor from C++ to C, introduce arrays

---
## Overview

Part of my hands-on **C/C++ learning journey**, focusing on:

- Building procedural logic from the ground up
- Practicing syntax, logic, data management and input/output
- Structuring and iterating maintainable code as new topics are learned
- Documenting development phases for clarity and traceability

---
## Version Progression

| Version | Focus               | Key Features                                                                                                           |
| ------- | ------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| `v0`    | Manual logic        | Fully explicit blocks, no loops or validation                                                                          |
| `v1`    | Grouped logic       | Nested switches to reduce duplication                                                                                  |
| `v2.0`  | Iteration           | `for` loops for input/output, no validation                                                                            |
| `v2.1`  | Input validation    | Range checks using `if`, retry handling                                                                                |
| `v2.2`  | Error handling prep | `do-while` loops, loop limiter for bad input, groundwork for type checks                                               |
| `v3.0`  | Modular refactor    | Functions for input, validation, calculation, level assignment, output; while-loop input validation; reusable workflow |
| `v4.0`  | Multi-file refactor | Separate header/header guards separated by general purpose, containing 1 or more functions; cleaner main               |
| `v5.0`  | C and arrays        | Introducing arrays for improved efficiency, porting app to C for practice                                              |

---
## Core Concept

Tracks **four workout types**: Upper Body, Lower Body, Core, Cardio.

For each workout type:

- Users enter weekly workouts over 4 weeks
- Program totals monthly frequency and assigns fitness level

Then, personalised level-based feedback is output.

**Frequency Categories:**

- 0–7: insufficient (level 1)
- 8–21: good consistency (level 2)
- 22–28: excellent (level 3)

### Structure:

- 4 workout types -> mapped to integers 0-3 to use for loops
- Global arrays for workout type strings (4 types -> elements) and feedback comment strings (3 levels -> elements)
- Main: int workoutLevels[4] and 2 for loops where each loop corresponds to one workout type:
	1. Input + calculation for loop:
		- Takes user input: number of workouts of this type done on weeks 1 to 4
		- Calculates monthly total and stores in workoutLevels[i]
	2. Output for loop:
		- Using the global string arrays, outputs user feedback composed of workout type and level-based feedback strings

---
## Learning Objectives

v5.0 was a first exercise in learning C through applied practice, compiler errors and segmentation faults, while also exploring:

- Upgrading data organisation using arrays
- Intentional variable scope and data flow implementation
- Function-based modularity and reusable logic
- Defensive programming under constraints
- Incremental design and documentation habits

---
## Files & Structure

- `fitnesstracker_vX.cc` → C++ versions
- `fitnesstracker_v5.c` → new C version
- `README.md` → this file
- Devlogs → version-specific development notes

Each `.cc`/ `.c` file starts with an in-code documentation block derived from raw notes.

**Note:**

To run program locally after cloning, copy .h files to same folder as .c files and makefile

---
## Future Directions

- Add more realistic level assignment and nuanced feedback
- Optionally visualize progress via **text-based summaries or graphs**

---
## Documentation Workflow & AI Assistance

All documentation is based on original engineering notes taken during development. AI is used selectively to assist with formatting, summarizing, and polishing, but all code decisions are manually verified. Raw notes are preserved in a dev diary for traceability.

This workflow ensures high clarity and authorship integrity.
