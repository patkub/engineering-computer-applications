// HW-1-P1-3.cpp : Defines the entry point for the console application.
// P1.3 Greet the user - Patrick Kubiak - 5/20/2015
// Get user's name and greet them.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_name;	// store user name

	// get input
	cout << "Hello, my name is Hal!" << endl;
	cout << "What is your name?" << endl;
	getline(cin, user_name);

	// process
	cout << "Hello, " << user_name << ". I'm glad to meet you!";
	cin.get();			// pause
	return 0;
}
