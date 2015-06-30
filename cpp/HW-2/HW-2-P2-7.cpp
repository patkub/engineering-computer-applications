// HW-2-P2-7 - Patrick Kubiak - 5/27/2015
// Prompt user for a radius and print the area and circumference of a circle with that radius, and
// the volume and surface area of a sphere with that radius. Format the output at the decimal point.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int FORMAT_VOLUME_WIDTH = 18;						// offset for width
	const double PI = 4 * atan(1.0);
	double radius;

	// welcome
	cout << "Circle and Sphere Radius" << endl;
	cout << "Enter a raduis: ";
	cin >> radius;

	double area = PI * pow(radius, 2);						// area = pi*r^2
	double circumference = 2 * PI * radius;					// circumference = 2*pi*r
	double SA = 4 * PI * pow(radius, 2);					// surface area = 4*pi*r^2
	double volume = (4.0 / 3.0) * PI * pow(radius, 3.0);	// volume = (4/3)*pi*r^3

	// set output precision to 3 decimal places
	cout << fixed << setprecision(3);

	// display results aligned at decimal point
	cout << endl << "Circle" << endl;
	cout << "Area: " << setw(FORMAT_VOLUME_WIDTH) << area << endl;
	cout << "Circumference: " << setw(FORMAT_VOLUME_WIDTH - 9) << circumference << endl << endl;

	cout << "Sphere" << endl;
	cout << "Volume: " << setw(FORMAT_VOLUME_WIDTH - 2) << volume << endl;
	cout << "Surface Area: " << setw(FORMAT_VOLUME_WIDTH - 8) << SA << endl;

	system("pause");
	return 0;
}
