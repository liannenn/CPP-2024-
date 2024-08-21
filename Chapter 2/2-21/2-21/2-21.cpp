// 2-21
#include <iostream>
using namespace std;

int main()
{
	double regularWages,
		//variables
		basePayRate = 18.5,
		regularHours = 40,
		overtimeWages = 0,
		overtimePayRate = 27.78,
		overtimeHours = 10,
		totalWages; 

	//calculate the regular and overtime wages
	regularWages = basePayRate * regularHours;
	overtimeWages = overtimePayRate * overtimeHours;

	//add overtime and regular wage
	totalWages = regularWages + overtimeWages;


	//print the wages
	cout << "Your wages for this week are: $" << totalWages << endl;

	//seperator
	cout << "\n--------------------------------------------" << endl;

//2-22
	double monthlyPay = 6000, contribution;

	//calculate 5%
	contribution = monthlyPay * 0.05;
	//print contribution
	cout << "\nYour contribution at 5% is $" << contribution << " per month\n";
	
	//calculate 7%
	contribution = monthlyPay * 0.07;
	//print contribution
	cout << "Your contribution at 7% is $" << contribution << " per month\n";

	//calculate 10%
	contribution = monthlyPay * 0.10;
	//print contribution
	cout << "Your contribution at 10% is $" << contribution << " per month\n";

	//seperator
	cout << "\n--------------------------------------------" << endl;

// 2-23

	//initialize variables 
	double regularPrice = 59.95, discount, salePrice;
	
	//calculate discount
	discount = regularPrice * 0.20;

	//calculate salePrice
	salePrice = regularPrice - discount;

	//print the prices
	cout << "\nRegular Price: $" << regularPrice; 
	cout << "\nDiscount amount: $" << discount;
	cout << "\nSale Price: $" << salePrice << endl; \

	//seperator
	cout << "\n--------------------------------------------" << endl; 

// 2-24
	//make variables
	int number = 12345;
	int rightMost = number % 10;

	//output the rightMost number of 5
	cout << "\nThe right-most number of " << number << " is: " << rightMost << endl;

	//seperator
	cout << "\n--------------------------------------------" << endl;

// 2-25
	//make variables
	int totalSeconds = 125, minutes, seconds;

	//get number of minutes in totalSeconds
	minutes = totalSeconds / 60;

	//get the rest of seconds
	seconds = totalSeconds % 60;

	//print results
	cout << "\nIn " << totalSeconds << " seconds there are:\n" << endl << "Minutes: " << minutes << endl << "Seconds: " << seconds << endl; 

	//seperator
	cout << "\n--------------------------------------------" << endl;

/* multi-line
   comment*/

// 2-28

	//Constants
	const double PI = 3.14159;
	const double DIAMETER = 10.0;

	//variable holding circumference
	double circumference;

	//calculate circumference
	circumference = PI * DIAMETER;

		//print the circumference
		cout << "\nThe circumference is: " << circumference << endl;

		//seperator
		cout << "\n--------------------------------------------" << endl;
}