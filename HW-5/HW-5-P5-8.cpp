// HW-5-P5-8 Count Vowels - Patrick Kubiak - 6/8/2015
// Counts all vowels (a, e, i, o, u, and uppercase variants) in a string.

#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

int count_vowels(string str);
int count_vowels_recursion(string str);
int count_vowels_recursion(string str, int count);

int main()
{
	string strPhrase;
	int vowels;
	double time;

	// input
	cout << "Welcome to the Count Vowels Program!" << endl;
	cout << "Enter a phrase: ";
	cin >> strPhrase;

	// count vowels iteratively
	clock_t start = clock();										// start time
	vowels = count_vowels(strPhrase);
	cout << "Number of vowels (iteration): " << vowels << endl;
	clock_t end = clock();											// end time
	time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);			// time elapsed
	cout << "Time Elapsed: " << time << " ms" << endl;

	// count vowels recursively
	start = clock();												// start time
	vowels = count_vowels_recursion(strPhrase);
	cout << "Number of vowels (recursion): " << vowels << endl;
	end = clock();													// end time
	time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);			// time elapsed
	cout << "Time Elapsed: " << time << " ms" << endl;

	system("pause");
	return 0;
}

/*
 * Count Vowels - count the number of vowels in a string iteratively.
 * @param str - string to count vowels in.
 * @return integer number of vowels in str.
 */
int count_vowels(string str)
{
	int count = 0;
	transform(str.begin(), str.end(), str.begin(), toupper);	// convert str to uppercase

	for (int i = 0; i < str.length(); i++)
	{
		if (str.substr(i, 1) == "A" || str.substr(i, 1) == "E" || str.substr(i, 1) == "I" || str.substr(i, 1) == "O" || str.substr(i, 1) == "U")
		{
			count++;
		}
	}

	return count;
}

/*
 * Count Vowels - count the number of vowels in a string recursively.
 * @param str - string to count vowels in.
 * @return integer number of vowels in str.
 */
int count_vowels_recursion(string str)
{
	transform(str.begin(), str.end(), str.begin(), toupper);	// convert str to uppercase
	return count_vowels_recursion(str, 0);
}

/*
 * Count Vowels - count the number of vowels in a string recursively.
 * @param str - string to count vowels in.
 * @param count - integer number of vowels counted so far.
 * @return integer number of vowels in str.
 */
int count_vowels_recursion(string str, int count)
{
	if (str.length() >= 1)
	{
		string first = str.substr(0, 1);

		if (first == "A" || first == "E" || first == "I" || first == "O" || first == "U")
		{
			count++;
		}

		str = str.substr(1, str.length() - 1);
		return count_vowels_recursion(str, count);
	}

	return count;
}
