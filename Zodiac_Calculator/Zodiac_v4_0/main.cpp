/** Sign numbers:
 * Aries 1, Taurus 2, Gemini 3, Cancer 4,
 * Leo 5, Virgo 6, Libra 7, Scorpio 8,
 * Sagittarius 9, Capricorn 10, Aquarius 11, Pisces 12
 * 
 * Element numbers: fire 1, air 2, earth 3, water 4
 * Modality numbers: cardinal 1, mutable 2, fixed 3
 * 
 * V4.0 REFACTOR:
 * 
 * Main goals:
 * - Separate large main file into main + function defs and headers
 * - Implement cin.fail for input validation
 * - Adapt control structures based on 2 previous goals
 * 
 * Process:
 * - Find refactor 'entry point' with little/no dependencies that can easily be isolated
 * - Work from this entry point outwards
 * - Write functions index file to track all functions in this program
 * 
 * Start:
 * - Create input function file getBirthday using cin.fail for true input validation
 * - getDay uses getMonthEnd twice: is this or declaring a monthEnd variable more efficient?
 * 		-> using a variable is probably better, value is defined and can be directly used instead of
 * 		   running a function twice
 * - getMonth, getMonthEnd and getDay all in the same file for logic & scope reasons (eg getMonthEnd
 * only needed for getDay input validation)
 * - Refactor went smoothly, small compile/build/run issues quickly solved
 * 
 * Notes:
 * - Remember to cin.clear and cin.ignore when using cin.fail
 * 

 */

 
// Sign numbers:
// Aries 1, Taurus 2, Gemini 3, Cancer 4,
// Leo 5, Virgo 6, Libra 7, Scorpio 8,
// Sagittarius 9, Capricorn 10, Aquarius 11, Pisces 12

// Element numbers: fire 1, air 2, earth 3, water 4
// Modality numbers: cardinal 1, mutable 2, fixed 3



#include <iostream>
#include "getBirthday.h"
#include "getSign.h"
#include "printUserInfo.h"
using namespace std;

int main() {

	// // START
	// TITLE
	cout << endl << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "   ....•*•.•*•. ZODIAC SIGN CALCULATOR .•*•.•*•.... " << endl;
	cout << " ☾ ⋆*･ﾟ:⋆*･ﾟ  ─── ･ ｡ﾟ☆: *.☽ .* :☆ﾟ. ───  ☾ ⋆*･ﾟ:⋆*･ﾟ " << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	cout << "☆" << endl;
	
	// INPUT
	cout << "─ ⋆⋅☆⋅⋆☾ ─ Enter your birthday: ─ ☽⋆⋅☆⋅⋆ ─ " << endl;
	cout << "☆" << endl;
	
	int month = getMonth();
	int day = getDay(month);
		
	// OUTPUT
	int sign = getSign(month, day);
	
	printUserInfo(sign);
	
	return 0;
}
