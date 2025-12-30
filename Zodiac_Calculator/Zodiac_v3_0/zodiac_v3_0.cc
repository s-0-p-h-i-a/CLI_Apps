/** Sign numbers:
 * Aries 1, Taurus 2, Gemini 3, Cancer 4,
 * Leo 5, Virgo 6, Libra 7, Scorpio 8,
 * Sagittarius 9, Capricorn 10, Aquarius 11, Pisces 12
 * 
 * Element numbers: fire 1, air 2, earth 3, water 4
 * Modality numbers: cardinal 1, mutable 2, fixed 3

 ** v3.0 Refactor
 * Introduced functions (input validation, sign logic, mappings) and switched to while loops.
 * Refactor felt natural thanks to groundwork in v2.x; new sign logic based on month/sign offsets.
 

 ** v3.0 Refactor Notes
 * Main change: introduced functions
 * Secondary changes:
 *   - new sign calculation logic
 *   - switched to while loops for input validation
 * 
 * Process:
 * - Started by drafting defineMonthEnd and defineSignStart in separate files 
 *   to practice abstraction in a clean space
 * - Then refactored the program top-to-bottom, replacing code modules with functions
 * - Thanks to the structure in previous versions, this felt smooth and natural
 * - No blockers during the refactor — the groundwork was already done
 * 
 * Input handling:
 * - Still limited to checking if int values are within valid ranges
 * - Tried handling non-integers, but cin.fail() is outside current course scope
 * - Kept focus on applying only what I’ve learned so far
 * 
 * Sign logic:
 * - Built around the symmetry of 12 months and 12 zodiac signs
 * - Used the consistent offset between month numbers and sign numbers
 * - Accounted for the fact that each sign spans two adjacent months
 * 
 * Other notes:
 * - Continued experimenting with indentation/spacing for readability vs. compactness
 * - Used // comments to mark sections and improve navigation
 */

 
// Sign numbers:
// Aries 1, Taurus 2, Gemini 3, Cancer 4,
// Leo 5, Virgo 6, Libra 7, Scorpio 8,
// Sagittarius 9, Capricorn 10, Aquarius 11, Pisces 12

// Element numbers: fire 1, air 2, earth 3, water 4
// Modality numbers: cardinal 1, mutable 2, fixed 3



#include <iostream>
using namespace std;

// // FUNCTION PROTOTYPES
// CALCULATION
int defineMonthEnd(int month0);

int defineSignStart(int month0);

int defineSign(int month0, int day0);

int defineElement(int sign0);

int defineModality(int sign0);

// STRING DEFINITION
string defineSignName(int sign0);
string defineElementName(int element0);
string defineModalityName(int modality0);

// MAIN

int main() {

	// // // START
	// // TITLE
	cout << endl << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "   ....•*•.•*•. ZODIAC SIGN CALCULATOR .•*•.•*•.... " << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	// // INPUT
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Enter your month and day of birth: ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	
	// MONTH + END DAY
	int month (0);
	cout << "☆ Month : ";
	
	do {
		cin >> month;
		
		if (month < 1 || month > 12) {
			cerr << "☆ Invalid month! Must be 1 - 12. Try again: " << endl;
		}	
	} while (month < 1 || month > 12);
	
	int monthEnd = defineMonthEnd(month);
	
	cout << "☆ " << endl;
	
	// DAY
	int day(0);
	cout << "☆ Day : ";
	
	do {
		cin >> day;
		
		if (day < 1 || day > monthEnd) {
			cerr << "☆ Invalid day! Must be 1 - " << monthEnd
			<< ". Try again: " << endl;
		}	
	} while (day < 1 || day > monthEnd);
	
	cout << "☆" << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	
	// // // MAIN LOGIC
	
		
	// // SIGN CALCULATION
	int sign = defineSign(month, day);
		
	// // ELEMENT CALCULATION
	int element = defineElement(sign);
		
	// // MODALITY CALCULATION
	int modality = defineModality(sign);
		
		
	// // // OUTPUT
	// // OUTPUT STRINGS DEFINITION
	string signName = 	  defineSignName(sign);
	string elementName =  defineElementName(element);
	string modalityName = defineModalityName(modality);
		
	// // COUT
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Your results ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	// Sign
	cout << "☆ Sign : you're a(n) " << signName << "!" << endl;
	cout << "☆" << endl;
	// Element			
	cout << "☆ Element: " << elementName << endl;
	cout << "☆" << endl;
	// Modality
	cout << "☆ Modality: " << modalityName << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	return 0;
}

