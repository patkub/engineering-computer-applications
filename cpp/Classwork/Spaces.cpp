// Spaces - Patrick Kubiak - 6/3/2015
// Determine number of spaces in a string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int spaces = 0;
	
	// welcome
	cout << "Count Spaces" << endl;
	cout << "> ";
	
	getline(cin, input);

	// count spaces
	for (int i = 0; i < (int)input.length(); i++)
	{
		string ch = input.substr(i, 1);
		if (ch == " ")
		{
			spaces++;
		}
	}
	
	// find index of first space
	bool found = false;
	int pos = 0;

	while (!found && pos < (int)input.length())
	{
		string ch = input.substr(pos, 1);
		if (ch == " ")
		{
			found = true;
		}
		else
		{
			pos++;
		}
	}

	cout << "Index of First Space: " << pos << endl;	
	cout << "Number of spaces: " << spaces << endl;
	system("pause");
	return 0;
}
