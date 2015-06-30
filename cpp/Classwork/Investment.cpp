// Investment - Patrick Kubiak - 6/1/2015
// Calculate simple interest.

#include <iostream>
using namespace std;

int main()
{
	// definitions
	double startBalance, endBalance, interest;
	int years = 0;

	// welcome
	cout << "Investment Problem" << endl;

	cout << "Starting balance: ";
	cin >> startBalance;

	cout << "Ending balance: ";
	cin >> endBalance;

	cout << "Interest: ";
	cin >> interest;
	
	// calculations
	while (startBalance <= endBalance)
	{
		startBalance += startBalance * interest;
		years++;
	}

	// output
	cout << "Years: " << years << endl;
	system("pause");
	return 0;
}
