// Richter Scale - Patrick Kubiak - 5/27/2015
// Description of Richter Scale.

#include <iostream>
using namespace std;

int main()
{
	double richter;
	cout << "Enter Richter scale: " << endl;
	cin >> richter;

	if (richter >= 8.0)
	{
		cout << "Most structures fall." << endl;
	}
	else if (richter >= 7.0)
	{
		cout << "Many buildings destroyed." << endl;
	}
	else if (richter >= 6.0)
	{
		cout << "Many buildings considerably damaged, some collapse." << endl;
	}
	else if (richter >= 4.5)
	{
		cout << "Damage to poorly constructed buildings." << endl;
	}
	else
	{
		cout << "Minor damage." << endl;
	}
	
	system("pause");
	return 0;
}
