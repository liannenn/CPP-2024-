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
	if (choice >= 1 && choice <= 6)

	{
		if (choice == 1)
		{
			cout << "\nExercise 4-11 - Math Tutor Revision";


		}

		else if (choice == 2)
		{
			cout << "\nExercise 4-17 - Pole Vault Personal Best";

		}


		else if (choice == 3)
		{
			cout << "\nExercise 4-23 - Geometry Calculator";

		}


		else if (choice == 4)
		{
			cout << "\nExercise 4-27 - Wifi Diagnostic";

		}


		else if (choice == 5)
		{
			cout << "\nExercise 4 - 28 - Restaurant Selector";

		}


		else
		{
			cout << "\nThank you for using the Chapter 4 Exercise Menu";
		}

	}

	else
		cout << "\nInvalid input.";
}