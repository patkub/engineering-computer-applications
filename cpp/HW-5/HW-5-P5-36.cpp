// HW-5-P5-36 Drag Force - Patrick Kubiak - 6/8/2015
// Given a car's velocity compute the power in watts and in horsepower needed to overcome the resulting drag force.

#include <iostream>
#include <cmath>
using namespace std;

double getDragForce(double velocity);
double dragForceToWatts(double dragForce, double velocity);
double wattsToHP(double watts);

int main()
{
	double velocity, dragForce, powerInWatts, powerInHorsepower;
	
	// input
	cout << "Welcome to the Drag Force Program!" << endl;
	cout << "Enter the car's velocity: ";
	cin >> velocity;

	// calculations
	dragForce = getDragForce(velocity);						// get drag force
	powerInWatts = dragForceToWatts(dragForce, velocity);	// get power of drag force in watts
	powerInHorsepower = wattsToHP(powerInWatts);			// convert power to horsepower

	// output
	cout << "Power in watts: " << powerInWatts << endl;
	cout << "Power in horsepower: " << powerInHorsepower << endl;

	system("pause");
	return 0;
}

/*
 * Get a car's drag force given its velocity.
 *
 * @param velocity - car's velocity of type double.
 * @return car's drag force.
 */
double getDragForce(double velocity)
{
	const double p = 1.23;		// density of air (1.23 kg/m^3)
	const double A = 2.5;		// projected area of car (2.5 m^2)
	const double C_D = 0.2;		// drag coefficient

	double dragForce = 0.5 * p * pow(velocity, 2) * A * C_D;
	return dragForce;
}

/*
 * Get the power needed to overcome the drag force in watts.
 *
 * @param dragForce - car's dragForce.
 * @return power to overcome drag force in watts.
 */
double dragForceToWatts(double dragForce, double velocity)
{
	return dragForce * velocity;
}

/*
 * Convert watts to horsepower.
 *
 * @param watts - double amount of watts to convert.
 * @return amount of horsepower.
 */
double wattsToHP(double watts)
{
	return watts / 746.0;
}
