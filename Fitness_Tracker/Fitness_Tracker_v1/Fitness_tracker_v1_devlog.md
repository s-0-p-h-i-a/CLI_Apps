## 🏋️‍♀️ Fitness Tracker – Dev Log v1  


**Version date:** 26/05  
**Project goal:** Track the frequency of 4 workout types (upper body, lower body, core, cardio) over 4 weeks and provide feedback based on frequency tiers.  

**Focus for v1:**  
- Practice modular thinking with basic C++ tools  
- Emulate arrays and functions manually  
- Explore decomposing loops and iterations into explicit, readable code blocks

---
### 🧠 Concept Recap
- **Structure:** 4 workouts × 4 weeks → weekly input, monthly totals, frequency classification, feedback output  
- **Frequencies:**  
  - `f == 4`: done weekly  
  - `f <= 3`: consistent 
  - `f <= 1`: rare or missing  
- **No input validation yet**: defaults handle missing data via `switch` fallback

---
### 🔁 Evolution from v0 to v1

**V0:**  
- Emphasized clarity through step-by-step logic  
- Explicit variable declarations and output handling  
- Repetition of control structures made patterns more apparent  
- Modular and readable, but also more verbose

**V1:**  
- Shift toward compact logic with a more abstract structure  
- Tested grouping related logic into single `switch` blocks  
- Reduced redundancy in output construction  
- Explored tradeoffs between readability, reusability, and preparation for future use of arrays/structs

---
### 🛠 Implementation Notes

#### 🧾 Input
- Gathered weekly workout data in one go instead of repeating `cin` blocks  
- Prioritised overview and visual clarity using `////` to separate sections

#### 🧠 Modularity (Manual Emulation)
- Process for building logic blocks:
  - Create one fully working block  
  - Copy-paste structure and replace variable prefixes (`lower` → `upper`, etc.)  
  - Keep variable name lengths consistent for keyboard-based editing  
  - Rely on IDE suggestions for existing variable reuse

- Considered reusing `Total` variables for `Level`, but decided to keep both for conceptual clarity and future expansion

#### 🧾 Output
- Started with basic printouts, then retrofitted `switch` structures to organize messages  
- Nested `switch` statements became necessary to combine frequency tiers with workout types  
  - **Personal reflection:** nesting got confusing fast—felt like "modular madness" without actual modular tools!  
  - Explored two output strategies:
    - Separate `switch` per workout (more modular and extensible)
    - Single combined `switch` (more compact, mirrors array/struct use but harder to adapt)
  - Chose the **compact version** for v1, noting it's less future-proof but a good learning step

#### ⚠️ Challenges
- No straightforward way to automate definition of output messages—copy-pasted final structure  
- Complicated logic flow without functions or arrays made debugging harder  
- Most C++ I’ve written in a long time—felt satisfying to see it compile and run!

---
### ✅ Reflections

- **Breakthrough:** Gained deeper understanding of how loops and modular structures work "under the hood"  
- **Tradeoff Awareness:** Balancing clarity vs compactness helped clarify when to use which style  
- **Idea for future tool:** Build a small helper that detects repeated code blocks and suggests variable name substitutions  
- **Victory moment:** “It actually works!” — This small win felt huge and boosted my confidence

---
### 📦 Final Notes

- **V0:** More explicit and modular—useful for stepping through logic and preparing for future enhancements  
- **V1:** More compact and abstract—closer to how arrays and structs might eventually structure this logic  
- **Next step:** Learn arrays and functions so I can *really* modularize and avoid manually duplicating logic

---

Note: This dev log was drafted using my raw development notes and code, with AI-assisted formatting and polish. All content was reviewed for accuracy. For a full description of the documentation process and AI use, see the README.
