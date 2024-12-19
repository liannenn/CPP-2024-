#include <cstring>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    int menu_choice;
    cout << "1.\tExercise #11 - Lowest Score Drop" << endl;
    cout << "2.\tExercise #15 - Overloaded Hospital" << endl;
    cout << "3.\tExercise #16 - Population" << endl;
    cout << "4.\tExercise #24 - Rock, Paper, Scissors, Lizard, Spock" << endl;

	cout << "5.\tQuit\n";


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
			cout << "\nExercise 6-11, Lowest Score Drop";

			void getScore();
			void calcAverage();
			int findLowest();
		}

		else if (menu_choice == 2)
		{
			cout << "\nExercise 6-15, Overloaded Hospital";


			void overloaded_hospital();
		}


		else if (menu_choice == 3)
		{
			cout << "\nExercise 6-16, Population";


			void population();
		}


		else if (menu_choice == 4)
		{
			cout << "\nExercise 6-24, Rock, Paper, Scissors, Lizard, Spock";

			void game();
		}

		else
		{
			cout << "\nThank you for using the Chapter 6 Exercise Menu";
		}

	}

	else
		cout << "\nInvalid input.";

}

void lowest_score_drop()
{

}