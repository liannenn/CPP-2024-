
#include <iostream>
using namespace std;
int main()
{
// 2-10

	int apples ; //make apples a number
	apples = 20; //define apples as the number 20

	cout << "Today we sold " << apples << " bushles of apples.\n\n";



//2-11

	//assign variables
	int checking; 
	unsigned int miles;
	long diameter;

	//assign variables their values
	checking = -20;
	miles = 4276;
	diameter = 100000;

	//assign an actual value to the variables
	cout << "We have made a long journey of " << miles << " miles. \n";
	cout << "Our checking account balance is " << checking <<".";
	cout << "\nThe galaxy is about " << diameter << " light years in diameter.\n\n";

//2-11b

	//make variables
	int floors, rooms, suites;

	//assign values
	floors = 25;
	rooms = 300;
	suites = 30;

	//print message
	cout << "The Grande Hotel has " << floors << " floors\nwith " << rooms << " rooms and " << suites << " suites. \n\n";

//2-12

	//assign a char value
	char letter;

	//assign letter
	letter = 'A';

	//print letter
	cout << letter << endl;

	//assign letter
	letter = 'B';

	//print letter
	cout << letter << endl;

//2-13

	//output chars A and B using ASCII

	//assign char letter values
	letter = 65;
	cout << letter << "\n";
	letter = 66;
	cout << letter << "\n\n";

//2-14

	//use string type named strongerAvenger
	string strongestAvenger;

	//assign a string value to strongestAvenger
	strongestAvenger = "Thor";

	//print message
	cout << "The strongest Avenger is : " << strongestAvenger << endl;

//2-16
	
	//define two float variables 

	float distance = 1.495979E11;
	double mass = 1.989E30;
	//print messages "The sun is ___ meters away" and "The sun's mass is ___ kilograms."
	cout << "\nThe Sun is " << distance << " meters away.\n";
	cout << "The Sun's mass is " << mass << " kilograms. \n";

//2-17

	//boolValue as true
	bool boolValue = true;

	//print value
	cout << "\n\nThe current state of boolValue is: " << boolValue;

	boolValue = false; 
	cout << "\nThe current state of boolValue is: " << boolValue;

	double amount;
	cout << "\n\nA double is stored in "
		<< sizeof(double) << "bytes\n";
	cout << "Variable amount is stored in "
		<< sizeof(amount)
		<< "bytes\n";

//2-19
	// initialize variables
	int month = 2, days = 28;

	//print messages
	cout << "\n\nMonth " << month << " has " << days << " days.\n";
}