// Hello World - Patrick Kubiak - 5/20/2015
// First program.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Hello, World!" << endl;
	cout << "6 * 7 = " << 6 * 7 << endl;
	cout << "7 % 2 = " << 7 % 2 << endl;
	cout << "7 / 3 = " << 7.0 / 3 << endl;
	cout << "2^3 = " << pow(2.0, 3.0) << endl;

	int num1 = 0, num2 = 0, num3 = 0;
	double average = 0;

	cout << "num 1: " << endl;
	cin >> num1;
	cout << "num 2: " << endl;
	cin >> num2;
	cout << "num 3: " << endl;
	cin >> num3;

	average = (num1 + num2 + num3) / 3.0;
	cout << "Your average score is ";
	cout << average << endl;

	double s = 0, g = 9.8;
	int s_0 = 0, v_0 = 0, t = 0;
	cout << "S" << endl;
	cout << "Please enter the values:" << endl;
	cout << "s_0 = " << endl;
	cin >> s_0;
	cout << "v_0 = " << endl;
	cin >> v_0;
	cout << "t = " << endl;
	cin >> t;
	s = s_0 + (v_0 * t) + (1 / 2) * g * pow(t, 2.0);
	cout << "s = " << s << endl;

	double bigG = 0;
	int a = 0, p = 0, m1 = 0, m2 = 0;
	cout << "G" << endl;
	cout << "Please enter the values:" << endl;
	cout << "a = " << endl;
	cin >> a;
	cout << "p = " << endl;
	cin >> p;
	cout << "m1 = " << endl;
	cin >> m1;
	cout << "m2 = " << endl;
	cin >> m2;
	bigG = (4 * pow(3.1415926535, 2.0)) * (pow(a, 3.0) / (pow(p, 2.0) * (m1 + m2)));
	cout << "G = " << bigG << endl;

	system("pause");
	cin.get(); // or system("pause");
	return 0;
}
