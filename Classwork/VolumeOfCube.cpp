// Volume Of Cube - Patrick Kubiak - 6/8/2015
// Compute the volume of a cube using a recursive power function.

#include <iostream>
using namespace std;

double cubeVolume(double sideLength);
double power(double x, double y);

int main()
{
	double x, y, side, volume;
	cout << "Functions!" << endl;

	// power
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;
	cout << x << " ^ " << y << " = " << power(x, y) << endl;
	
	// volume
	cout << "Side length of Cube: ";
	cin >> side;
	volume = cubeVolume(side);
	cout << "The volume of the cube is: " << volume << endl;

	system("pause");
	return 0;
}


/*
 * Calculate the volume of a cube.
 * 
 * @param sideLength - length of side of type double.
 * @return double volume of cube.
 */
double cubeVolume(double sideLength)
{
	if (sideLength <= 0) return 0;
	return power(sideLength, 3);
}

/*
 * Recursively compute x to the power of y.
 * 
 * @param x - value 1 of type double.
 * @param y - value 2 of type double.
 * @return double x to the power of y.
 */
double power(double x, double y)
{
	if (y > 0) return x * power(x, y - 1);
	return 1;
}
