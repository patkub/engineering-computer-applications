// HW-3-P4-9 Minimum Value - Patrick Kubiak - 6/3/2015
// Find the minimum value from a set of inputs.

#include <iostream>
using namespace std;

void prompt(int &value);

int main()
{
	int value, minimum;
	bool bFirst = true, bFailed = false;
	
	cout << "Welcome to the Minimum Value Program" << endl;
	prompt(value);

	if (cin.fail())					// initial prompt check
	{
		bFailed = true;
	}

	while (!cin.fail())				// another value has been successfully read
	{
		if (bFirst)					// first is true
		{
			minimum = value;		// set minimum to value
			bFirst = false;			// set first to false
		}
		else if (value < minimum)	// value is less than minimum
		{
			minimum = value;		// set minimum to value
		}

		prompt(value);
	}

	// print output and exit
	if (!bFailed)
	{
		cout << "Minimum: " << minimum << endl;
	}
	system("pause");
	return 0;
}

/*
 * Prompt the user for a value and store it in the reference variable val.
 */
void prompt(int &val)
{
	cout << "Enter a value (or anything else to stop): ";
	cin >> val;
}
