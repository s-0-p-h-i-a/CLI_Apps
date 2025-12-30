# Fitness Tracker v4.0 Refactor

## Overview
This project is a refactored version of a console-based fitness tracker. The main focus of this update was **improving modularity, input validation, and variable management**.

---
### Key Changes
1. **Input Validation**
   - Basic implementation using `cin.fail` to handle invalid input.
   - Consolidated validation logic to simplify main program flow.

1. **Modularisation**
   - Code split into multiple files (`.cpp` and `.h`) for better structure and readability.
   - Functions grouped logically: input validation, monthly totals, level calculation, feedback, and output.

3. **Variable Lifetime Management**
   - Reduced intermediary variables in `main()`.
   - Variables now “die” immediately after their values are used, improving clarity and resource management.
   - Emphasis on scope and data flow between functions and files.

---
### Program Flow

**INPUT -> INPUT PROCESSING -> OUTPUT DEFINITION -> OUTPUT**

- Two main loops handle input/initial calculations and output generation.
- Structure reflects clear data processing from input to output.

### Skills Practiced
- Modular programming and multi-file project structure.
- Input validation using `cin.fail`.
- Managing variable scope and lifetime for clarity and efficiency.
- Handling basic build issues, namespaces, and header inclusion in C++.

---
### Note for cloning:
Locally, the compiled version of this project is all in the same folder. After cloning, copy .h files in the same folder as the source files and makefile
