# Zodiac Sign Calculator

**Version:** v1.1  
**Date:** 2025-05-25

An internally refactored version of the original zodiac sign calculator. This update focuses on improving structure, clarity, and input handling while keeping the program self-contained and procedural. Core functionality is unchanged: the user enters their birth day and month, and the program returns their **zodiac sign**, **element**, and **modality**.

---
## 🔍 Overview

Like v1.0, this version lets users input their **day and month of birth** to discover:

- Their **zodiac sign**
- Its corresponding **element** (Fire, Earth, Air, Water)
- Its **modality** (Cardinal, Fixed, Mutable)

This version also introduces simple **month input validation** and improves code organisation.

---
## 🧱 Features

- Accepts numeric input for **day** and **month**
- Validates **month** input before proceeding
- Validates **day** input within each month's block
- Uses a `switch` statement to assign the correct **zodiac sign**
- Uses grouped conditionals to assign:
	- **Element**: based on sign
	- **Modality**: based on sign
- Outputs all three properties to the console

---
## 🔁 v1.0 → v1.1 Trajectory

This version was a structural and stylistic refactor of the original codebase. The goal was to prepare for future modularisation without changing the program's behaviour.

| Area                | v1.0 Approach                       | v1.1 Improvements                           |
|---------------------|--------------------------------------|----------------------------------------------|
| Control Flow        | Nested `if`/`else if` blocks         | Organized `switch` per month                 |
| Input Validation    | None                                 | Basic month validation added                 |
| Conditional Style   | Verbose parentheses                  | Simplified boolean expressions               |
| Structure & Layout  | Sequential logic, no clear grouping  | Code grouped into sign, element, modality    |
| Comments & Naming   | Minimal comments                     | Added comments for clarity, cleaned naming   |
| Output Logic        | Slightly scattered                   | Output clearly grouped and labeled           |

This release marks the transition from early experimentation to more intentional design and refactoring.

---
## 🧠 Learning Goals

In this version, the focus was on:

- Practicing **refactoring** while preserving existing logic
- Rewriting verbose or repetitive blocks more cleanly
- Thinking in terms of **sectioned logic** (input, sign, element, modality)
- Preparing for abstraction without yet introducing new C++ features

Still no arrays, functions, or scoped modular structures — those are planned for v3 and beyond.

---
## 🚧 Limitations & Future Work

- Day validation is tied to the `switch` block; invalid day/month combinations can still lead to confusing behaviour
- No leap year handling or flexible input parsing
- Still entirely procedural, all logic in one file
- Future versions will:
	- Modularize sign lookup and property mapping
	- Introduce reusable variables or constants for date ranges
	- Separate input, logic, and output more clearly

---
## 🗃️ Files

- `zodiac_v1_1.cc`: Source code for version 1.1
- `devlog_v1_1.md`: Development log detailing changes and approach

---
## 📘 About This Project

This program is part of a beginner-friendly C++ learning series that builds progressively toward more modular, abstract, and reusable code. v1.1 serves as a bridge between basic procedural control flow and upcoming modular refactors.

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
