
// SIGN START: for each month, the day the current zodiac sign changes
int getSignStart(int m) {
	
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


// SIGN
int getSign(int m, int d) {
	
	int signStart = getSignStart(m);
	int signResult(0);

		
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
