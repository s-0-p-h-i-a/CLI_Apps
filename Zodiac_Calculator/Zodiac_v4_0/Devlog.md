# Zodiac Sign Calculator — Version 4.0

## Date

2025-11-13

## Description

This version introduces a **multi-file modular structure**, separating logic into dedicated `.cpp` and `.h` files. Each major functionality—input, sign calculation, element/modality mapping, and output—is encapsulated in its own module. A `Makefile` is also included to streamline compilation.

The refactor moves away from a single-file approach, making the program more maintainable, readable, and scalable. Function grouping and header organization improves navigation and prepares the project for potential future expansions.

---
## Features

- **Same user-facing functionality as v3.0**:
    
    - User inputs birth month and day
    - Program outputs zodiac sign, element, and modality
        
- **New Additions & Refactors:**
    
    - Modular structure:
        
        - `getBirthday.h/.cpp` — input collection and validation
        - `getSign.h/.cpp` — zodiac sign determination
        - `getSignInfo.h/.cpp` — element and modality mapping
        - `getOutputStrings.h/.cpp` — string formatting and output messages
        - `printUserInfo.h/.cpp` — handles displaying results

    - `functions_index.md` for quick reference of all functions
    - Cleaner separation of **input**, **calculation**, and **output**
    - Complete input validation now using cin.fail() alongside range checks
    - Core calculation and mapping logic remains, but is now fully encapsulated
    - Maintains `do/while` loops for input validation per previous version

---
## What I Practiced

- Designing and implementing a **multi-file C++ project**
- Writing `.h` headers with proper prototypes and `.cpp` implementations
- Grouping related functions logically within modules
- Using a `Makefile` to manage compilation
- Maintaining clear function names and modular logic for readability
- Preserving all previous functionality while restructuring
- Planning for scalability and maintainability in project layout

---
## Approach

- **Refactor Strategy:**
    
    - Started by identifying logical code modules in v3
    - Split each module into its own `.cpp`/`.h` pair
    - Replaced monolithic `main()` logic with high-level function calls
    - Added `functions_index.md` to document all functions and their purpose
    - Ensured input, calculation, and output are clearly separated in `main.cpp`

- **Sign Calculation & Mapping:**
    
    - Retained relative offsets and mapping logic from v3
    - Element and modality determination moved to `getSignInfo.cpp`
    - Output string formatting and printing separated from calculation logic

- **Input Handling:**
    
    - Input validation remains in `getBirthday.cpp` with `do/while` loops, now using cin.fail() to catch all invalid input
    - Each input function now self-contained and reusable

---
## Changes from v3.0

- ✔ Program split into multiple `.cpp` and `.h` files for modularity
- ✔ Introduced `functions_index.md` for reference
- ✔ High-level `main()` now only orchestrates function calls: input → calculation → output
- ✔ Function grouping improves readability and maintainability
- ✔ Input validation now complete with cin.fail() addition
- ✔ Preparation for future expansions (arrays, structs, enums, or additional zodiac features)

---
## Next Steps

- Explore use of **enums or structs** for signs, elements, and modalities to simplify code further
- Introduce arrays or lookup tables for mapping to reduce repeated `switch` statements
- Continue refining formatting and function documentation for larger-scale readability

---

This dev log was generated from code, in-code comments, and raw dev notes, formatted and structured with AI assistance for clarity.  
For a full explanation of the workflow and AI use, see the README.