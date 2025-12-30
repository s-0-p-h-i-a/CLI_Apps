## 🏋️‍♂️ Fitness Tracker — v0
### 📌 Overview

This is **version 0** of my Fitness Tracker project. It represents a **first complete implementation** using C++ to manually collect and evaluate workout data across four weeks. This version prioritizes **readability**, **explicit structure**, and clear **segmentation of logic**—no loops or advanced data structures are used at this stage.

---
### 🎯 Purpose

- Practice **manual input collection**, **switch statements**, and **basic condition-based output**
- Learn how to organize C++ code into readable, logical sections
- Build a foundation for exploring more efficient structures in future versions

---
### 🧠 Concept (v0)

The user is asked to enter the number of completed workouts for four categories:

- **Upper body**
- **Lower body**
- **Core**
- **Cardio**

Each is tracked over **four weeks**, and the program:

- Totals each category's workouts across the month
- Assigns a **performance level** using `switch` statements
- Outputs feedback text based on performance (3-tier scale)

All logic is **manually implemented** using separate variables and blocks for each case, which improves traceability during early development.

---
### 🛠️ Implementation Highlights

- ✅ Straightforward `cin` and `cout` logic for data entry and output
- ✅ Use of `switch` statements to categorize workout levels and output feedback
- ✅ Consistent code structure using section dividers (e.g., `////`)
- ✅ Compact input style

---
### 📐 Design Notes

- **Variables are declared and handled separately** for each week and workout type to maintain full visibility into the program’s structure.
- **No loops or arrays** are used intentionally, to focus on the basics before adding abstraction.
- Manual repetition is used in place of loops—future versions may optimize this.

---
### 🔮 Future Versions (v1 and beyond)

Planned upgrades include:

- Replacing repeated blocks with **loops** and **arrays**
- Adding **data validation**
- Experimenting with **modularity** (e.g., using functions)

These changes will help improve **scalability**, **maintainability**, and **user experience**, while deepening my understanding of C++.

---
## 📂 Files

- `fitnesstracker_v0.cc`: first implementation with explicit, repetitive logic

---
### 🧾 Sample Input/Output

Below is an example interaction with the program, assuming the user inputs realistic weekly data for each workout type:

```
Enter your upper body workouts for weeks 1, 2, 3 and 4: 1 0 1 1

Enter your lower body workouts for weeks 1, 2, 3 and 4: 2 1 0 0

Enter your core workouts for weeks 1, 2, 3 and 4: 1 1 1 1

Enter your cardio workouts for weeks 1, 2, 3 and 4: 2 1 2 0

Monthly total for upper body workouts:3  
You're doing good, keep going!

Monthly total for lower body workouts:3  
You're doing good, keep going!

Monthly total for core workouts:4  
Perfect, great job!

Monthly total for cardio workouts:5  
Not enough! Add more next month!
```

This output reflects:
- Feedback based on total sessions using the defined levels
- A clear and readable breakdown by workout category

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

*Developed as part of my journey to learn C++ and explore real-world data tracking in preparation for embedded and systems-level work.*



