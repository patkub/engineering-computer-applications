// XY - Patrick Kubiak - 5/27/2015
// XY compared with if statements.

#include <iostream>
using namespace std;

int main()
{
	double x, y;

	cout << "If X > 0, then Y = X, else Y = 0" << endl;
	cout << "Enter values for X and Y: ";
	cin >> x >> y;

	if (x > 0)
	{
		y = x;
	}
	else
	{
		y = 0;
	}

	cout << "X = " << x << " Y = " << y << endl;

	cout << "Y = abs(x) using if statement" << endl;
	cout << "X: ";
	cin >> x;

	if (x < 0)
	{
		y = -x;
	}
	else
	{
		y = x;
	}

	cout << "X = " << x << " Y = " << y << endl;

	system("pause");
	return 0;
}
