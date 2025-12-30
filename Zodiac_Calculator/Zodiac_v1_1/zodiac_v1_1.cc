// * = chatgpt suggestion
// May 2025
// Changes from v0:
// 25/05: - * removed extra parentheses in boolean expressions
//		  - added input validation for month

// TO FIX:
// 25/05: - invalid day input generates invalid month msg
//		  - add input validation for day before entering switch
//		  - add predefined monthStart and monthEnd values?
//		  - add predefined startDay and endDay for each sign?
//		  - add ASCII visuals?
//		  - add an int signNumber for each sign?

#include <iostream>
using namespace std;

int main() {
	
	// variables
	int day(0);
	int month(0);
	string sign{};
	string element{};
	string modality{};
	bool validDay = true;
	bool validMonth = true;
	
	// input
	cout << endl;
	cout << "Enter your day and month of birth:" << endl;
	cin >> day >> month;
	cout << endl;
	
	// input validation for month
	if (month < 1 || month > 12) {
		cout << "Invalid month" << endl;
		validMonth = false;
		}
		
	if (validMonth) {
	
		// control branch: zodiac sign
		switch (month) {
			
			// january
			case 1:
				if (day >= 1 && day <=19) 		{ sign = "Capricorn";  			}
				else if (day >= 20 && day <=31)	{ sign = "Aquarius";    		}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;

			// february
			case 2:
				if (day >= 1 && day <=18) 		{ sign = "Aquarius";   			}
				else if (day >= 19 && day <=29)	{ sign = "Pisces";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// march	
			case 3:
				if (day >= 1 && day <=20) 		{ sign = "Pisces";     			}
				else if (day >= 21 && day <=31)	{ sign = "Aries";      			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// april	
			case 4:
				if (day >= 1 && day <=19) 		{ sign = "Aries";      			}
				else if (day >= 20 && day <=30)	{ sign = "Taurus";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// may	
			case 5:
				if (day >= 1 && day <=20) 		{ sign = "Taurus";      		}
				else if (day >= 21 && day <=31)	{ sign = "Gemini";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// june	
			case 6:
				if (day >= 1 && day <=20) 		{ sign = "Gemini";      		}
				else if (day >= 21 && day <=30)	{ sign = "Cancer";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// july	
			case 7:
				if (day >= 1 && day <=22) 		{ sign = "Cancer";      		}
				else if (day >= 23 && day <=31)	{ sign = "Leo";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// august	
			case 8:
				if (day >= 1 && day <=22) 		{ sign = "Leo";      			}
				else if (day >= 23 && day <=31)	{ sign = "Virgo";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// september	
			case 9:
				if (day >= 1 && day <=22) 		{ sign = "Virgo";      			}
				else if (day >= 23 && day <=30)	{ sign = "Libra";     			}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// october	
			case 10:
				if (day >= 1 && day <=22) 		{ sign = "Libra";      			}
				else if (day >= 23 && day <=31)	{ sign = "Scorpio";     		}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
			
			// november	
			case 11:
				if (day >= 1 && day <=21) 		{ sign = "Scorpio";      		}
				else if (day >= 22 && day <=30)	{ sign = "Sagittarius";     	}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
				
			// december
			case 12:
				if (day >= 1 && day <=21) 		{ sign = "Sagittarius";      	}
				else if (day >= 22 && day <=31)	{ sign = "Capricorn";     		}
				else 							{ cout << "Invalid day" << endl;
												  validDay = false;}
				break;
				
			default: cout << "Invalid month" << endl;
					 validMonth = false;
				break;
					
		}
		
	}
		
	// valid day & month
	
	if (validDay && validMonth) {
	
		// control branch: element
		// fire
		if (sign == "Aries" || sign == "Leo" || sign == "Sagittarius")
			
			{ element = "Fire"; }
		
		// air	
		else if (sign == "Aquarius" || sign == "Gemini" || sign == "Libra")
			
			{ element = "Air"; }
		
		// earth
		else if (sign == "Capricorn" || sign == "Taurus" || sign == "Virgo")
			
			{ element = "Earth"; }	
		
		// water	
		else if (sign == "Pisces" || sign == "Cancer" || sign == "Scorpio")
			
			{ element = "Water"; }
			
			
		// control branch: modality
		// cardinal
		if (sign == "Aries" || sign == "Cancer" 
		|| sign == "Libra" || sign == "Capricorn")
			
			{ modality = "Cardinal"; }
		
		// mutable	
		else if (sign == "Gemini" || sign == "Virgo" 
		|| sign == "Pisces" || sign == "Sagittarius")
			
			{ modality = "Mutable"; }
		
		// fixed
		else if (sign == "Aquarius" || sign == "Taurus" 
		|| sign == "Leo" || sign == "Scorpio")
			
			{ modality = "Fixed"; }	
		
		
		// output
		cout << "Sign: " << sign << endl;			
		cout << "Element: " << element << endl;
		cout << "Modality: " << modality << endl;
	
	}	
	
	return 0;
}
