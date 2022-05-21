// testing.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

int a, b = 5; // single line comment

/* Multi
* line
* comment */

int main() {
	bool my_flag;
	a = 7;
	my_flag = false;
	cout << "a = " << a << endl;
	cout << "flag = " << my_flag << endl;
	my_flag = true;
	cout << "flag = " << my_flag << endl;
	cout << "a+b = " << a + b << endl;
	cout << "b-a = " << b - a << endl;
	unsigned int positive;
	positive = b - a;
	cout << "b-a (unsigned) = " << positive << endl;

	string str;
	cout << "What is your name? ";
	cin >> str;
	cout << "Hello " << str << endl;
	return(0);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
