
// Sign numbers:
// Aries 1, Taurus 2, Gemini 3, Cancer 4,
// Leo 5, Virgo 6, Libra 7, Scorpio 8,
// Sagittarius 9, Capricorn 10, Aquarius 11, Pisces 12

// Element numbers: fire 1, air 2, earth 3, water 4
// Modality numbers: cardinal 1, mutable 2, fixed 3

#include <iostream>
using namespace std;

int main() {	

	// Title
	cout << endl << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "   ....•*•.•*•. ZODIAC SIGN CALCULATOR .•*•.•*•.... " << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	
	// Input
	int day (0);
	int month (0);
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Enter your day and month of birth: ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	// Day
	cout << "☆ Day : ";
	cin >> day;
	cout << "☆ " << endl;
	// Month
	cout << "☆ Month : ";
	cin >> month;
	cout << "☆" << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;


	// ------------- PROGRAM START -------------
	
	// Input validation:
	// Month
	bool validMonth = true;
	if (!(month >= 1 && month <= 12)) {
		cout << "Invalid month" << endl;
		validMonth = false; }
	
	// Define monthEnd
	bool validDay = true;
	int monthEnd;
	if (validMonth) {
		switch (month) {
			case 2: monthEnd = 29; break;
			case 4: case 6: case 9: case 11: monthEnd = 30; break;
			default: monthEnd = 31;}
			
	// Input validation: day	
		if (!(day >= 1 && day <= monthEnd)) {
			cout << "Invalid day" << endl;
			validDay = false; }	}
	
	// validDay && validMonth	
	if (validMonth && validDay) {
		
		// Find zodiac sign:
		// Calculation variables
		int signEnd;
		int sign1;
		int sign2;
		
		// Define calculation variables
		switch (month) {			
			// January
			case 1:
				signEnd = 19;
				sign1 = 10;
				sign2 = 11;
				break;

			// February
			case 2:
				signEnd = 18;
				sign1 = 11;
				sign2 = 12;
				break;
			
			// March	
			case 3:
				signEnd = 20;
				sign1 = 12;
				sign2 = 1;
				break;
			
			// April	
			case 4:
				signEnd = 19;
				sign1 = 1;
				sign2 = 2;
				break;
			
			// May	
			case 5:
				signEnd = 20;
				sign1 = 2;
				sign2 = 3;
				break;
			
			// June	
			case 6:
				signEnd = 20;
				sign1 = 3;
				sign2 = 4;
				break;
			
			// July	
			case 7:
				signEnd = 22;
				sign1 = 4;
				sign2 = 5;
				break;
			
			// August	
			case 8:
				signEnd = 22;
				sign1 = 5;
				sign2 = 6;
				break;
			
			// September	
			case 9:
				signEnd = 22;
				sign1 = 6;
				sign2 = 7;
				break;
			
			// October	
			case 10:
				signEnd = 22;
				sign1 = 7;
				sign2 = 8;
				break;
			
			// November	
			case 11:
				signEnd = 21;
				sign1 = 8;
				sign2 = 9;
				break;
				
			// December
			case 12:
				signEnd = 21;
				sign1 = 9;
				sign2 = 10;
				break; }
		
		
	// Define sign
	int signNumber;	
	if (day <= signEnd) { signNumber = sign1;  		}
	else 				{ signNumber = sign2;    	}		
	
	
	// Define element
	int elementNumber(1);
		
	// Fire
	if (signNumber == 1 || signNumber == 5 || signNumber == 9)			
		{ elementNumber = 1; }
		
	// Air	
	else if (signNumber == 11 || signNumber == 3 || signNumber == 7)			
		{ elementNumber = 2; }
		
	// Earth
	else if (signNumber == 10 || signNumber == 2 || signNumber == 6)			
		{ elementNumber = 3; }	
		
	// Water	
	else if (signNumber == 12 || signNumber == 4 || signNumber == 8)			
		{ elementNumber = 4; }			
			
			
	// Define modality
	int modalityNumber(1);
	
	// Cardinal
	if (signNumber == 1 || signNumber == 4 || signNumber == 7 || signNumber == 10)
			{ modalityNumber = 1; }
		
	// Mutable	
	else if (signNumber == 3 || signNumber == 6 || signNumber == 9 || signNumber == 12)
			{ modalityNumber = 2; }
		
	// Fixed
	else if (signNumber == 2 || signNumber == 5 || signNumber == 8 || signNumber == 11)			
			{ modalityNumber = 3; }	
		
			
	// Define output variables:
	// Sign
	string sign{};
	switch (signNumber) {
		case 1: sign = "Aries";
			break;
			
		case 2: sign = "Taurus";
			break;
			
		case 3: sign = "Gemini";
			break;
			
		case 4: sign = "Cancer";
			break;
			
		case 5: sign = "Leo";
			break;
			
		case 6: sign = "Virgo";
			break;
			
		case 7: sign = "Libra";
			break;
			
		case 8: sign = "Scorpio";
			break;
			
		case 9: sign = "Sagittarius";
			break;
			
		case 10: sign = "Capricorn";
			break;
		
		case 11: sign = "Aquarius";
			break;
			
		case 12: sign = "Pisces";
			break; }
	
	// Element
	string element{};
	switch (elementNumber) {
		case 1: element = "Fire";
			break;
		case 2: element = "Air";
			break;
		case 3: element = "Earth";
			break;
		case 4: element = "Water";
			break; }
			
	
	// Modality
	string modality{};
	switch (modalityNumber) {
		case 1: modality = "Cardinal";
			break;
		case 2: modality = "Mutable";
			break;
		case 3: modality = "Fixed";
			break; }
		
	// ------------- PROGRAM END -------------
	
	// Output:
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Your results ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	
	// Sign
	cout << "☆ Sign : you're a(n) " << sign << "!" << endl;
	cout << "☆" << endl;
	// Element			
	cout << "☆ Element: " << element << endl;
	cout << "☆" << endl;
	// Modality
	cout << "☆ Modality: " << modality << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	}	
	
	return 0;
}
