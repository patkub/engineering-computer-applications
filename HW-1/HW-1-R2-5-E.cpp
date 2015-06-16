// HW-1-R2-5-E.cpp : Defines the entry point for the console application.
// R2.5 Part E Expressions - Patrick Kubiak - 5/20/2015
// Evaluate math expressions.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x = 2.5;
	double y = -1.5;
	int m = 18;
	int n = 4;

	double resultA = x + n * y - (x + n) * y;
	double resultB = m / n + m % n;
	double resultC = 5 * x - n / 5;
	double resultD = 1 - (1 - (1 - (1 - (1 - n))));

	double resultE = double(sqrt(double(n)));
	resultE = double(sqrt(double(resultE)));

	cout << "x = " << x << " y = " << y << " m = " << m << " n = " << n << endl;
	cout << "Result A: " << resultA << endl;
	cout << "Result B: " << resultB << endl;
	cout << "Result C: " << resultC << endl;
	cout << "Result D: " << resultD << endl;
	cout << "Result E: " << resultE << endl;

	system("pause");
	return 0;
}
