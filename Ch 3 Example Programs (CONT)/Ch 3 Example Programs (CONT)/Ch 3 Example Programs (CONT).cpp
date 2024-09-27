// Ch 3 Example Programs (CONT).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	//Program 3-18
		//accepts no arguments
		//takes input from the user in the form of first and last name and the city they live in and outputs a summary

		//define variables
		string name, city;

		//take input from the user
		cout << "Enter your first and last name: ";
		getline(cin, name);
		cout << "Enter the city you live in: ";
		getline(cin, city);

		//print summary
		cout << "Hello, " << name << endl;
		cout << "You live in " << city << endl;

//Program 3-21
		//accepts no arguments
		//demonstrate three ways to use cin.get() to pause a program

		char ch;

		cout << "The program has paused once...  Press enter to move on.";
		cin.get(ch);

		cout << "The program has paused a second time... Press Enter again to move on.";
		ch = cin.get();
		cout << "The program has paused a third time... Press Enter again to end the program.";

//Program 3-22
	//accepts no arguments
	//demonstrates problems with mixing the use of cin and cin.get()
/*
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "\nThe program has terminated. Thank you!\n";
*/

//Program 3-23
	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "\nThe program has terminated. Thank you!\n";


}