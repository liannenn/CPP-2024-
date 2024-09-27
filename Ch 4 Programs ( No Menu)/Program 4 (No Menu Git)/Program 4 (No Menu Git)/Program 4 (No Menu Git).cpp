#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

int main()

{
	//Exercise #11 - Math Tutor Revision:
		//write a program can be used as a tutor for a young student

		//create variables
	double number_1, number_2, total, inp_answer;
	const int maxValue = 500, minValue = 0; //create a constant to make a range for the number
	char ch; //define a char variable to take an input to reveal your answer

	//system time
	unsigned seed = time(0);

	//create a randomized number 
	number_1 = (rand() % (maxValue - minValue) + 1) + minValue;
	number_2 = (rand() % (maxValue - minValue) + 1) + minValue;

	//calculate the total of the two randomized numbers
	total = number_1 + number_2;

	//print the equation
	cout << setw(5) << number_1 << endl << "+ " << number_2 << endl << "------";

	//ask for their answer to the equation and store it into inp_answer
	cout << "\n  ";
	cin >> inp_answer;

	//triggers if the user's input is correct
	//print a congratulatory message
	if (inp_answer == total)
	{
		cout << "Congratulations! Your answer of " << inp_answer << " was correct!";
	}

	//triggers an else if the user's input does not match up
	//prints the answer inputted by the user and then the correct answer
	else
	{
		cout << "Incorrect answer, the correct answer is:\n";
		cout << setw(5) << number_1 << endl << "+ " << number_2 << endl << "-----\n" << total;
	}

	//---------------------------------------------------------------------------------------------------------

	//Exercise #17 - Personal Best:
		//write a program that asks the user for the name of a pole vaulter and the dates and vault heights
		//of the athlete's best three vaults, the program will ONLY validate heights between 2 and 5 meters

	//create variables
	string vaulter_name; // creates a variable to store the vaulter's name into
	int first_vault, second_vault, third_vault; // stores an integer for the first, second, and third vault
	string first_date, second_date, third_date; // stores the dates  to the first, second, and third vault 
	const int validate = 0;

	//stores the vaulter's name
	cout << "\n\nEnter the pole vaulter's name: ";
	cin >> vaulter_name; // stores name in vaulter_name

	//--------------------------------------------------
	
	//FIRST POLE VAULT

	//stores the date for the first pole vault
	cout << "\nEnter the date of the first pole vault: ";
	cin >> first_date; //stores first date in first_date

	//stores the height correlating to the first date
	cout << "Enter the height of the first pole vault: ";
	cin >> first_vault; //stores the height of the first vault

	{
		if (first_vault >= 2 && first_vault <= 5) //validate the input for the first vault
		{
		cout << "Input validated.";
		}

		else
		{
			cout << "Input is invalid, please restart your program.";
		}
	}
	//--------------------------------------------------

	//SECOND VAULT
	
	//stores the date for the first pole vault
	cout << "\nEnter the date of the second pole vault: ";
	cin >> second_date; //stores second date in second_date

	//stores the height correlating to the first date
	cout << "\nEnter the height of the second pole vault: ";
	cin >> second_vault; //stores the height of the second vault

	if (second_vault>=2 && second_vault<=5) //validate the input for the second vault
		{
			cout << "Input validated.";
		}

	else
		{
			cout << "Input is invalid, please restart your program.";
		}
	//--------------------------------------------------

	//THIRD VAULT
	
	//stores the date for the first pole vault
	cout << "\nEnter the date of the third pole vault: ";
	cin >> third_date; //stores second date in third_date

	//stores the height correlating to the first date
	cout << "\nEnter the height of the third pole vault: ";
	cin >> third_vault; //stores the height of the third vault 


	if (third_vault >= 2 && third_vault <= 5) //validate the input for the third vault
	{
		cout << "Input validated.";
	}

	else
		{
			cout << "Input is invalid, please restart your program.";
		}
	/*START ORDERING BOLT'S PERSONAL BEST*/

	cout << "\n\n" << vaulter_name << "'s personal best: ";

	//--------------------------------------------------

	if (third_vault >> second_vault && first_vault)
	{
		cout << "\nThe best vault took place on " << third_date << " with a height of " << third_vault;
		cout << "\nThe second best vault took place on " << second_date << " with a height of " << second_vault;
		cout << "\nThe third best vault took place on " << third_date << " with a height of " << third_vault;
	}
	//--------------------------------------------------

	 if (second_vault >> third_vault && first_vault)
	 {
		cout << "\nThe best vault took place on " << third_date << " with a height of " << third_vault;
		cout << "\nThe second best vault took place on " << second_date << " with a height of " << second_vault;
		cout << "\nThe third best vault took place on " << third_date << " with a height of " << third_vault;
	 }
}
