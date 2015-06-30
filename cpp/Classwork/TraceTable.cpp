// Trace Table - Patrick Kubiak - 6/1/2015
// Verifies trace table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int SPAN_WIDTH = 4;						// width of numbers
	const int BAR_WIDTH = 3 * SPAN_WIDTH + 22;
	int n, digit;
	int sum = 0;

	cout << "Verify Trace Table" << endl;
	cout << "n = ";
	cin >> n;
	
	for (int i = 0; i < 34; i++)
	{
		cout << "-";
	}
	cout << endl;

	while (n > 0)
	{
		digit = n % 10;
		sum += digit;
		n = n / 10;
		cout << "n = " << setw(SPAN_WIDTH) << n << "| sum = " << setw(SPAN_WIDTH) << sum << "| digit = " << setw(SPAN_WIDTH) << digit << endl;
	}

	for (int i = 0; i < BAR_WIDTH; i++)
	{
		cout << "-";
	}
	cout << endl << "n = " << setw(SPAN_WIDTH) << n << "| sum = " << setw(SPAN_WIDTH) << sum << "| digit = " << setw(SPAN_WIDTH) << digit << endl;
	
	system("pause");
	return 0;
}
