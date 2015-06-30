// HW-4-4-8 Data Statistics - Patrick Kubiak - 6/3/2015
// Reading floating point-values and display average, smallest, largest, and range of the dataset.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int OUTPUT_WIDTH = 12;
	double num, total = 0, smallest, largest;
	int count = 0;

	// welcome
	cout << "Data Statistics" << endl;
	cout << "Enter Values (NAN to stop): ";

	while (cin >> num)
	{
		count++;						// increment number of values
		total += num;					// update total

		if (count == 1)					// first value is both smallest and largest
		{
			smallest = num;
			largest = num;
		}
		
		if (count > 1)
		{
			if (num < smallest)			// num is new smallest
			{
				smallest = num;
			}
			else if (num > largest)		// num is new largest
			{
				largest = num;
			}
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
