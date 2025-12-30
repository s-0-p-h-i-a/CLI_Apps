#include <iostream>
using namespace std;

int main() {
	
	// variables
	int day(0);
	int month(0);
	string sign{};
	string element{};
	string modality{};
	
	// input
	cout << endl;
	cout << "Enter your day and month of birth:" << endl;
	cin >> day >> month;
	cout << endl;
	
	// control branch: zodiac sign
	switch (month) {
		
		// january
		case 1:
			if ((day >= 1) && (day <=19)) 		{ sign = "Capricorn";  			}
			else if ((day >= 20) && (day <=31))	{ sign = "Aquarius";    		}
			else 								{ cout << "Invalid day" << endl;}
			break;

		// february
		case 2:
			if ((day >= 1) && (day <=18)) 		{ sign = "Aquarius";   			}
			else if ((day >= 19) && (day <=29))	{ sign = "Pisces";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// march	
		case 3:
			if ((day >= 1) && (day <=20)) 		{ sign = "Pisces";     			}
			else if ((day >= 21) && (day <=31))	{ sign = "Aries";      			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// april	
		case 4:
			if ((day >= 1) && (day <=19)) 		{ sign = "Aries";      			}
			else if ((day >= 20) && (day <=30))	{ sign = "Taurus";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// may	
		case 5:
			if ((day >= 1) && (day <=20)) 		{ sign = "Taurus";      		}
			else if ((day >= 21) && (day <=31))	{ sign = "Gemini";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// june	
		case 6:
			if ((day >= 1) && (day <=20)) 		{ sign = "Gemini";      		}
			else if ((day >= 21) && (day <=30))	{ sign = "Cancer";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// july	
		case 7:
			if ((day >= 1) && (day <=22)) 		{ sign = "Cancer";      		}
			else if ((day >= 23) && (day <=31))	{ sign = "Leo";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// august	
		case 8:
			if ((day >= 1) && (day <=22)) 		{ sign = "Leo";      			}
			else if ((day >= 23) && (day <=31))	{ sign = "Virgo";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// september	
		case 9:
			if ((day >= 1) && (day <=22)) 		{ sign = "Virgo";      			}
			else if ((day >= 23) && (day <=30))	{ sign = "Libra";     			}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// october	
		case 10:
			if ((day >= 1) && (day <=22)) 		{ sign = "Libra";      			}
			else if ((day >= 23) && (day <=31))	{ sign = "Scorpio";     		}
			else 								{ cout << "Invalid day" << endl;}
			break;
		
		// november	
		case 11:
			if ((day >= 1) && (day <=21)) 		{ sign = "Scorpio";      		}
			else if ((day >= 22) && (day <=30))	{ sign = "Sagittarius";     	}
			else 								{ cout << "Invalid day" << endl;}
			break;
			
		// december
		case 12:
			if ((day >= 1) && (day <=21)) 		{ sign = "Sagittarius";      	}
			else if ((day >= 22) && (day <=31))	{ sign = "Capricorn";     		}
			else 								{ cout << "Invalid day" << endl;}
			break;
			
		default: cout << "Invalid month" << endl;
			break;
				
	}
	
	// control branch: element
	// fire
	if ((sign == "Aries") || (sign == "Leo") || (sign == "Sagittarius"))
		
		{ element = "Fire"; }
	
	// air	
	else if ((sign == "Aquarius") || (sign == "Gemini") || (sign == "Libra"))
		
		{ element = "Air"; }
	
	// earth
	else if ((sign == "Capricorn") || (sign == "Taurus") || (sign == "Virgo"))
		
		{ element = "Earth"; }	
	
	// water	
	else if ((sign == "Pisces") || (sign == "Cancer") || (sign == "Scorpio"))
		
		{ element = "Water"; }
		
		
	// control branch: modality
	// cardinal
	if ((sign == "Aries") || (sign == "Cancer") 
	|| (sign == "Libra") || (sign == "Capricorn"))
		
		{ modality = "Cardinal"; }
	
	// mutable	
	else if ((sign == "Gemini") || (sign == "Virgo") 
	|| (sign == "Pisces") || (sign == "Sagittarius"))
		
		{ modality = "Mutable"; }
	
	// fixed
	else if ((sign == "Aquarius") || (sign == "Taurus") 
	|| (sign == "Leo") || (sign == "Scorpio"))
		
		{ modality = "Fixed"; }	
	
	
	// output
	cout << "Sign: " << sign << endl
	<< "Element: " << element << endl
	<< "Modality: " << modality << endl;
	
		
	
	return 0;
}
