
# 🏋️‍♀️ Fitness Tracker Project

A C++ program to track workout frequency across a month and generate feedback based on how consistently each workout type was performed.

---
## 📌 Project Summary

**Goal:**  
Practice C++ fundamentals through a modular, control-structure-based workout tracking program.

**Focus Areas:**  
- Control structures (if/switch, loops)
- Modular thinking without arrays/functions
- Manual decomposition of logic blocks
- Version control and code evolution tracking

---
## 🧠 Core Concept

**Workout Types:**
- Upper Body
- Lower Body
- Core
- Cardio

**Structure:**
- 4 weeks of user input
- Input: how many times each workout type was performed per week
- Output: monthly summary and personalised feedback per workout type

**Frequency Categories:**
- `f == 4`: done weekly (excellent)
- `f <= 3`: consistent (some effort)
- `f <= 1`: rare or missing (needs attention)

---
## 🧪 Development Timeline

### ✅ v0
- Explicit logic blocks for each step
- Each workout handled individually
- Very explicit, but repetitive
- Good starting point for manual control structure understanding

### ✅ v1
- More compact and abstracted version
- Output logic refactored into nested switch statements
- Attempt to emulate array-like grouping and reduce repetition
- Explored trade-offs between clarity and conciseness

---
## 🛠 Implementation Highlights (v1)

- All weekly inputs gathered at once for better overview
- Used `////` separators to visually break code into sections
- Manual reuse of structure: copied, renamed, adjusted for each workout type
- Tried nesting `switch` statements for feedback logic
- Kept `Total` and `Level` variables separate for clarity and potential future expansion
- Output modularity was a challenge; learned the limits of doing everything manually

---
## 🧭 Reflections & Takeaways

- Writing out logic manually gave me a deeper understanding of how loops and functions work behind the scenes
- Repetition helped me recognise patterns in structure and naming
- Nesting logic got tricky without true modular tools—learned the value of abstraction
- This is the most code I’ve written in a long time—felt good to finish something that works!

---
## 🔮 Future Improvements

- Learn and implement arrays and functions to simplify logic
- Add input validation (e.g. check that input is 0–7)
- Allow user-defined goals for each workout type
- Detect whether workouts are evenly distributed over the month
- Modularize output definitions using data structures or helper functions

---
## 📂 Files

- `fitnesstracker_v0.cc`: first implementation with explicit, repetitive logic
- `fitnesstracker_v1.cc`: more compact version with grouped output logic
- `README.md`: this file
-  Fitness Tracker v1 Dev Log: detailed notes on v1 development process and reflections

---
## 🧱 Devlog Snapshot (v1)

> “I feel like I am really pushing my limits in terms of implementing modularity without the tools for it XD this is getting complicated and putting a switch branch inside another one feels a little unhinged… but it works :)”  

---
## 🧭 Next Steps

- Finish loop/array sections in C++ course
- Rewrite program using arrays
- Start separating logic into reusable functions
- Version and document changes for v2

---
### 🧠 Documentation Workflow & AI Assistance

All documentation in this project (README, dev logs, and code comments) is based on original engineering notes taken during development. These notes are written manually on top of the `.cc` source file as I work.

To improve clarity and structure, I use AI tools selectively to assist with formatting, polishing, and summarising the content, specifically:
- Drafting new README versions based on raw notes and previous versions
- Generating development logs that clearly trace design decisions, also based on raw notes and previous versions
- Condensing raw notes into opening in-code documentation blocks

All AI-assisted outputs are reviewed and edited by me. No code, decisions, or technical content are generated or altered without verification and approval.  
Raw notes are preserved in a dev diary folder for traceability and transparency.

This workflow is designed to maintain both high clarity and authorship integrity.

---

**Created with C++ and curiosity. 🚀**
