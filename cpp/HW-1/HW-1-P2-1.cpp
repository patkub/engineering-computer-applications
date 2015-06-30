// HW-1-P2-1.cpp : Defines the entry point for the console application.
// P2.1 Paper Dimensions - Patrick Kubiak - 5/20/2015
// Display the dimensions of a letter-size (8.5 x 11 in) sheet of paper in millimeters.

#include <iostream>

using namespace std;

const double LETTER_SHEET_LENGTH_IN = 8.5;	// length of letter sheet in inches
const double LETTER_SHEET_WIDTH_IN = 11;	// width of letter sheet in inches
const double MM_PER_IN = 25.4;				// millimeters in an inch

int main()
{
	double lengthOfSheetMM = LETTER_SHEET_LENGTH_IN * MM_PER_IN;	// calculate length in millimeters
	double widthOfSheetMM = LETTER_SHEET_WIDTH_IN * MM_PER_IN;		// calculate width in millimeters

	// display output
	cout << "Letter-Size Sheet of Paper (8.5 in by 11 in)" << endl;
	cout << "Size in millimeters: " << lengthOfSheetMM << " mm by " << widthOfSheetMM << " mm" <<endl;
	
	system("pause");
	return 0;
}
