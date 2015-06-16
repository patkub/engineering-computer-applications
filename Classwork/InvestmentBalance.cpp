// Investment Balance - Patrick Kubiak - 6/3/2015
// Display balance of an investment at the end of each year.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double balance, interest;
	int years = 0;

	// welcome
	cout << "Investment Problem" << endl;

	cout << "Starting balance: ";
	cin >> balance;

	cout << "Interest: ";
	cin >> interest;

	cout << "Years: ";
	cin >> years;
	
	cout << fixed << setprecision(2);
	cout << setw(4) << "Year" << setw(15) << "Balance" << endl;
	for (int i = 1; i <= years; i++)
	{
		balance += balance * interest;
		cout << setw(4) << i << setw(15) << balance << endl;
	}

	system("pause");
	return 0;
}
