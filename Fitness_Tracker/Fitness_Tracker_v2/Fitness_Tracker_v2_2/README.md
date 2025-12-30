# 🏋️‍♀️ Fitness Tracker Project (v2.2)

A C++ program to track workout frequency across a month. This version builds on v2.1 by introducing robust, retryable input validation using `do...while` loops, local flags, and infinite loop protection — all **without** using arrays, functions, or `cin.fail()`.

^ = ChatGPT suggestion

---
## 📌 Project Summary

**Goal:**  
Strengthen understanding of loop nesting, local vs global error handling, and resilient input validation — all within a minimalistic, beginner-friendly C++ structure.

**Focus Areas:**

- Implementing `do...while` loops for controlled user input
- Preventing infinite loops from invalid input using counters
- ^ Shifting from global to block-local error handling
- Preparing the codebase for future modularisation

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

- Used `for` loops for input/output
- Totals calculated in input loops
- Feedback via nested switches
- Cleaned output with iteration
- No input validation

### ✅ v2.1

- Added input validation (range: 0–7) per week
- Gave users one retry if input was invalid
- Program halts if second input fails
- Replaced feedback logic with `if` branches
- Avoided functions, arrays, and type checking
- Controlled flow with a global `inputValid` flag

### ✅ v2.2

- Replaced single-check input validation with `do...while` retry loops
- Introduced `loopLimit` and `count` to prevent infinite loops
- ^ Localised input validation with per-week flags (`weekInputValid`)
- Restructured input logic to handle validation inline
- Shifted to “validate at source” instead of downstream checks
- Global `inputValid` now inactive; reserved for future `cin.fail()` logic
- Kept "linear" frequency categories: realism vs code complexity tradeoff

---
## 🛠 Implementation Highlights (v2.2)

- **Retryable input validation** via `do...while` blocks
- Validation occurs per week, inside `for` loops
- **^ Local boolean flags** used for each week’s input check
- Global `loopLimit` + `count` to break out of infinite retry scenarios
- Moved calculation logic **after** validation, ensuring safe processing
- Maintained `if (inputValid)` wrappers for each workout type block
- Adjusted messaging to clarify the accepted input range (0–7)
- Retained `switch` statements for feedback output
- Handled wrong-type input partially (fails gracefully, not perfectly)
- Reached **maximum safe validation** without `cin.fail()`

---
## 🧭 Reflections & Takeaways

- First successful use of `do...while` loops for input flow
- Local flags improved clarity and debugging confidence
- “Fail fast” input design attempts to prevent error propagation
- Guarding loop logic with a retry cap adds reliability
- Learned to separate **source-level validation** from **flow control**
- Confirmed limitations of handling bad input without type checks
- Prepared clean transition path for future `cin.fail()` integration

---
## 🔮 Future Improvements

- Detect and reject wrong-type input with `cin.fail()`
- Extract input handling and validation into reusable functions
- Replace repeated blocks with arrays or structs for cleaner iteration
- Remove now-redundant validation layers post-`cin.fail()` upgrade
- Build a processing module that handles total calculation and feedback logic
- Introduce more nuanced workout frequency evaluation

---
## 📂 Files

- `fitnesstracker_v0.cc`: initial manual version  
- `fitnesstracker_v1.cc`: grouped nested switch logic  
- `fitnesstracker_v2_0.cc`: for-loop iteration, no validation  
- `fitnesstracker_v2_1.cc`: one-shot validation with global flag  
- `fitnesstracker_v2_2.cc`: retryable validation with loop protection  
- `README.md`: this file  
- Fitness Tracker v2.2 Dev Log

---
## 🧱 Devlog Snapshot (v2.2)

This version marks the shift to retryable, loop-contained input validation. Working without `cin.fail()` highlighted the limits of type-unsafe input handling. Still, the use of local flags and count-based loop limits made the program far more robust — and modularization is now clearly within reach.

---
## 🧭 Next Steps

- Learn and implement `cin.fail()` for complete type-safe input
- Collapse input+validation logic into compact reusable functions
- Replace duplicate input blocks with arrays and loop-based iteration
- Integrate error handling and feedback into dedicated output modules

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

**Built in C++ with growing complexity and confidence. 🚀**
