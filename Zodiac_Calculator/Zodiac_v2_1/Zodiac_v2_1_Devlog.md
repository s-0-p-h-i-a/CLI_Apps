# 📦 Zodiac Sign Calculator — Version 2.1

## 📅 Date

2025-06-12

## 📝 Description

Minor update focused on tightening the input validation system and addressing early implementation issue discovered through manual testing and diagramming. While no core logic was changed, v2.1 represents a refinement of the internal structure and a key learning checkpoint in debugging and control flow logic.

> `^` = ChatGPT suggestion

---
## ✨ Features

- **Same core functionality as v2.0:**
    - User inputs birth month and day
    - Outputs zodiac sign, element, and modality using integer-based mapping

- **New Additions & Fixes:**
    - Unified `validMonth` and `validDay` into a single `validInput` flag
    - Improved logic order: now asks for day **only if** month input is valid
    - Error handling added for **second invalid input attempt**
    - Removed logic bug in day validation (`&&` → `||` correction)
    - In-code comments and structure updated for clarity
    - ^ Consider using `while` loops for more robust input retry logic in v2.2

---
## 🧠 What I Practiced

- Streamlining logic with a single validation flag
- Debugging through flowcharting and targeted testing
- Managing variable scope and avoiding premature declaration
- Understanding runtime behaviour and conditional logic pitfalls
- Reinforcing stepwise debugging habits

---
## 🧩 Approach

- **Design Strategy:**
    - Did not rewrite large sections — focused on layering input validation over existing code
    - Used flowchart diagrams to understand where logic was failing
    - Reduced branching by declaring `validInput` in `main()` and reusing it
    - Limited scope of input to keep control over variable use and flow

- **Debugging Steps:**
    - Validated `monthEnd` logic by temporarily hiding switch block
    - Added temporary output to check intermediate values (e.g., `monthEnd`)
    - Identified (via compiler) and corrected faulty condition (`&&` instead of `||`) in day check
    - Compared error handling between month and day input for consistency
    - Refrained from leap year logic to keep scope aligned with the sun sign-only theme

---
## ✅ Changes from v2.0

- ✔ Unified validation into `validInput` for simpler logic
- ✔ Moved day input prompt inside `if (validInput)` block
- ✔ Added secondary invalid input check
- ✔ Repositioned variable declarations to reduce scope and improve structure
- ✔ Improved in-code documentation and logic separation
- ^ Identified future refactor point: use of `while` loops for retry logic

---
## 🛠️ Next Steps

- Refactor input validation using `while` loops (v2.2)
- Maintain separation between input, computation, and output
- Prepare groundwork for function- and array- based modularisation once scope/return logic is learned

---
## 📎 Notes

- This update wasn't flashy, but it cemented logic discipline and debugging workflows
- The refactor confirmed that better validation order leads to fewer edge case errors
- v2.1 acts as a “logic hygiene” checkpoint before the introduction of loops, arrays, and functions

---

✍️ This dev log was generated from code, in-code comments and raw dev notes, formatted and structured with AI assistance for clarity.  
For a full explanation of the workflow and AI use, see the README.