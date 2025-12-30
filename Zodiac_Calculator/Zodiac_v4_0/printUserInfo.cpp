#include "getOutputStrings.h"
#include "getSignInfo.h"
#include <iostream>
#include <string>
using namespace std;

void printUserInfo(int s) {
	
	cout << "☆" << endl;
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Your results ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	
	// Sign
	cout << "☆ Sign : you're a(n) " << defineSignName(s) << "!" << endl;
	cout << "☆" << endl;
	
	// Element			
	cout << "☆ Element: " << defineElementName(getElement(s)) << endl;
	cout << "☆" << endl;
	
	// Modality
	cout << "☆ Modality: " << defineModalityName(getModality(s)) << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
}