// // FUNCTION DEFINITIONS
// CALCULATION
// Month End
int defineMonthEnd(int m) {
	
	int monthEndResult(0);
	
	switch (m) {
			case 2: 						 monthEndResult = 29; break;
			case 4: case 6: case 9: case 11: monthEndResult = 30; break;
			default: 						 monthEndResult = 31; break;
		} 
	return monthEndResult;
}

// Sign Start
int defineSignStart(int m) {
	
	int signStartResult(0);
	
	switch (m) {
		
		case 1: case 4: 			signStartResult = 19; break;
		case 2: 					signStartResult = 18; break;
		case 3: case 5: case 6: 	signStartResult = 20; break;
		case 11: case 12: 			signStartResult = 21; break;
		default: 					signStartResult = 22; break;	
	}	
	return signStartResult;
}

// // SIGN
int defineSign(int m, int d) {
	
	int signResult(0);
	int signStart = defineSignStart(m);

		
	if (m > 3) {
		
		if (d >= signStart) { signResult = m - 2; }
		else { 				  signResult = m - 3; }
		
	} else {
		
		switch (m) {
			
			case 1:
				if (d < signStart) { signResult = 10; } else { signResult = 11; }
				break;
			case 2:
				if (d < signStart) { signResult = 11; } else { signResult = 12; }
				break;
			case 3:
				if (d < signStart) { signResult = 12; } else { signResult = 1; }
				break;
		}
	}
	return signResult;
}

// Element
int defineElement(int s) {
	
	int elementResult(1);
		
	// Fire
	if (s == 1 || s == 5 || s == 9)			
		{ elementResult = 1; }
		
	// Air	
	else if (s == 11 || s == 3 || s == 7)			
		{ elementResult = 2; }
		
	// Earth
	else if (s == 10 || s == 2 || s == 6)			
		{ elementResult = 3; }	
		
	// Water	
	else if (s == 12 || s == 4 || s == 8)			
		{ elementResult = 4; }
		
	return elementResult;		
}

// Modality
int defineModality(int s) {
	
	int modalityResult(1);
	
	// Cardinal
	if (s == 1 || s == 4 || s == 7 || s == 10)
			{ modalityResult = 1; }
		
	// Mutable	
	else if (s == 3 || s == 6 || s == 9 || s == 12)
			{ modalityResult = 2; }
		
	// Fixed
	else if (s == 2 || s == 5 || s == 8 || s == 11)			
			{ modalityResult = 3; }	
			
	return modalityResult;
}

// STRING DEFINITIONS
// Sign Name
string defineSignName(int s) {
	
	string signNameResult{};
	
	switch (s) {
		case 1: signNameResult = "Aries"; break;
			
		case 2: signNameResult = "Taurus"; break;
			
		case 3: signNameResult = "Gemini"; break;
			
		case 4: signNameResult = "Cancer"; break;
			
		case 5: signNameResult = "Leo"; break;
			
		case 6: signNameResult = "Virgo"; break;
			
		case 7: signNameResult = "Libra"; break;
			
		case 8: signNameResult = "Scorpio"; break;
			
		case 9: signNameResult = "Sagittarius"; break;
			
		case 10: signNameResult = "Capricorn"; break;
		
		case 11: signNameResult = "Aquarius"; break;
			
		case 12: signNameResult = "Pisces"; break;
	}		
	return signNameResult;			
}

// Element Name
string defineElementName(int e) {
	
	string elementNameResult{};
	
	switch (e) {
		case 1: elementNameResult = "Fire"; break;
		case 2: elementNameResult = "Air"; break;
		case 3: elementNameResult = "Earth"; break;
		case 4: elementNameResult = "Water"; break;
	}
	return elementNameResult;
}

// Modality Name
string defineModalityName(int m) {
	
	string modalityNameResult{};
	
	switch (m) {
		case 1: modalityNameResult = "Cardinal"; break;
		case 2: modalityNameResult = "Mutable"; break;
		case 3: modalityNameResult = "Fixed"; break;
		}
	return modalityNameResult;
}
