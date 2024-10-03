// CH 5 Example Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;
int main()
{
	//Program 5-1 Increment and Decrement Operators
	//initialize variables
	int num = 0;

	cout << "Program 5-1, Increment and Decrement Operators" << endl << "----------------------------------------------------" << endl;

	cout << "The variable num has the value: " << num << endl;
	cout << "I will now increment the variable num.\n\n";

	//increment using postfix mode
	num++;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will now increment the variable again. \n\n";

	//increment using prefix mode
	++num;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will now decrement the variable num.\n\n";

	//decrement using postfix mode
	num--;
	cout << "The variable num now has the value: " << num << endl;
	cout << "I wil now decrement the variable num again. \n\n";

	//decrement using prefix mode
	--num;
	cout << "The variable num now has the value: " << num << endl << endl << endl;


	//Program 5-1 Increment and Decrement Operators
	//define variable
	int num_5_1 = 4;

	cout << "Program 5-1 Cont, Increment and Decrement Operators" << endl << "-----------------------------------------------------" << endl;


	cout << num_5_1 << endl; //Display 4
	cout << num_5_1++ << endl; //Display 4, then increment num
	cout << num_5_1 << endl; //Display 5
	cout << ++num_5_1 << endl;  //Increments num, then display 6

	cout << endl; // Display a blank line

	cout << num_5_1 << endl; //Display 6
	cout << num_5_1-- << endl; //Displays 6, then decrements num
	cout << num_5_1 << endl; //Displays 5
	cout << --num_5_1 << endl << endl; //Decements num, then displays 4


	//Program 5-3 The While Loop
	//accepts no arguments
	//demonstrates a simple counted while loop

	//initialize counter variable
	int counter = 0;

	cout << endl << "Program 5-3, The While Loop" << endl << "----------------------------------------------------" << endl;

	//loop as long as counter is less than 5
	while (counter < 5)
	{
		cout << "Hello there!\n";
		counter++;
	}

	//Program 5-4 
	//accepts no arguments
	//prompts the user for a temp and loops
	//if the temp is too high, >102.5 the loop should continue prompting the user to enter the temp.
	//once the temperature is below MAX_TEMP, output a message to check again in 15 minutes
	const double MAX_TEMP = 102.5;
	double substance_temp;


	cout << "\n\nProgram 5-4, Max Temp" << endl << "-----------------------------------------------------" << endl;


	cout << "Enter the substance temperature in Celsius: ";
	cin >> substance_temp;

	while (substance_temp > MAX_TEMP)
	{
		cout << endl << "Turn the thermostat down and check the temperature again in 5 minutes." << endl;
		cout << "Press any key to record your temperature again.";
		cin.ignore();
		cin.get();
		cout << "\nEnter the substance temperature in Celsius: ";
		cin >> substance_temp;
	}

	cout << "\n\nThe temperature is below the maximum allowed.";

	//Program 5-6
	//accepts no arguments
	//uses a counted while loop to find and output the square of numbers 1 through 10
	//define constants and variables

	/*
	double counting_square, number_squared;
	const double MAX_NUMBER_10 = 10;

	cout << "Number\t\tNumber Squared";
	cout << endl << "-------------------------------------";

	while (counting_square <= MAX_NUMBER_10)
	{
		number_squared = pow(counting_square, 2);
		cout << counting_square << "\t\t" << number_squared;

		counting_square++;
	}

	*/

	//Program 5-7 do-while Loop

	/*

	int choice = 0;

	while (choice != 5)
	{
		do
		{
			cout << "\nWemcome to the Coffee Kraze Kiosk.\n"
				<< "Please make a selection from the options below:\n";
			cout << "1. Coffee ala Americana\n";
			cout << "2. Caramel Machiato\n";
			cout << "3. Mocha Frappe\n";
			cout << "4. Cappuccino\n";
			cout << "5. Quit\n";

			cout << "Enter your selection: ";
			cin >> choice;

		} while (choice <= 1 || choice > 5);

		switch (choice)
		{
		case 1:
		{
			cout << "Here is your Coffee ala Americana. Enjoy!\n";
			break;
		}

		case 2:
		{
			cout << "Here is your Caramel Machiato. Enjoy!\n";
			break;
		}

		case 3:
		{
			cout << "Here is your Mocha Frappe. Enjoy!\n";
			break;
		}

		case 4:
		{
			cout << "Here is your Cappuccino. Enjoy!\n";
			break;
		}

		case 5:
		{
			cout << "Thank you for stopping by. Have a groovy day!\n";
		}

		}
	}
	*/

	//5-11 
	const int KPH_MIN = 60, KPH_MAX = 130, INCREMENT = 10;
	const double CONV = 0.6214;

	//initialize variables
	int kph;
	double mph;

	//output header and set precision
	cout << "\n\nKPH\t\tMPH" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);

	//loop and output conversions from KPH -> MPH
	for (kph = KPH_MIN; kph <= KPH_MAX; kph += INCREMENT)
	{
		mph = kph * CONV; // calc mph
		cout << kph << "\t\t" << mph << endl;
	}

	//5-12
	int days;
	double sales, total;

	//prompts user
	cout << "How many days do you want to enter sales for? : ";
	cin >> days;

	//loop for a specified amount of days 
	
	for (int counter = 1; counter <= days; counter++)
	{
		cout << "Enter sales for day " << counter << ": ";
		cin >> sales;
		total += sales;
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for " << days << " days is: " << total << endl;


	//Program 5-13
	
	//intialize variables
	int points = 0, total_ = 0, game = 0;

	//output the header
	cout << "Enter the poitns your team has earned per game, \n" << "Enter-1 when you have enterered all scores.";

	cout << endl << endl;

	while (points != -1)
	{
		total_ += points;
		game += 1;
		cout << "Enter the poitns for game " << game << ": ";
		cin >> points;
	}

	//output the results
	cout << "Your team scored a total of " << total_ << " points.\n";


}
