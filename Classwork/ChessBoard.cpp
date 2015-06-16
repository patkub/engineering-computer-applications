// Chess Board - Patrick Kubiak - 5/27/2015
// Determines color of a square on a chessboard given its coordinates.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string letter, color;
	int pos;

	cout << "Chess Board" << endl;
	cout << "Enter letter and number: " << endl;
	cin >> letter;
	cin >> pos;
	
	if (letter == "a" || letter == "c" || letter == "e" || letter == "g")
	{
		if (pos % 2 != 0) // odd
		{
			color = "black";
		}
		else
		{
			color = "white";
		}
	}
	else if (letter == "b" || letter == "d" || letter == "f" || letter == "h")
	{
		if (pos % 2 == 0) // even
		{
			color = "black";
		}
		else
		{
			color = "white";
		}
	}
	
	cout << color << endl;

	system("pause");
	return 0;
}
