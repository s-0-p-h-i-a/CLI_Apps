# 📦 Zodiac Sign Calculator — Version 2.0

## 📅 Date
2025-05-25

## 📝 Description
Major internal refactor focused on improving modularity and simulating the use of functions, arrays, and structures — while staying within the scope of my current C++ knowledge (no functions, arrays, or `cin.fail()` yet). v2.0 aims to lay conceptual groundwork for more abstract, maintainable code while retaining the core logic of earlier versions.

> * `^` = ChatGPT suggestion  

---
## ✨ Features

- **Same core functionality as v1.1:**
  - User inputs birth date (month + day)
  - Determines zodiac sign, element, and modality
  - Outputs results with styled formatting

- **New Additions:**
  - Input validation now covers both month and day using cleaner logic
  - Added integer-based mapping for zodiac sign, element, and modality
  - Visual upgrade: decorative console output for user experience
  - Cleaner, more compact code layout
  - Output string assignment moved to switch blocks using mapped integers

---
## 🧠 What I Practiced

- Simulating modular logic using intermediate variables
- Designing more abstract computation flow without arrays/functions
- Handling user input validation using nested logic
- Improving variable scope and declaration discipline
- Thinking about future program expansion from a systems perspective

---
## 🧩 Approach

- **Design Strategy:**
  - Started with brainstorming “moving parts” of the logic
  - Fragmented key variables (e.g., sign1, sign2, signEnd) to enable a more modular structure
  - Used `signNumber`, `elementNumber`, `modalityNumber` as placeholders for eventual enum or array use
  - Integrated new logic into the existing control flow structure, rather than rewriting from scratch — this preserved stability and allowed incremental changes

- **Implementation Notes:**
  - Avoided redundant variables (e.g. `signStart` unnecessary)
  - Scoped variable declarations close to point of use
  - Replaced repeated string assignment with integer-mapped `switch` branches
  - Applied formatting and output consistency across all branches

---

## ✅ Changes from v1.1

- ✔ Replaced nested day checks with single validation block
- ✔ Mapped strings (`sign`, `element`, `modality`) from numerical values
- ✔ Added comments and structural separators for readability
- ✔ Improved variable scope and reduced clutter
- ✔ Optimised input validation logic
- ^ Consider converting all `int x(0)` declarations to `int x = 0` format for consistency

---

## 🛠️ Next Steps

- Review edge cases in day/month validation logic
- Prep for refactoring with arrays/enums/structs once learned
- Modularise with functions once scope and parameter logic is introduced

---

## 📎 Notes

- This version is an intentional transition point — combining full manual logic with abstracted representations for easier migration to more advanced C++ concepts.
- Code structure now more clearly reflects the three phases: **input → computation → output**.
- Naming updated to v2.0 to reflect the shift toward abstraction.

---

## 🧪 Examples & Code Comparison

### (1) Input Validation Logic

**Previous (v1.1):**
Day validation repeated inside each of the 12 month branches:
```cpp
case 1:
  if (day >= 1 && day <=19) { sign = "Capricorn"; }
  else if (day >= 20 && day <=31) { sign = "Aquarius"; }
  else {
    cout << "Invalid day" << endl;
    validDay = false;
  }
  break;
```

**v2.0 Refactor:**
Day validation moved outside switch, done once:
```cpp
bool validMonth = true;
if (!(month >= 1 && month <= 12)) {
	cout << "Invalid month" << endl;
	validMonth = false;
}

bool validDay = true;
int monthEnd;
if (validMonth) {
	switch (month) {
		case 2: monthEnd = 29; break;
		case 4: case 6: case 9: case 11: monthEnd = 30; break;
		default: monthEnd = 31;
	}
	if (!(day >= 1 && day <= monthEnd)) {
		cout << "Invalid day" << endl;
		validDay = false;
	}
}
```

### (2) Output String Mapping

**Previous (v1.1):**
```cpp
if (sign == "Aries" || sign == "Leo" || sign == "Sagittarius")
  element = "Fire";
```

**v2.0 Refactor:**
```cpp
switch (elementNumber) {
  case 1: element = "Fire"; break;
  case 2: element = "Air"; break;
  case 3: element = "Earth"; break;
  case 4: element = "Water"; break;
}
```
---

> ✍️ This dev log was drafted using my raw development notes and code, with AI-assisted formatting and polish. All content was reviewed for accuracy.  
> For a full description of the documentation process and AI use, see the README.
