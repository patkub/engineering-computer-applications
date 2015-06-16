// Elevator - Patrick Kubiak - 5/27/2015
// There is no floor 13.

#include <iostream>
using namespace std;

int main()
{
	int floor, actualFloor;
	cout << "Elevator" << endl << "Enter the floor: " << endl;
	cin >> floor;

	if (floor > 13)
	{
		actualFloor = floor - 1;
	}
	else
	{
		actualFloor = floor;
	}

	cout << "Actual Floor: " << actualFloor << endl;
	system("pause");
	return 0;
}
