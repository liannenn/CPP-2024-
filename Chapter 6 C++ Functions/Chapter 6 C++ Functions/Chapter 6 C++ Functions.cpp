#include <cstring>
#include <string>
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#define _USE_MATH_DEFINES

using namespace std;

void total_number_of_days(double number_of_days);

int main()
{
	//declare variables
	double number_of_days;

	//get an input about the total number of days spent on the trip
	cout << "Enter the amount of days spent on the trip: ";
	cin >> number_of_days; //stores the input into number_of_days

	//add spacer
	cout << endl << " ------------------------------------------------------------ " << endl;
	if (number_of_days < 1);
	{
	//loops for the number of days if the input for days if less than 1
		do
		{

			cout << endl;

			//sends a message saying that the amount of days is incorrect
			cout << "Invalid amount of days inputted, please try again." << endl;

			//get an input about the total number of days spent on the trip
			cout << "Enter the amount of days spent on the trip: ";
			cin >> number_of_days; //stores the input into number_of_days


			cout << endl;

		} while (number_of_days < 1);
	}

	//passes the verified number of days into function
	total_number_of_days(number_of_days);
}

void total_number_of_days(double number_of_days)
{
	//add spacer
	cout << endl << " ------------------------------------------------------------ " << endl;

	//prints the total number of days pulled from main
	cout << "The total number of days spent on your trip is: " << number_of_days; 
}

void amount_of_each_meal_eaten(double breakfast_1, double lunch_1, double dinner_1, double breakfast_2, )