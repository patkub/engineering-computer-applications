// Values - Patrick Kubiak - 6/3/2015
// Enter values, Q to quit.

#include <iostream>
using namespace std;

int main()
{
	int value;
	bool more = true;

	cout << "Enter values, Q to quit: " << endl;
	cout << ">";

	while (cin >> value)
	{
		// process value here
		cout << "Accepted: " << value << endl;
		cout << ">";
	}
	cin.clear();	// reset if more input is to be taken	

	system("pause");
	return 0;
}
