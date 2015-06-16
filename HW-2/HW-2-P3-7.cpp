//Chess Board - Patrick Kubiak - 5/27/2015
//Determines color of a square on a chessboard given its coordinates.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// declarations
	string color;
	char letter;
	int pos;

	// get input
	cout << "Chess Board" << endl;
	cout << "Enter letter and number: ";
	cin >> letter;
	cin >> pos;

	letter = toupper(letter);	// convert letter to uppercase
	
	if (letter == 'A' || letter == 'C' || letter == 'E' || letter == 'G')
	{
		if (pos % 2 != 0)		// odd
		{
			color = "black";
		}
		else
		{
			color = "white";
		}
	}
	else
	{
		if (pos % 2 == 0)		// even
		{
			color = "black";
		}
		else
		{
			color = "white";
		}
	}
	
	cout << "Color: " + color << endl;

	system("pause");
	return 0;
}
