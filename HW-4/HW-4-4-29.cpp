// HW-4-4-29 Projectile Flight - Patrick Kubiak - 6/3/2015
// Simulate projectile flight.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double DELTA_T = 0.01;
	const double g = 9.81;
	double t = 0, s = 0, v = 0, v_0 = 0, millis = 0, exact = 0;
	double seconds = 0;
	
	cout << "Projectile Flight" << endl;
	cout << "Initial Velocity: ";
	cin >> v_0;

	v = v_0;	// velocity is initial velocity

	while(s >= 0)
	{
		// calculate simulation
		s = s + v * DELTA_T;
		v = v - g * DELTA_T;
		
		if (millis == 100)
		{
			// update seconds
			seconds++;
			millis = 0;

			// calculate exact position
			exact = (-0.5) * g * pow(seconds, 2) + v_0 * seconds;
			
			// display
			cout << "Position: " << s << endl;
			cout << "Exact Position: " << exact << endl;
		}
		
		millis++;
	}

	system("pause");
	return 0;
}
