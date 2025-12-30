# Zodiac Sign Calculator

**Version:** v1.0  
**Date:** 2025-05-25

A simple C++ console program that determines a user’s zodiac sign based on birth date and displays its associated **element** and **modality** (e.g. Fire + Cardinal). This version is written as a self-contained `.cc` file using only basic control structures.

---
## 🔍 Overview

This program helps users find their zodiac sign by entering the **day and month** of their birth. It then outputs:

- The correct **zodiac sign**
- Its associated **element** (Fire, Earth, Air, Water)
- Its **modality** (Cardinal, Fixed, Mutable)

---
## 🧱 Features

- Accepts numeric input for **day** and **month**
- Maps each date range to the correct **sign**
- Uses nested conditionals to assign:
  - **Element**: based on sign
  - **Modality**: based on sign
- Outputs all three properties to the console

---
## 🧠 Learning Goals

This beginner project focused on:

- Translating real-world categories into code logic
- Structuring conditionals using `if`, `else if`, and `switch`
- Gaining hands-on practice with user input (`cin`)
- Writing clean and readable code in a single file

No arrays, functions, or modular file structures were used yet — future versions will begin exploring those concepts.

---
## 🚧 Limitations & Future Work

- No input validation beyond checking day/month ranges
- All logic is contained in one file (`zodiac_v1.cc`)
- No use of functions or abstractions
- Future versions will focus on modularity and function use

---
## 🗃️ Files

- `zodiac_v1_0.cc`: Complete version 1.0 source code
- `devlog_v1_0.md`: Development log documenting implementation process

---
## 📘 About This Project

This program was developed as part of a beginner C++ practice series focused on building small, self-contained tools. It is the first version in an incremental learning journey toward more structured and reusable code.

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

