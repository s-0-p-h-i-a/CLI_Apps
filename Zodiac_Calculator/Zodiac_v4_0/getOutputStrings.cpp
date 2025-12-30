#include <string>
using namespace std;

// SIGN NAME
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

// ELEMENT NAME
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

// MODALITY NAME
string defineModalityName(int m) {
	
	string modalityNameResult{};
	
	switch (m) {
		case 1: modalityNameResult = "Cardinal"; break;
		case 2: modalityNameResult = "Mutable"; break;
		case 3: modalityNameResult = "Fixed"; break;
		}
	return modalityNameResult;
}
