#ifndef OCCURRENCE_H
#define OCCURRENCE_H

struct Occurrence {
	
	int *factorList;
	int factorList_n;
	
	int count;
	
	float magnitude;
 
        float rSquaredContribution;
		float adjustedRSquaredContribution;  // New field for Adjusted R-squared ADDED
	
	Occurrence *list;
	
};

#endif
