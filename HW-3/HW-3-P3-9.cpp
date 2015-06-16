// HW-3-P3-9 Grade - Patrick Kubiak - 6/3/2015
// Convert letter grade to numeric grade. (A = 4, B = 3, C = 2, D = 1, F = 0)
// Grades except F can be followed by a + or -. A + increases numeric value by 0.3, and a - decreases numeric value by 0.3.
// A+ has a value of 4.0

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strGrade;
	double gradeValue = 0.0;
	const double PLUS_MINUS_DELTA = 0.3;

	cout << "Welcome to the Letter Grade to Numeric Grade Converter" << endl;
	cout << "Enter a letter grade: ";
	cin >> strGrade;
	
	if (!cin.fail())	// validate input
	{
		string strLetter = strGrade.substr(0, 1);

		if (strLetter == "A")
		{
			gradeValue += 4;
		}
		else if (strLetter == "B")
		{
			gradeValue += 3;
		}
		else if (strLetter == "C")
		{
			gradeValue += 2;
		}
		else if (strLetter == "D")
		{
			gradeValue += 1;
		}
		else if (strLetter == "F")
		{
			gradeValue += 0;
		}

		if (strGrade.length() > 1)
		{
			string strDelta = strGrade.substr(1, 1);

			if (strDelta == "+" && strLetter != "A")
			{
				gradeValue += PLUS_MINUS_DELTA;
			}
			else if (strDelta == "-")
			{
				gradeValue -= PLUS_MINUS_DELTA;
			}
		}
	}

	cout << "The numeric value is " << gradeValue << "." << endl;
	system("pause");
	return 0;
}
