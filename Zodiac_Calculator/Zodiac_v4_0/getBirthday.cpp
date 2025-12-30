#include <iostream>
using namespace std;

// MONTH
int getMonth() {
	
	cout << "☆ Month : ";
	
	int birthMonth(0);
	bool validMonth(false);
		
	while (!validMonth) {
		cin >> birthMonth;
		
		validMonth = birthMonth >= 1 && birthMonth <= 12 && !cin.fail();
		
		if (!validMonth) {
			cerr << "☆ Invalid month! Must be 1 - 12. Try again: " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}	
	} 
	cout << "☆ " << endl;
	
	return birthMonth;
}

// MONTH END DAY (for day input validation)
int getMonthEnd(int m) {
	
	int monthEnd(0);
	
	switch (m) {
			case 2: 						 monthEnd = 29; break;
			case 4: case 6: case 9: case 11: monthEnd = 30; break;
			default: 						 monthEnd = 31; break;
		} 
	return monthEnd;
}


// DAY
int getDay (int birthMonth) {
	
	cout << "☆ Day : ";
	
	int birthDay(0);
	bool validDay(false);
	
	do {
		cin >> birthDay;
		
		int monthEnd = getMonthEnd(birthMonth);
		validDay = birthDay >= 1 && birthDay <= monthEnd && !cin.fail();
		
		if (!validDay) {
			cerr << "☆ Invalid day! Must be 1 - 29/30/31. Try again: " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}	
	} while (!validDay);
	cout << "☆ " << endl;
	
	return birthDay;
}
