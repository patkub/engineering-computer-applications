// Average Salary - Patrick Kubiak - 6/3/2015
// Calculate average of inputs.

#include <iostream>
using namespace std;

int main()
{
	double total = 0;
	int count = 0;
	double input;

	// welcome
	cout << "Average Salary" << endl;
	cout << "Enter Salary (NAN to stop): ";

	while (cin >> input)
	{
		total = total + input;
		count++;
		cout << "Enter Salary (NAN to stop): ";
	}

	double average = 0;
	if (count > 0)
	{
		average = total / count;
	}

	if (count > 0)
	{
		if (count == 1)
		{
			cout << "Average of 1 Salary: " << average << endl;
		}
		else
		{
			cout << "Average of " << count << " Salaries: " << average << endl;
		}
	}
	else
	{
		cout << "No Salaries Entered" << endl;
	}
	
	system("pause");
	return 0;
}
