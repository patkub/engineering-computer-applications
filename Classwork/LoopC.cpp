// Loop C - Patrick Kubiak - 6/1/2015
// Verifies trace table for loop C.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int SPAN_WIDTH = 2;
	int i = 10, j = 0, n = 0;

	cout << "Loop C" << endl;
	while (i > 0)
	{
		i--;
		j++;
		n = n + i - j;

		cout << "i = " << setw(SPAN_WIDTH) << i << " | j = " << setw(SPAN_WIDTH) << j << " | n = " << setw(SPAN_WIDTH) << n << endl;
	}

	system("pause");
	return 0;
}
