// HW-2-P2-26 - Patrick Kubiak - 5/27/2015
// Converts thermistor resistance to liquid temperature in degrees C.

#include <iostream>
using namespace std;

const int E = 2.7182818284;

int main()
{
	// definitions
	const double C_TO_K = 273.0;			// convert temp from C to K
	const double R_0 = 1075.0;				// temp in C
	const double T_0 = 85.0;				// temp in C
	const double B = 3969.0;				// temp in K
	const double T_0_K = T_0 + C_TO_K;		// T_0 in K
	
	// input
	double R;
	cout << "Thermistor Resistance" << endl;
	cout << "R = ";
	cin >> R;

	// T = (B * T_0_K) / (T_0_K * ln(R / R_0) + B) - 273
	double T = ((B * T_0_K) / (T_0_K * log(R / R_0) + B)) - 273;	// log() is base-e log, aka ln()

	// output
	cout << "T = " << T << endl;
	system("pause");
	return 0;
}
