// 1 to 10 - Patrick Kubiak - 6/3/2015
// Print values 1 to 10 on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NAME_WIDTH = 15;

	cout << setw(NAME_WIDTH) << "While Loop: ";
	int value = 1;

	while (value <= 10)
	{
		cout << value << " ";
		value++;
	}
	cout << endl;

	cout << setw(NAME_WIDTH) << "Do While Loop: ";
	value = 1;
	do
	{
		cout << value << " ";
		value++;
	} while (value <= 10);
	cout << endl;
	
	cout << setw(NAME_WIDTH) << "For Loop: ";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
