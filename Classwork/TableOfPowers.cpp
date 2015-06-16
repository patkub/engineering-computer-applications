// Table of Powers - Patrick Kubiak - 6/8/2015
// Constructs a 2D array of powers.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// definitions
	const int WIDTH = 8;
	const int TABLE_HEIGHT = 5;
	const int TABLE_WIDTH = 8;
	int i, j;
	
	// table header powers
	for (i = 1; i <= TABLE_WIDTH; i++)
	{
		cout << setw(WIDTH) << i;
	}
	cout << endl;

	// table headers x's
	for (i = 1; i <= TABLE_WIDTH; i++)
	{
		if (i == 1)
		{
			cout << setw(WIDTH - 1) << "x";
		}
		else
		{
			cout << setw(WIDTH) << "x";
		}
	}
	cout << endl;

	// divider
	for (i = 0; i < TABLE_WIDTH * WIDTH; i++)
	{
		cout << "-";
	}
	cout << endl;
	
	// table body
	for (i = 1; i <= TABLE_HEIGHT; i++)
	{
		for (j = 1; j <= TABLE_WIDTH; j++)
		{
			cout << setw(WIDTH) << pow(i, j);
		}

		cout << endl;
	}

	system("pause");
	return 0;
}
