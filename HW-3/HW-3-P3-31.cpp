// HW-3-P3-31 Sound Level - Patrick Kubiak - 6/3/2015
// Read a value and unit (dB or Pa) and print description of sound.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	const double P_0 = 20 * pow(10.0, -6);
	double sound, L;
	string strUnit, strDesc;
	
	cout << "Welcome to the Sound Level Program" << endl;
	cout << "Enter a sound (x Pa or x dB): ";
	cin >> sound;
	cin >> strUnit;

	if (cin.fail())		// invalid input
	{
		return 1;
	}

	if (strUnit == "Pa")				// convert Pa to dB
	{
		L = 20 * log10(sound / P_0);	// calculate sound level L in decibels (dB)
	}
	else if (strUnit == "dB")
	{
		L = sound;						// sound is in dB
	}

	if (L >= 130)
	{
		strDesc = "Threshold of pain";
	}
	else if (L >= 120)
	{
		strDesc = "Possible hearing damage";
	}
	else if (L >= 100)
	{
		strDesc = "Jack hammer at 1 m";
	}
	else if (L >= 90)
	{
		strDesc = "Traffic on a busy roadway at 10 m";
	}
	else if (L >= 60)
	{
		strDesc = "Normal conversation";
	}
	else if (L >= 30)
	{
		strDesc = "Calm Library";
	}
	else if (L >= 0)
	{
		strDesc = "Light leaf rustling";
	}
	
	cout << strDesc << endl;

	system("pause");
	return 0;
}
