# Zodiac Sign Calculator

**Version:** v2.1  
**Date:** 2025-06-12

This version focuses on **streamlining input validation** and improving control flow through clearer boolean logic, error messaging, and variable placement. It builds on v2.0 by refining internal consistency and highlighting structural opportunities for future modularisation.

---
## 🔍 Overview

The user inputs their **birth day and month**, and the program returns:

- Their **zodiac sign**
- Its **element** (Fire, Earth, Air, Water)
- Its **modality** (Cardinal, Fixed, Mutable)

This version does not add new output behaviour but introduces improvements to **input handling** and **control clarity**.

---
## 🧱 Features

- Accepts numeric input for **day** and **month**
- Validates:
    - **Month** range (1–12)
    - **Day** range according to selected month (29–31)
- Uses **intermediate numeric values** for:
    - `signNumber`, `elementNumber`, `modalityNumber`
- Maps these values to strings using **switch** statements
- Decorative output formatting
- Improved structure and clarity in:
    - Validation flow
    - Variable placement
    - In-code comments

---
## 🔁 v2.0 → v2.1 Trajectory

This version focuses on **refactoring and cleaning up validation logic**, especially input checks and control flow with `validInput`. It consolidates boolean flags, adds user feedback for failed second attempts, and reinforces design clarity.

| Area             | v2.0 Approach                    | v2.1 Improvements                                     |
| ---------------- | -------------------------------- | ----------------------------------------------------- |
| Input validation | Separate flags for month and day | Unified as `validInput` with scoped, structured logic |
| Invalid input    | Basic fallback prompts           | Re-prompts user once, then exits with error message   |
| Boolean logic    | Repetitive placement             | Simplified and centralized for clarity                |
| Variable scope   | Some duplication                 | Moved declarations closer to use                      |
| Comments         | Clear sections                   | Improved structure/naming to reflect logic layers     |

---
## 🧠 Learning Goals

This version was designed to deepen understanding of:

- Boolean logic in input control flow
- Conditional structure readability
- Best practices for validating user input without functions
- Reducing redundancy through consistent variable logic
- Diagnosing logic errors through flowcharts and step-by-step debugging

All logic still resides inside `main()` with no use of arrays, functions, structs, or `cin.fail()`.

---
## 🚧 Limitations & Future Work

- Still no leap year logic (Feb 29 is accepted but not validated)
- String input (e.g., “March” instead of 3) not supported
- No loop-based re-prompting (planned next)
- Still no modularisation

---

## Next step (v2.2):
Use **`while` loops** for robust input re-prompting and continue progressing toward **function extraction** and **logic abstraction**.

---
## 🗃️ Files

- `zodiac_v2_1.cc`: Source code for version 2.1
- `devlog_v2_1.md`: Development log documenting validation fixes and logic changes

---
## 📘 About This Project

This is the fourth version of a beginner-friendly C++ console project, built as part of a hands-on learning series. It evolves the program structure incrementally by layering improved programming habits onto a familiar codebase — with a focus on clarity, logic, and maintainability.

---
## 🧠 Documentation Workflow & AI Assistance

All documentation in this project (README, dev logs, and code comments) is based on original engineering notes written manually during development.

To improve clarity and consistency, AI tools are used to:

- Draft new READMEs based on development notes
- Generate development logs tracing reasoning and changes
- Condense raw notes into concise in-code comment blocks

**No code or design decisions are generated without human validation.** Raw notes are archived in a dev diary folder for traceability and authorship integrity.

This workflow prioritises both **clarity** and **ownership**.

---