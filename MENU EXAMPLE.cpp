#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	//initiate variable choice for the menu
	int choice;

	cout << "Welcome to the Chapter 4 Exercise Menu\n";
	cout << "Please choose from the following choices: \n\n";
	cout << "1.\tExercise 4-11 - Math Tutor Revision\n";
	cout << "2.\tExercise 4-17 - Pole Vault Personal Best\n";
	cout << "3.\tExercise 4-23 - Geometry Calculator\n";
	cout << "4.\tExercise 4-27 - Wifi Diagnostic\n";
	cout << "5.\tExercise 4-28 - Restaurant Selector\n";

	cout << "6.\tQuit\n";


	//print a line
	cout << "\n--------------------------------------------------\n";

	cout << "\n\Choice: ";
	// get an input from the user
	cin >> choice;

	//print a line
	cout << "\n--------------------------------------------------\n";


	//validate input
	switch (choice)

	{
		//Program 4-11 - Math Tutor Revision
		case 1:
		{
			cout << "\nExercise 4-11 - Math Tutor Revision";

			cout << "\n--------------------------------------------------\n";
		}
		
		break;

		//Program 4-17 - Pole Vault Personal Best
		case 2:
		{
			cout << "\nExercise 4-17 - Pole Vault Personal Best";

			cout << "\n--------------------------------------------------\n";
		
		}
		break;

		//Program 4-23 - Geometry Calculator
		case 3:
		{
			cout << "\nExercise 4-23 - Geometry Calculator";

			cout << "\n--------------------------------------------------\n";
		
		}
		break;

		//Program 4-27 - Wifi Diagnostic
		case 4:
		{
			cout << "\nExercise 4-27 - Wifi Diagnostic";

			cout << "\n--------------------------------------------------\n";
		
		}
		break;

		//Program 4-28 - Restaurant Selector
		case 5:
		{
			cout << "\nExercise 4-28 - Restaurant Selector";

			cout << "\n--------------------------------------------------\n";
		}
		break;

		//print invalid choice when an invalid input is added
		default: << cout >> "Invalid choice.";
	}

	
}