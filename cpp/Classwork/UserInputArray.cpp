// User Input Array - Patrick Kubiak - 6/1/2015
// Store user input in an array.

#include <iostream>
using namespace std;

void printArray(double data[], int length);
double arrayMin(double data[], int length);
double arrayMax(double data[], int length);
double arrayRange(double data[], int length);
void copyArray(double data[], double data2[], int length);

bool binSearch(double data[], double num, int length);
bool binSearch(double data[], double num, int startIndex, int endIndex);

int main()
{
	const int SIZE = 100;
	double values[SIZE], value, min, max, range;
	int index = 0;

	cout << "Storage In Array" << endl;
	cout << "Enter value: ";
	
	while (cin >> value)
	{
		if (index < SIZE)
		{
			values[index] = value;
			index++;
		}
	}

	// calculate minimum, maximum, and range
	min = arrayMin(values, index);
	max = arrayMax(values, index);
	range = arrayRange(values, index);

	// display results
	if (index > 0)
	{
		cout << "Minimum: " << min << endl;
		cout << "Maximum: " << max << endl;
		cout << "Range: " << range << endl;
		printArray(values, index);
	}
	else
	{
		cout << "No Data" << endl;
	}	
	
	double data[] = {10, 20, 30, 40, 50, 60, 70, 85, 100};
	cout << endl << "Binary Search" << endl << "Data: ";
	printArray(data, 9);

	bool bFound = binSearch(data, 30, 9);
	if (bFound)
	{
		cout << "SUCCESS Binary search found 30." << endl;
	}
	else
	{
		cout << "ERROR binary search failed to find 30!" << endl;
	}

	bFound = binSearch(data, 2, 9);
	if (bFound)
	{
		cout << "ERROR binary search found non existant 2!" << endl;
	}
	else
	{
		cout << "SUCCESS Binary search did not find non existant 2." << endl;
	}

	system("pause");
}

/*
 * Print out an array.
 *
 * @param data - array to print out of type double
 * @param length - size of array
 */
void printArray(double data[], int length)
{
	if (length > 0)
	{
		for (int i = 0; i < length - 1; i++)
		{
			cout << data[i] << ", ";
		}
		cout << data[length - 1] << endl;
	}
}

/*
 * Find minimum value in array.
 *
 * @param data - array to find minimum value in of type double.
 * @param length - size of array of type integer.
 * @return minimum value in array of type double.
 */
double arrayMin(double data[], int length)
{
	double min = data[0];
	for (int i = 1; i < length; i++)
	{
		if (data[i] < min)
		{
			min = data[i];
		}
	}
	return min;
}

/*
 * Find maximum value in array.
 *
 * @param data - array to find maximum value in of type double.
 * @param length - size of array of type integer.
 * @return maximum value in array of type double.
 */
double arrayMax(double data[], int length)
{
	double max = data[0];
	for (int i = 1; i < length; i++)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
	}
	return max;
}

/*
 * Get the range of the array.
 *
 * @param data - array to get range of of type double.
 * @param length - size of array of type integer.
 * @return range of array of type double.
 */
double arrayRange(double data[], int length)
{
	double min = arrayMin(data, length);
	double max = arrayMax(data, length);
	return max - min;
}

/*
 * Copy data over to data2.
 *
 * @param data - array to copy.
 * @param data2 - array to copy to.
 * @param length - number of elements to copy.
 */
void copyArray(double data[], double data2[], int length)
{
	for (int i = 0; i < length; i++)
	{
		data2[i] = data[i];
	}
}

/*
 * Binary Search
 *
 * @param data - array to search in, must be sorted.
 * @param num - number to find
 * @param length - length of array.
 * @return True if num exists in data, false otherwise.
 */
bool binSearch(double data[], double num, int length)
{
	return binSearch(data, num, 0, length - 1);
}

/*
 * Binary Search
 *
 * @param data - array to search in, must be sorted.
 * @param num - number to find
 * @param startIndex - first value in array.
 * @param endIndex - last value in array.
 * @return True if num exists in data, false otherwise.
 */
bool binSearch(double data[], double num, int startIndex, int endIndex)
{
	if (data[startIndex] == num || data[endIndex] == num)
	{
		return true;
	}

	int midIndex = (int)((endIndex - startIndex) / 2);

	if (startIndex == midIndex || endIndex == midIndex)
	{
		return false;
	}

	double value = data[midIndex];

	if (num < value)
	{
		return binSearch(data, num, 0, midIndex - 1);
	}
	else
	{
		return binSearch(data, num, midIndex + 1, endIndex);
	}

	return false;
}
