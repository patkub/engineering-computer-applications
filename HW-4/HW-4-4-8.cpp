// HW-4-4-8 Data Statistics - Patrick Kubiak - 6/3/2015
// Reading floating point-values and display average, smallest, largest, and range of the dataset.

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	const int OUTPUT_WIDTH = 12;
	double num, total = 0, smallest, largest;
	int count = 0;

	smallest = numeric_limits<double>::max();	// set smallest to the largest possible double
	largest = -numeric_limits<double>::max();	// set largest to the smallest possible double

	// welcome
	cout << "Data Statistics" << endl;
	cout << "Enter Values (NAN to stop): ";

	while (cin >> num)
	{
		count++;								// increment number of values
		total += num;							// update total

		if (count < 1 || num < smallest)		// first value or smallest
		{
			smallest = num;
		}
		else if (count < 1 || num > largest)	// first value or largest
		{
			largest = num;
		}

		cout << "Enter Values (NAN to stop): ";
	}

	// analysis of data
	double average = total / count;
	double range = largest - smallest;

	setprecision(5);
	cout << "Analysis of Data" << endl;
	cout << setw(OUTPUT_WIDTH) << "Average: " << average << endl;
	cout << setw(OUTPUT_WIDTH) << "Smallest: " << smallest << endl;
	cout << setw(OUTPUT_WIDTH) << "Largest: " << largest << endl;
	cout << setw(OUTPUT_WIDTH) << "Range: " << range << endl;

	system("pause");
	return 0;
}
