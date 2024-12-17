#include <cstring>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    int menu_choice;
    cout << "Exercise #11 - Lowest Score Drop" << endl;
    cout << "Exercise #15 - Overloaded Hospital" << endl;
    cout << "Exercise #16 - Population" << endl;
    cout << "Exercise #24 - Rock, Paper, Scissors, Lizard, Spock" << endl;

	cout << "6.\tQuit\n";


	//print a line
	cout << "\n--------------------------------------------------\n";

	cout << "\n\Choice: ";
	// get an input from the user
	cin >> menu_choice;

	//print a line
	cout << "\n--------------------------------------------------\n";


	//validate input
	if (menu_choice >= 1 && menu_choice <= 6)

	{
		if (menu_choice == 1)
		{
			cout << "\nExercise 4-11 - Math Tutor Revision";


		}

		else if (menu_choice == 2)
		{
			cout << "\nExercise 4-17 - Pole Vault Personal Best";

		}


		else if (menu_choice == 3)
		{
			cout << "\nExercise 4-23 - Geometry Calculator";

		}


		else if (menu_choice == 4)
		{
			cout << "\nExercise 4-27 - Wifi Diagnostic";

		}


		else if (menu_choice == 5)
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
