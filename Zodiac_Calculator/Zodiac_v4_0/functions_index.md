# Zodiac Calculator v4.0

## Functions index

### getBirthday.cpp:

User birthday input

- int getMonth()
- int getMonthEnd(int m): only used in getDay, for input validation
- int getDay()

---
### getSign.cpp:

Define user sign based on input

- int getSignStart(int m): only used in getSign
- int getSign(int m, int d)

---
### getSignInfo.cpp:

Define sign element and modality

- int getElement(int s)
- int getModality(int s)

---
### getOutputStrings.cpp:

Define personalised output strings based on user sign info

- string defineSignName(int s)
- string defineElementName(int e)
- string defineModalityName(int m)

---
### printUserInfo.cpp:

Outputs user's sign characteristics

- includes getSignInfo.h
- includes getOutputStrings.h
- void printUserInfo(int s)


