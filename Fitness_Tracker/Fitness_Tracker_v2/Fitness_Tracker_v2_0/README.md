# 🏋️‍♀️ Fitness Tracker Project (v2.0)

A C++ program to track workout frequency across a month using loops for more efficient input and output processing, generating feedback based on consistency per workout type.

---
## 📌 Project Summary

**Goal:**  
Practice C++ fundamentals with iteration structures (`for` loops) to optimize workout tracking and feedback generation.

**Focus Areas:**

- For loop usage for input and output repetition
- Manual total calculation integrated with input loops
- Maintaining modular thinking without arrays/functions (yet)
- Refining control structures for feedback assignment and display

---
## 🧠 Core Concept

**Workout Types:**

- Upper Body
- Lower Body
- Core
- Cardio

**Structure:**

- 4 weeks of user input per workout type
- Input: number of workouts per week for each type, entered via loop
- Output: monthly total and personalized feedback per workout type, generated using a loop and nested switches

**Frequency Categories:**

- `4` workouts: perfect consistency (excellent)
- `2-3` workouts: good consistency (keep going)
- `1` or fewer workouts: insufficient (needs improvement)

---
## 🧪 Development Timeline

### ✅ v0

- Explicit, repetitive logic blocks for each workout/week input
- Manual total and feedback calculation for each workout type

### ✅ v1

- More compact code using nested `switch` statements
- Grouped logic and output for better structure, still manually repetitive

### ✅ v2.0

- Introduced `for` loops for input gathering and output display
- Totals calculated within input loops for efficiency
- Feedback assignment remains via `switch` statements
- Output display loop collapses redundant code blocks
- Improved readability and scalability without arrays or functions
- Preparing groundwork for input validation and function implementation in future versions

---
## 🛠 Implementation Highlights (v2.0)

- Used `for` loops to gather weekly workout data and sum totals per workout type
- Integrated total calculation within input loops to save steps
- Collapsed output and feedback display into a single loop with nested switches
- More explicit variable naming for clarity (`upperBodyTotal`, etc.)
- Feedback logic kept simple with `switch` on total workout counts
- Maintained program flow clarity while reducing code duplication significantly
- Noted plans for further optimization (input validation, modularization)

---
## 🧭 Reflections & Takeaways

- Using loops reduced code length and improved maintainability
- Embedding totals in input phase feels more natural and efficient
- Looping over workout types for output helps avoid repetitive code
- The challenge of manual modularity without arrays/functions is clear
- This iteration strengthens foundation before learning arrays and functions
- I’m getting better at structuring code mentally for iterative processes

---
## 🔮 Future Improvements

- Add input validation to ensure valid numeric input (0–7)
- Further optimize output loop by reducing repeated string assignments
- Implement functions to modularize input, processing, and output
- Allow user to customize number of weeks/months tracked
- Transition to arrays for storing weekly data and workout types

---
## 📂 Files

- `fitnesstracker_v0.cc`: initial explicit logic and input-output blocks
- `fitnesstracker_v1.cc`: compact nested switch version with grouped logic
- `fitnesstracker_v2_0.cc`: current version using `for` loops for input and output
- `README.md`: this file
-  Fitness Tracker v2.0 Dev Log: notes and reflections on v2 development

---
## 🧱 Devlog Snapshot (v2.0)

> “Introducing loops really made the input and output phases cleaner and more logical. Although still verbose without arrays or functions, I’m seeing how iteration structures simplify repetitive tasks and set up better code flow for future improvements.”

---
## 🧭 Next Steps

- Add input validation checks
- Begin learning arrays and functions for further modularity
- Refactor code to use functions for input, feedback, and output
- Explore user customisation options (weeks, goals)
- Document version history and changes carefully

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

**Created with C++ and growing understanding. 🚀**