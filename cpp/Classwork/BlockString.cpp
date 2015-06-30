// Block String - Patrick Kubiak - 6/8/2015
// Put your text in a block!

#include <iostream>
#include <string>
using namespace std;

void blockString(string str);

int main()
{
	// input
	string strInput;
	cout << "Block Text - Put your text in a block!" << endl;
	cout << "Text: ";
	getline(cin, strInput);

	// output
	blockString(strInput);
	system("pause");
	return 0;
}

void blockString(string str)
{
	unsigned int i;		// string length is an unsigned integer, lets have i match that

	// top dashes
	for (i = 0; i < str.length() + 2; i++)
	{
		cout << "-";
	}
	cout << endl;

	// text
	cout << "!" << str << "!" << endl;

	// bottom dashes
	for (i = 0; i < str.length() + 2; i++)
	{
		cout << "-";
	}
	cout << endl;
}
