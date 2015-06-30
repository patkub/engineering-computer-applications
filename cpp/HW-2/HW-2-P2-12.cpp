// HW-2-P2-12 - Patrick Kubiak - 5/27/2015
// Format a ten-digit phone number.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phoneNum, phoneNumFormatted;
	
	cout << "Enter the phone number: " << endl;
	getline(cin, phoneNum);		// get phone number

	// format number from 4155551212 to (415) 555-1212

	// surround area code by parenthesis
	phoneNumFormatted += "(";
	phoneNumFormatted += phoneNum.substr(0, 3);
	phoneNumFormatted += ") ";

	// split the rest of the number with a hyphen after the next 3 digits
	phoneNumFormatted += phoneNum.substr(3, 3);						// get next 3 digits
	phoneNumFormatted += "-";										// append a hyphen
	phoneNumFormatted += phoneNum.substr(6, phoneNum.length());		// append the last digits

	// output
	cout << phoneNumFormatted << endl;
	system("pause");
	return 0;
}
