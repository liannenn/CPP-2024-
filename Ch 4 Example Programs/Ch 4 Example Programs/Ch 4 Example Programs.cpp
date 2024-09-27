#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/*Program 4-1
	Accepts no arguments\
	uses relational operators to demonstrate
	true or false*/

	//intiialize variables
	bool trueValue, falseValue;
	int x = 5, y = 10;

	//assign true/false values
	trueValue = x < y;
	falseValue = y == x;

	//print true's numerical value
	cout << "True is: " << trueValue << endl;

	//print false's numerical value
	cout << "False is: " << falseValue << endl;

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-2
	Accepts no arguments
	Prompts the use for three test scores to average
	if the average is higher than the high score constant
	of 95, display a congratulations message*/

	//intialize variables
	double test_1, test_2, test_3, avg;
	const double high_score = 95;

	//get inputs for the test scores
	cout << "Enter three test scores, separated by a space, and I will average them: ";
	cin >> test_1 >> test_2 >> test_3;

	//calculate and print the average
	avg = (test_1 + test_2 + test_3) / 3;
	cout << "Your average is " << avg;

	//check is avg > high_score
	if (avg > high_score);
	//print congratulatory message if avg > high_score
	cout << "\n\nCongratulations! That's a new high score!";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-3
	Demonstrates how float rounding can
	cause equality errors*/

	//define variables
	double a = 1.5, b = 1.5;

	a += 0.0000000000000001; //add to variable a
	if (a == b)
		cout << "Both a and b are the same!\n";
	else
		cout << "a and b are not the same!";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-6*/
	//get inputs for the test scores
	cout << "Enter three test scores, separated by a space, and I will average them: ";
	cin >> test_1 >> test_2 >> test_3;

	//calculate and print the average
	avg = (test_1 + test_2 + test_3) / 3;
	cout << "Your average is " << avg;

	//check is avg > high_score
	if (avg > high_score);
	//print congratulatory message if avg > high_score
	{
		cout << "\n\nCongratulations! That's a new high score!";
		cout << "\nGreat job!";

	}

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-8
	accepts no arguments
	prompts the user for an odd or even integer
	and outputs if it is odd or even*/

	//initialize variable
	int number;

	//get an input for integer
	cout << "Enter an integer and I will tell you if it is even or odd. ";
	cin >> number;

	//check whether the number is even or odd
	if (number % 2 == 0)
		cout << number << " is an even number.\n";
	else
		cout << number << "is an odd number.\n";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-9
	accepts no arguments
	prompts the user for two numbers to divide
	and checks to make sure the divisor is NOT a value of 0
	and either outputs an error message or the calculated quotient
	*/

	//intialize variables
	double number_1, number_2, answer;

	//get your 1st number
	cout << "Enter a number: ";
	cin >> number_1;

	//get your 2nd number
	cout << "Enter another number: ";
	cin >> number_2;

	if (number_2 == 0)
		cout << "ERROR: Cannot divide by 0! \nPlease try again.";
	else
	{
		//calculate for the answer
		answer = number_1 / number_2;
		cout << number_1 << "/" << number_2 << ":" << answer;
	}

	cout << number << "is an odd number.\n";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-14
	write a program to display a letter grade based on user input*/

	//initiate constants
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		F_SCORE = 0;

	//initate variable
	double user_input;

	//ask for the grade
	cout << "What is your grade percentage wise? ";
	cin >> user_input; //stores percent inputted

	//compare for an A
	if (user_input >= A_SCORE)
		cout << "Your letter grade is an A.";

	//compare for a B
	else if (user_input >= B_SCORE)
		cout << "Your letter grade is an B.";

	//compare for a C
	else if (user_input >= C_SCORE)
		cout << "Your letter grade is an C.";

	//compare for a D
	else if (user_input >= D_SCORE)
		cout << "Your letter grade is an D.";

	//compare for a F
	else if (user_input >= F_SCORE)
		cout << "Your letter grade is an F.";

	else
		cout << "\nYou inputted an invalid test score. Try again.\n";

	cout << "\n---------------------------------------------------------\n\n";

	/*
	----------------------
	LOGICAL OPERATORS
	----------------------
	0 = False
	1 = True
	&& = AND ( New relational expressionis true if both expressions are true )
	|| = OR ( New relational expression, if either is true the expression is true )
	! = NOT (Reverses the value of an expression, true expressions become false and vice versa

	----------------------
	EXAMPLES
	----------------------

	int x = 12, y = 5, z = -4;

	EX: (x > y) && (y > z) // SPITS OUT TRUE

	EX: (x <= z) || (y != z) // SPITS OUt tRUE


	*/

	/*Program 4-18
	accepts no arguments
	presents the user witht he menu
	Health Club Membership Menu
	1. Standard Adult Membership
	2. Child Membership
	3. Senior Citizen Membership
	4. Quit the Program
	Enter your choice:
	it prompts the user for the # of months and calculates fees
	Adult = 40.0, Senior = 30.0 Child = 20.0 (per month)
	*/

	const double child_member = 20, senior_member = 30, adult = 40;
	double choice, months, total;

	/*Program 4-20
	accepts no arguments
	prompts the user to enter a character
	reports if hey entered a digit, upper case
	character, lower case character, or none of the following
	*/

	//define variable
	char ch;

	//get input from the user
	cout << "Please enter a character: ";
	cin >> ch;

	//process the characer type
	if (ch >= '0' && ch <= '9')
		cout << "You entered a digit.\n";

	else if (ch >= 'A' && ch <= 'Z')
		cout << "You entered an upper case character.\n";

	else if (ch >= 'a' && ch <= 'z')
		cout << "You entered an lower case character.\n";

	else
		cout << "You entered a character other than a digit, upper case, or lower case character.\n";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-12
	accepts no arguments
	prompts the user for a part number
	if the part number is valid, outputs the price
	part# S-29A - 249.99, S-29B - 199.99
	*/

	//initialize constants
	const double PRICE_A = 249.99, PRICE_B = 199.99;
	string partNum;

	//print the information about the headphones
	cout << "The headphone part numbers are:\n\nNoise Cancelling headphones: part number S-29A\nWireless: part S-29B";
	cout << "\n\nEnter the part number of the headphones you wish to purchase: ";
	cin >> partNum; //store the part number


	//checks if partNum == S-29A
	if (partNum == "S-29A")
		cout << "The price for part number S-29A is " << PRICE_A;

	else if (partNum == "S-29B")
		cout << "The price for part number S-29A is " << PRICE_B;

	else
		cout << "You inputted an incorrect model. Please try again.";

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-22
	accepts no arguments
	promtps the user for hours and charges
	calculates the total charges at $50/hour with
	a minimum rate of 5 hours. use the ?: operator to change the hours to 5 if hours < 5 and
	output the total charges to the user*/

	//initialize constants and then variables 
	const double PAY_RATE = 50.00;
	const int MIN_HOURS = 5;
	double hours, charges;

	//take input from the user for number of hours
	cout << "How many hours were worked? ";
	cin >> hours; // store the input into hours

	//calculate the total charges, increasing hours worked to a minimum of 5
	hours = hours < MIN_HOURS ? MIN_HOURS : hours;
	charges = hours * PAY_RATE;

	//format and output results to the user
	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;
	
	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-23
	accepts no arguments
	takes input from the user in the form of a char
	uses switch to tell the user what they entered
	*/

	//define variables
	char choice_char;

	//prompt the user for input
	cout << "Choose from the following :\tA, B, or C: ";
	cin >> choice_char; //store their input into choice

	//use the switch statement to report the selection
	switch (choice_char)
	{
	case 'A': cout << "You entered A.\n";
		break;

	case 'B': cout << "You entered B.\n";
		break;

	case 'C': cout << "You entered C.\n";
		break;

	default: cout << "You did not enter A, B, or C!\n";
	}

	cout << "\n---------------------------------------------------------\n\n";

	/*Program 4-25*/
	
	//define variables
	int modelNum;

	//take input from the user for the model number
	cout << "Our TVs come in three models: The 100, 200, and 300.\n"
		<< "Which model do you want to see features for? ";
	cin >> modelNum;

	//process model features
	cout << "That model has the following features:\n";
	switch (modelNum)
	{
	case 300: cout << "\tPicture-ina-Picture\n";
	case 200: cout << "\tStereo Sound\n";
	case 100: cout << "\tRemote Control\n";
		break;
	default: cout << "You can only choose from the 100, 200, and 300.\n";
	}

	/*Program 4-26
	accepts no arguments
	falls through multiple case staements to take input as upper or lower case*/

	//define variables
	char feedGrade;

	//ask for the grade
	cout << "Our pet food comes in three grades:\tA, B, and C.\n"
		<< "Which grade would you like to see pricing for? ";
	cin >> feedGrade;

	//use a switch statement to process the input
	switch (feedGrade)
	{
	case 'a':
	case 'A': cout << "30 cents per pound.\n";
		break;
	case 'b':
	case 'B': cout << "20 cents per pound.\n";
		break;
	case 'c':
	case 'C': cout << "10 cents per pound.\n";
		break;
	default: cout << "Invalid choice.";
	}
}