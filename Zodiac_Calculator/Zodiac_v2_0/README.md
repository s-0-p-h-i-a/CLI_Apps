# Zodiac Sign Calculator

**Version:** v2.0  
**Date:** 2025-05-28

This version introduces **internal variables** and **value mapping** to replace hardcoded logic. The program is now more readable, maintainable, and closer to a modular structure. It also includes improved input validation and clearer user feedback.

---
## 🔍 Overview

The user inputs their **birth day and month**, and the program returns:

- Their **zodiac sign**
- Its **element** (Fire, Earth, Air, Water)
- Its **modality** (Cardinal, Fixed, Mutable)

Internally, this version introduces **intermediate variables** to separate logic and output more cleanly.

---
## 🧱 Features

- Accepts numeric input for **day** and **month**
- Validates month range (1–12) and day range (1–28/30/31)
- Calculates **sign number** based on month-specific thresholds
- Uses grouped `if`/`else if` chains to assign:
	- `elementNumber` → mapped to **element**
	- `modalityNumber` → mapped to **modality**
- Uses `switch` statements to map:
	- `signNumber` → **sign name**
	- `elementNumber` → **element name**
	- `modalityNumber` → **modality name**
- Uses expressive string output and visual framing

---
## 🔁 v1.1 → v2.0 Trajectory

This version reflects a significant **structural redesign** while preserving the program's surface behavior. Logic blocks were converted to use **intermediate values**, preparing for future modularization and abstraction.

| Area              | v1.1 Approach                      | v2.0 Improvements                          |
| ----------------- | ---------------------------------- | ------------------------------------------ |
| Sign assignment   | `switch` + direct string output    | `signNumber` mapped to string via `switch` |
| Element/modality  | Direct string assignment           | Uses numerical category → mapped to string |
| Input validation  | Month check only                   | Adds day range validation via `monthEnd`   |
| Program structure | Logical sections, some duplication | Streamlined value reuse and clearer blocks |
| Output style      | Minimal decoration                 | Decorative formatting added                |

---
## 🧠 Learning Goals

This version focused on:

- Creating and using **intermediate numeric values** (`signNumber`, `elementNumber`, `modalityNumber`)
- Mapping **categories to strings** via `switch`
- Improving **code readability and separation of concerns**
- Using **booleans for validation** instead of repetitive checks

All logic remains inside `main()`, and the project does not yet use arrays, functions, or structs.

---
## 🚧 Limitations & Future Work

- No support for string input or month names
- Still no leap year logic for February 29 (accepted but not verified)
- All logic still contained in `main()` — function breakdown planned next
- Future versions will:
	- Extract reusable functions (e.g. sign lookup)
	- Group related logic into modular blocks
	- Handle edge cases

---
## 🗃️ Files

- `zodiac_v2_0.cc`: Source code for version 2.0
- `devlog_v2_0.md`: Development log documenting reasoning and refactor steps

---
## 📘 About This Project

This is the third version of a beginner-friendly C++ console project, written as part of a hands-on learning series. It introduces internal structure and preparation for modular logic while keeping the core program behavior familiar and accessible.

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
