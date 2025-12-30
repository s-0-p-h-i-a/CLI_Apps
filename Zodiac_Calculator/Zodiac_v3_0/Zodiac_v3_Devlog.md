# Zodiac Sign Calculator — Version 3.0

## Date

2025-08-26

## Description

This version introduces **functions** for the first time. The refactor extracts self-contained code modules (month/day validation, sign calculation, element/modality mapping, string mapping) into separate functions, making the program more modular and readable. Input validation was also updated with `while` loops to allow re-prompting until valid values are entered.

The refactor felt seamless — the structure in v2.x was already prepared for modularisation, so most changes involved lifting existing `switch` and `if/else` blocks into dedicated functions.

---

## Features

- **Same user-facing functionality as v2.2**:
    
    - User inputs birth month and day
    - Program outputs zodiac sign, element, and modality
        
- **New Additions & Refactors:**
    
    - Input validation now uses `do/while` loops for retrying invalid input
    - Core calculations extracted into functions:
        
        - `defineMonthEnd()`
        - `defineSignStart()` + `defineSign()`
        - `defineElement()` + `defineModality()`
        
    - Output string mapping extracted into functions:
        
        - `defineSignName()`, `defineElementName()`, `defineModalityName()`
            
    - Cleaner separation of **input**, **calculation**, and **output**
    - Refined **sign calculation** by leveraging consistent offset patterns between months and signs

---
## What I Practiced

- Creating and calling functions with parameters and return values
- Refactoring code into modular units while preserving logic
- Using `switch` and `if/else` branches inside functions
- Applying `do/while` loops for user input validation
- Structuring code for readability with prototypes and definitions
- Breaking a monolithic `main()` into logical functions
- Designing **function prototypes/definitions** and maintaining consistent naming

---

## Approach

- **Refactor Strategy:**
    - Sketched out `defineMonthEnd` and `defineSignStart` in isolation first, then rebuilt the program top-down with refactored sections
    - Identified code modules already behaving like functions in v2.x
    - Extracted them one by one into standalone functions
    - Used prototypes at the top of the file for structure
    - Replaced inline code with function calls in `main()`
        
- **Sign Calculation Change:**
    
    - Instead of manually assigning `sign1`/`sign2` for every month, introduced `defineSignStart()` and used relative offsets between months and sign numbers
    - Simplified main `switch` block into a smaller set of conditionals
        
- **Input Handling:**
    
    - Replaced one-time validation with `do/while` loops to repeatedly request valid input
    - Still limited to integer checks (`cin.fail()` not yet introduced in course scope)


---

## Changes from v2.2

- ✔ Input validation now uses `do/while` loops
- ✔ Extracted month/day limits, sign logic, and mappings into functions
- ✔ Simplified main logic into high-level steps: input → calculation → output
- ✔ New sign calculation approach using `defineSignStart()` and relative offsets
- ✔ Clearer overall structure with prototypes and grouped definitions

---

## Next Steps

- Handle non-integer input with `cin.fail()` once covered in course
- Explore replacing repeated `switch` mappings with arrays or lookup tables
- Further shorten `defineSign()` logic when array knowledge is introduced
- Continue refining formatting and spacing for readability vs. compactness

---

This dev log was generated from code, in-code comments and raw dev notes, formatted and structured with AI assistance for clarity.  
For a full explanation of the workflow and AI use, see the README.
