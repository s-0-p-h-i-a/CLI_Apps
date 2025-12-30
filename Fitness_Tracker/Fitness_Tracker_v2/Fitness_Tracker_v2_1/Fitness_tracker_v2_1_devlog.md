## 🏋️‍♀️ Fitness Tracker – Dev Log v2.1

**Version date:** 10/06/25  
**Project goal:** Track frequency of 4 workout types over 4 weeks, classify frequency tiers, and provide motivational feedback.

**Focus for v2.1:**

- Add **input validation** without using functions or arrays
- Continue building on loop-based iteration from v2
- Streamline and unify **feedback string reuse** logic
- Maintain code clarity while experimenting with **control flow strategies**

---
### 🧠 Concept Recap

- **Structure:** Same as v2.0 → 4 workouts × 4 weeks
- **Input validation added:** ensures weekly values are integers from 0 to 7
- **Frequency tiers (updated):**
    - `0–7`: low frequency → Level 1
    - `8–21`: moderate → Level 2
    - `22–28`: high → Level 3

---
### 🔁 Evolution from v2.0 to v2.1

**v2.0:**

- Introduced `for` loops to reduce repeated blocks in input/output
- Manual repetition still present in variable naming and structure
- Feedback logic consolidated inside output loop with `switch` blocks

**v2.1:**

- Implemented basic **range checking** for weekly input values
- Invalid inputs now **stop further processing** after one retry attempt
- Introduced a `bool inputValid` flag to centralize validation state
- Started exploring **conditional execution structure** (e.g. `if (inputValid)`) for flow control
- Began optimizing **redundant switch nesting** in favor of clear, reusable logic

---
### 🛠 Implementation Notes

#### 🧾 Input & Validation

- Weekly values must now be between `0–7` (inclusive)
- Implemented in each `for` loop by checking after initial entry
    - If invalid: one retry opportunity is granted
    - If still invalid: `inputValid = false`, which halts further input/output
- Decision made to keep retry **inline** instead of repeating the entire loop using `while` (to be added in v2.2)
- `inputValid` introduced early and checked throughout the input and output stages
- Variables like `upperBodyTotal` still declared outside loops for clarity and control

#### ⚙️ Control Flow

- Used a **manual pattern** for validation across all workout types due to lack of arrays or functions
- Designed input logic to halt all progress as soon as one invalid value is confirmed
- To avoid loop control variable hacks, refactored retry logic to happen inside the `for` block itself
    - Prevented "bad practice" like forcibly ending loops via counter manipulation

#### 🎛 Frequency Level Classification

- Replaced deeply nested `switch` logic from v2 with **if-else chains** for frequency tiers
- This change improved legibility and was a better fit for numeric range comparisons
- Levels:
    - `0–7` → Level 1
    - `8–21` → Level 2
    - `22–28` → Level 3
- If totals fall outside expected bounds, `inputValid` is set to false as a safeguard

#### 🧾 Output

- Output generation retained loop-based structure from v2.0
- `switch` used to dynamically assign total and level to the right feedback
- Feedback messages consolidated and reused efficiently using a second `switch` block
- Output **only triggers** if `inputValid == true`

---
### ⚠️ Challenges

- Input validation was **more complex than expected** without access to arrays, functions, or `cin.fail()`
- Tried different ways to prevent further input after invalid entries—eventually solved using `inputValid` flag
- Spent time debugging unexpected behaviour caused by **scope issues** inside nested `if` blocks
- Tried and removed additional validation layers (e.g. checking if total > 28), realising they weren’t necessary (cf line 93)
- Discovered limits of basic range checking (e.g. cannot yet detect type errors from `char` input)

---
### ✅ Reflections

- **Major Shift:** Gained practical experience with layered validation logic
- **Mental Practice:** Manually replicated what future `while` loops or helper functions would handle
- **Structural Clarity:** Introduced boolean gating to keep input/output flow safe and predictable
- **Debugging Practice:** Identified variable scope as a source of error and resolved with early declarations
- **Conscious Tradeoff:** Opted for repetition and verbosity to maintain traceability during development

---
### 📦 Final Notes

- **V0:** Highly explicit, good for tracing and scaffolding future logic
- **V1:** Compact, modular, and logical prep for reusable patterns
- **V2.0:** Marked the start of scalable structure via iteration
- **V2.1:** Focused on input validation and flow safety; key groundwork for functions and `while` loops

---
### ⏭ Next Steps

- **v2.2:** Collapse `if-for-if` structures using `while` loops for retry handling
- **v3.0:** Begin modularisation using **functions** and explore **arrays or structs** for more elegant iteration
- **Long-term:** Robust input type checking using `cin.fail()` or exception handling

---

Note: This dev log was drafted using my raw development notes and code, with AI-assisted formatting and polish. All content was reviewed for accuracy. For a full description of the documentation process and AI use, see the README.

