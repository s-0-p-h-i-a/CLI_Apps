# Fitness Tracker v4.0 Refactor - Development Notes

## Objectives
- Modularise code while maintaining readability.
- Minimise intermediary calculation variables in `main()`.
- Improve input validation using `cin.fail`.

## Refactor Steps
1. **Initial Restructure**
   - Moved function declarations to headers, grouped by functionality.
   - Most functions from v3.0 moved to separate `.cpp` files. Functions in the same .cpp were either similar functionalities or one helper function only needed for the other function.
   - Resolved inclusion and namespace issues (e.g., `std::string`).

2. **Input Section Refactoring**
   - Moved week input validation into `monthlyTotals.cpp`.
   - Consolidated input checks; removed unnecessary flags and branches.
   - Variables now exist only as needed for calculations, then “thrown away.”

3. **Output Handling**
   - Feedback output split into definition and final display cycles.
   - Maintained total recap; simplified structure pending arrays/structs in next version.

## Lessons Learned
- Multi-file organisation and proper header usage.
- Managing variable scope and lifetime for cleaner, safer code.
- Integrating input validation without cluttering `main()`.
- Compilation and build workflow, including Makefile basics.

## Next Steps
- Introduce arrays to reduce repetitive code for workout types.
- Further refine input/output loops and data handling.
