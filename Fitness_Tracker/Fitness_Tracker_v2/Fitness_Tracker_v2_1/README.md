# 🏋️‍♀️ Fitness Tracker Project (v2.1)

A C++ program to track workout frequency across a month. This version builds on v2 by adding basic input validation while maintaining a clear iterative structure, all without using arrays, functions, or `cin.fail()`.

---
## 📌 Project Summary

**Goal:**  
Reinforce for loop structures while exploring manual input validation within a beginner-friendly, linear C++ workflow.

**Focus Areas:**

- Refining loop-based input and output flow
- Implementing simple input validation for integers
- Preserving variable scope clarity without modular tools
- Practicing control over program flow in case of invalid inputs

---
## 🧠 Core Concept

**Workout Types:**

- Upper Body
- Lower Body
- Core
- Cardio

**Structure:**

- 4 weeks of user input per workout type
- Input: number of workouts per week, validated between 0–7
- Output: total monthly workouts and consistency feedback

**Frequency Categories:**

- 0–7: insufficient (level 1)
- 8–21: good consistency (level 2)
- 22–28: excellent (level 3)

---
## 🧪 Development Timeline

### ✅ v0

- Manual blocks for each workout type and week
- No loops or validation

### ✅ v1

- Nested switches and grouped logic
- Still verbose and repetitive

### ✅ v2.0

- Used for loops for input/output
- Totals calculated in input loops
- Feedback via nested switches
- Cleaned output with iteration
- No input validation

### ✅ v2.1

- Added input validation (range: 0–7) per week
- Gave users one retry if input was invalid
- Program halts if second input fails
- Replaced feedback logic with `if` branches instead of nested switches
- Prevented output if invalid input occurred
- Still avoids functions, arrays, or type-checking logic
- Preserves structure for learning flow

---
## 🛠 Implementation Highlights (v2.1)

- Weekly input loops with validation for valid ranges (0–7)
- Validation blocks nested inside input `for` loops to control flow
- Program exits early if repeated invalid input is detected
- Used a boolean flag `inputValid` to track validation status across blocks
- Simplified feedback level assignment using `if` statements
- Output is generated only if all input is valid
- Output loop uses a `switch` structure for workout types, totals, and feedback

---
## 🧭 Reflections & Takeaways

- Early attempts at input validation deepened understanding of variable scope
- Maintaining clarity without functions/arrays forced conscious modular thinking
- Repeating the input validation logic showed how loops and branches interact
- Boolean flags can effectively control larger program flow without advanced tools
- Replacing nested switches with `if` branches improved readability for level logic
- Identified key stepping stones for future modularisation

---
## 🔮 Future Improvements

- Improve robustness: handle wrong input types (e.g., letters or symbols)
- Reduce repeated validation logic with helper functions (once learned)
- Collapse `if-for-if` structures using `while` loops
- Refactor input/output logic using arrays and functions
- Allow user to retry more than once for invalid input
- Prepare to modularize into input, validation, processing, and output stages

---
## 📂 Files

- `fitnesstracker_v0.cc`: initial manual version
- `fitnesstracker_v1.cc`: grouped nested switch logic
- `fitnesstracker_v2_0.cc`: for-loop iteration, no validation
- `fitnesstracker_v2_1.cc`: current version with input validation
- `README.md`: this file
-  Fitness Tracker v2.1 Dev Log

---
## 🧱 Devlog Snapshot (v2.1)

Grappling with input validation revealed how control flow, boolean flags, and variable scope interrelate. Using only basic tools, I made the program reliably stop on invalid input while preparing for future improvements like type validation and modularisation.

---
## 🧭 Next Steps

- Learn and implement `cin.fail()` for input type checks
- Add `while` loops to streamline retry logic
- Begin extracting input/output into functions
- Integrate arrays to manage per-week data
- Continue building structure that supports modular, scalable logic

---
### 🧠 Documentation Workflow & AI Assistance

All documentation in this project (README, dev logs, and code comments) is based on original engineering notes taken during development. These notes are written manually on top of the `.cc` source file as I work.

To improve clarity and structure, I use AI tools selectively to assist with formatting, polishing, and summarising the content — particularly for:
- Drafting new README versions based on raw notes and previous versions
- Generating development logs that clearly trace design decisions, also based on raw notes and previous versions
- Condensing raw notes into opening in-code documentation blocks

All AI-assisted outputs are reviewed and edited by me. No code, decisions, or technical content are generated or altered without verification and approval.  
Raw notes are preserved in a dev diary folder for traceability and transparency.

This workflow is designed to maintain both high clarity and authorship integrity.

---

**Created with C++ and evolving structure. 🚀**