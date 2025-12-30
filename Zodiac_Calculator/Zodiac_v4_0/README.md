# Zodiac Sign Calculator

**Version:** v4.0  
**Date:** 2025-11-13

This version **modularises the code** into separate `.cpp` and `.h` files for each functional area. It demonstrates a shift from a single-file structure to a maintainable, multi-file C++ project.

---
## Overview

The user inputs their **birth day and month**, and the program returns:

- Their **zodiac sign**
- Its **element** (Fire, Earth, Air, Water)
- Its **modality** (Cardinal, Fixed, Mutable)

All calculations and string mappings are now handled through dedicated functions in separate files, improving readability, maintainability, and scalability.

---
## Features

- Input validation now uses cin.fail() with **do/while loops** and continues until valid values are entered

- Modular functions for:

    - `getBirthday()` → handles and validates user input
    - `getSign()` → calculates numeric zodiac sign
    - `getSignInfo()` → calculates element and modality numbers
    - `getOutputStrings()` → maps numeric results to string representations
    - `printUserInfo()` → handles formatted output to console

- **Function headers (`.h`)** define interfaces; `.cpp` files handle implementation

- Maintains clear separation between **input**, **processing**, and **output**

- Includes a `Makefile` for simplified compilation

---
## v3.0 → v4.0 Trajectory

This version focuses on **structural refactoring** and code clarity.

| Area              | v3.0 Approach                   | v4.0 Improvements                                       |
| ----------------- | ------------------------------- | ------------------------------------------------------- |
| Code organization | Single `main.cc` file           | Multiple `.cpp`/`.h` files grouped by functionality     |
| Input Validation  | Limited to int range checks     | Additional cin.fail() check catches all invalid input   |
| Readability       | Long `main()` with inline calls | Clean, top-down main flow calling descriptive functions |
| Maintainability   | Logic and mapping intertwined   | Encapsulated logic per function/file, easier to extend  |
| Documentation     | In-code notes only              | Added `functions_index.md` for quick navigation         |
| Compilation       | Manual/IDE                      | `Makefile` supports modular build                       |

---
## Learning Goals

This version emphasizes:

- Applying **modular programming** concepts
- Structuring a multi-file C++ project
- Separating **input, processing, and output** cleanly
- Preparing code for scaling, testing, or reuse

---
## Limitations & Future Work

- Leap year validation is still not implemented
- Switches and if/else blocks could be further simplified using **enums** or **arrays**

---
## Next Steps

- Explore **arrays, structs or enums** to replace numeric constants for signs, elements, and modalities
- Consider **namespaces** for better encapsulation if project expands

---
## Files

- `main.cpp`: Entry point, top-level function calls  
- `getBirthday.*`, `getSign.*`, `getSignInfo.*`, `getOutputStrings.*`, `printUserInfo.*`: Modular implementations  
- `functions_index.md`: Overview of functions and their purpose  
- `Makefile`: Compilation rules for modular build

---
## About This Project

This is the **fourth version** of a beginner-friendly C++ console project. Each iteration refines structure and introduces professional practices while keeping functionality familiar. This version specifically demonstrates **multi-file modularization**, function encapsulation, and preparatory work for larger C++ projects.

---
## Documentation Workflow & AI Assistance

Documentation (README, dev logs, function index, code comments) is based on manual notes generated during development.

AI assistance is used to:

- Draft updated READMEs reflecting structural changes
- Summarize dev log notes into coherent documentation
- Ensure consistent style and clarity across files

**All generated documentation is manually reviewed and verified.**  
The workflow prioritizes **clarity**, **traceability**, and **ownership**.
