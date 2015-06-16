// HW-5-P5-3 Smallest & Average Functions - Patrick Kubiak - 6/8/2015
// Implements and tests the smallest and average functions.

#include <iostream>
using namespace std;

double smallest(double x, double y, double z);
double average(double x, double y, double z);

int main()
{
	double x, y, z, smallestValue, averageValue;

	// input
	cout << "Welcome to the Smallest & Average Functions Program!" << endl;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;
	cout << "Z = ";
	cin >> z;

	// calculations
	smallestValue = smallest(x, y, z);
	averageValue = average(x, y, z);

	// output
	cout << "Smallest Value = " << smallestValue << endl;
	cout << "Average = " << averageValue << endl;
	system("pause");
	return 0;
}

/*
 * Smallest - determine the smallest value from 3 inputs.
 * @param x - first value of type double.
 * @param y - second value of type double.
 * @param z - third value of type double.
 * @return smallest value of type double.
 */
double smallest(double x, double y, double z)
{
	double smallest = x;
	if (y < smallest)
		smallest = y;
	if (z < smallest)
		smallest = z;
	return smallest;
}

/*
 * Average - calculate the average of three inputs.
 * @param x - first value of type double.
 * @param y - second value of type double.
 * @param z - third value of type double.
 * @return average value of type double.
 */
double average(double x, double y, double z)
{
	return (x + y + z) / 3.0;
}
