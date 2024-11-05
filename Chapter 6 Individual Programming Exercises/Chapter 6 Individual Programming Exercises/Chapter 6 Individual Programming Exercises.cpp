// Chapter 6 Individual Programming Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <string>
#include <iostream>

using namespace std;
int main()
{

	int menu_choice;
	cout << "Chapter 6 Individual Programming Exercise Menu" << endl;
	cout << "\n------------------------------------------------------------\n\n";
	cout << "1) 6.11 - Lowest Score Drop" << endl;
	cout << "2) 6.15 - Overloaded Hospital" << endl;
	cout << "3) 6.16 - Population" << endl;
	cout << "4) 6.24 - Rock, Paper, Scissors, Lizard, Spock" << endl;
	cout << "\n------------------------------------------------------------\n\n";
	cout << "Option : ";
	cin >> menu_choice;

	do
	{
		cout << "Invalid option, please pick a new choice." << endl;
		cout << "Option : ";
		cin >> menu_choice;
	} while (menu_choice < 1 || menu_choice > 4);




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
