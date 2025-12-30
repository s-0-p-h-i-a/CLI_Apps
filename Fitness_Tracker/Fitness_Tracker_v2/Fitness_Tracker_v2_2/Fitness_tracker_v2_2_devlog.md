
## 🏋️‍♀️ Fitness Tracker – Dev Log v2.2

**Version date:** 23/06/25  
**Project goal:** Track frequency of 4 workout types over 4 weeks, classify frequency tiers, and provide motivational feedback.
**Note**: Error handling doesn't work as intended in case of wrong type input

^ = ChatGPT suggestion

**Focus for v2.2:**

- Replace nested `if`-based input validation with **`do...while` loops**
- Add **infinite loop protection** using `loopLimit` and `count`
- ^ Begin moving from global to **localised error handling**
- Tighten control over when and how the program continues after invalid input

---
### 🧠 Concept Recap

- **Structure:** 4 workouts × 4 weeks  
- **New validation:** `do...while` loops now handle weekly input retries  
- **Frequency tiers:** unchanged from v2.1
    - `0–7`: low → Level 1
    - `8–21`: moderate → Level 2
    - `22–28`: high → Level 3  

---
### 🔁 Evolution from v2.1 to v2.2

**v2.1:**

- Used `if` checks and a global `inputValid` flag
- Retry attempts were limited to one per input
- Prevented further execution on first invalid block

**v2.2:**

- Introduced `do...while` loops for **retriable input validation**
- Implemented **loop exit protection** via a `loopLimit` (set to 10) and a `count` variable
- ^ Began transition to **block-local flags** like `weekInputValid`, reducing reliance on `inputValid`
- Error handling logic now lives **closer to the input itself**, making the structure cleaner and safer

---
### 🛠 Implementation Notes

#### 🧾 Input & Validation

- All input blocks (upper body, lower body, core, cardio) now use:
  - A `for` loop for week count (1–4)
  - A **nested `do...while` loop** to prompt, validate, and retry input
  - ^ A **local `weekInputValid` flag** to control exit from retry loop
- Upper body block was used as a **prototype** before replicating the pattern across all workout types
- Global `inputValid` still present, but now largely inactive — retained for future use with `cin.fail()`
- Input outside the 0–7 range triggers a retry message
- String/char input can still break logic, but now fails gracefully by eventually exiting due to `loopLimit`

#### 🚫 Infinite Loop Protection

- Introduced `const int loopLimit = 10` and a `count` variable to detect and break from runaway loops
- Edge case tested: entering letters or strings leads to eventual halt, rather than crashing or freezing

#### ⚙️ Control Flow

- Shifted from “prevent execution if input invalid” to “handle invalid input immediately, then continue safely”
- Attempted to only allow program to proceed if all `do...while` loops exit successfully: became difficult due to unpredictable behaviour, decided against further attempts as the next version will include better input validation + error handling via `cin.fail()` and `cin.clear()`
- Each workout type still enclosed in `if (inputValid)` blocks to avoid accumulating totals after failure

#### 🎛 Frequency Level Classification

- Same level logic as in v2.1
- Level assignments moved to a dedicated `if (inputValid)` block after all input completed
- Removed unnecessary fallback `else` blocks now that all totals are validated at input time

#### 🧾 Output

- Output structure unchanged
- Totals and feedback messages generated via loop and `switch` statements

---
### ⚠️ Challenges

- First attempt at `do...while` loops required careful tracing of input logic to avoid unintended behavior
- Spent time comparing whether to validate **before or inside** loop blocks — settled on inner-loop validation for direct handling
- Wrong-type input (e.g. char) remains uncatchable without `cin.fail()`, but is now **contained
- Considered whether removing `if (inputValid)` blocks for lower/core/cardio would be worth it — decided against due to clarity/performance tradeoffs

---
### ✅ Reflections

- **Stronger foundation** laid for future modularisation and robust error handling
- Felt the **gains of using loops** for cleaner, self-contained logic blocks
- First implementation of **guardrails against infinite input loops**
- Shift in thinking: it’s often better to **block progression at the source of error**, not react downstream
- Recognised the **limits of type-safe input handling** without `cin.fail()` — built structure to accommodate its future inclusion

---
### 📦 Final Notes

- **V0:** Scaffolding phase with one block per workout
- **V1:** Modular step-up, preparing for reuse
- **V2.0:** Iterative structure with `for` loops
- **V2.1:** Added one-shot input validation and flow control
- **V2.2:** Introduced robust retry logic and loop safeguards

---
### ⏭ Next Steps

- **v3.0:** Add `cin.fail()` to detect invalid input types (e.g. chars, strings)
- Refactor validation into **functions** for clarity and reuse
- Introduce arrays or structs for **elegant iteration** and data storage
- Remove redundant code paths now made obsolete by input validation improvements

---

Note: This dev log was drafted using my raw development notes and code, with AI-assisted formatting and polish. All content was reviewed for accuracy. For a full description of the documentation process and AI use, see the README.


