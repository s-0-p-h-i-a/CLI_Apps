## 🏋️‍♀️ Fitness Tracker – Dev Log v2.0

**Version date:** 06/06/25  
**Project goal:** Track frequency of 4 workout types (upper body, lower body, core, cardio) over 4 weeks, classify frequency tiers, and provide motivational feedback.

**Focus for v2:**

- Transition from manual repetition to loop-based iteration
- Begin moving toward more integrated logic and data handling
- Practice refactoring verbose structures using `for` loops

---
### 🧠 Concept Recap

- **Structure:** 4 workouts × 4 weeks → input per week, totals per type, frequency level, feedback
- **Frequencies:**
    - `4`: weekly consistency
    - `2–3`: good consistency
    - `≤1`: low or no consistency
- **Switch blocks retained** for feedback logic, but now integrated into looped output structure

---
### 🔁 Evolution from v0 to v2.0

**V0:**  
- Emphasized clarity through step-by-step logic  
- Explicit variable declarations and output handling  
- Repetition of control structures made patterns more apparent  
- More modular and readable, but also more verbose

**V1:**
- Built logic manually, decomposed repetition by copy-pasting full code blocks
- Focused on modular readability using consistent naming conventions and `switch` statements
- Output handled by deeply nested `switch` blocks per workout type

**V2.0:**
- Introduced `for` loops for weekly input collection and output generation
- Significantly reduced repetition in both input and output logic
- Frequency level classification logic retained from v1 for continuity
- Began mentally automating the transformation of manual blocks into reusable loop-friendly formats

---
### 🛠 Implementation Notes

#### 🧾 Input

- Input for each workout type now handled via a `for` loop spanning 4 weeks
- Total frequency is updated directly inside the loop → no need for separate variables per week
- Simplified input logic also paves the way for future enhancements (e.g. dynamic week count)

#### 🧠 Modularity (Loop Emulation)

- Variables like `upperBodyTotal`, `lowerBodyTotal`, etc. remain separate for now for clarity
- Early awareness of how arrays or structs would streamline this process
- Variable naming made more descriptive (`upperTotal` → `upperBodyTotal`) to reduce ambiguity during iteration

#### 🧾 Output

- Reused v1 `switch` logic for frequency classification and feedback generation
- Output structure refactored into a `for` loop that handles all 4 workout types sequentially
    - Inside loop: `switch(i)` determines which type to process
    - Nested `switch` determines feedback string based on level
- Output loop now drives both message selection and display in a clean, centralized structure
    - Copy-pasting and editing from v1 required careful bracket management

#### ⚠️ Challenges

- Porting v1’s output logic into a loop required attention to correct variable substitutions
- No input validation yet; assumed numeric values for simplicity
- Slight increase in abstraction made logic denser, but still traceable
- Switch nesting is still a bit heavy, but manageable thanks to looped structure

---
### ✅ Reflections

- **Iteration Milestone:** First version using `for` loops to reduce structural repetition
- **Mental Shift:** Starting to think like a programmer—manually simulating what functions and arrays would automate
- **Coding Flow:** Starting to recognise and reuse structural templates across workout types
- **Balance Point:** Kept variable separation and switch logic to preserve clarity, while embracing more concise control flow

---
### 📦 Final Notes

- **V0:** More explicit and modular—useful for stepping through logic and preparing for future enhancements  
- **V1:** More compact and abstract—closer to how arrays and structs might eventually structure this logic ; good prep for modular design
- **V2:** Marked structural shift toward scalable code; laid groundwork for arrays, functions, and validation
- **Next step:**
    - **v2.1:** Add input validation and streamline feedback string reuse
    - **v3:** Introduce functions for true modularity, consider using arrays or structs for more scalable design

---

Note: This dev log was drafted using my raw development notes and code, with AI-assisted formatting and polish. All content was reviewed for accuracy. For a full description of the documentation process and AI use, see the README.

