// ELEMENT
int getElement(int s) {
	
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

// MODALITY
int getModality(int s) {
	
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
