// Price Per Once - Patrick Kubiak - 5/27/2015
// Example of precision.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double price_per_once_1 = 10.2372;
	const double price_per_once_2 = 117.2;
	const double price_per_once_3 = 6.9923435;

	cout << fixed << setprecision(2);
	cout << setw(8) << price_per_once_1 << endl;
	cout << setw(8) << price_per_once_2 << endl;
	cout << setw(8) << price_per_once_3 << endl;
	cout << "--------" << endl;

	cin.get();
	return 0;
}
