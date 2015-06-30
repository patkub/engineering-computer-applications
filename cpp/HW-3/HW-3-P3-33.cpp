// HW-3-P3-33 Alarm - Patrick Kubiak - 6/3/2015
// Prompts user for a temperature in degrees F and determines if the alarm will sound.

#include <iostream>
#include <cmath>
using namespace std;

const int e = 2.7182818284;

int main()
{
	// definitions
	const double C_TO_K = 273.0;			// convert temp from C to K
	const double R_0 = 33192.0;				// initial resistance in Ohm's
	const double T_0_C = 40.0;				// initial temperature C
	const double T_0_K = T_0_C + C_TO_K;	// initial temperature K
	const double B = 3310.0;				// material of thermistor
	const double R_2 = 156300.0;			// resistance in Ohm's
	const double R_3 = 156300.0;			// resistance in Ohm's
	const double R_4 = 156300.0;			// resistance in Ohm's

	double T;
	
	cout << "Welcome to the Alarm Program" << endl;
	cout << "Enter the temperature (in degrees fahrenheit): ";
	cin >> T;

	// convert temperature from fahrenheit to kelvin
	T = (5.0 / 9.0) * (T - 32.0);			// convert T from fahrenheit to celsius
	T += C_TO_K;							// convert T from celsius to kelvin
	
	double exponent = B * ((1 / T) - (1 / T_0_K));
	double R = R_0 * pow(e, exponent);

	double left = R_2 / (R + R_2);
	double right = R_4 / (R_3 + R_4);

	if (left < right)
	{
		cout << "Alarm will sound." << endl;
	}
	else
	{
		cout << "Alarm will not sound." << endl;
	}

	system("pause");
	return 0;
}
