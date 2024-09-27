
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	int number;
	char ch;
	string first, both, last;
	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();
	cout << "Enter a character: ";
	cin.get();
	ch = cin.get();
	cout << "\nEnter your first name: ";
	cin.ignore();
	getline(cin, first);
	cout << "\nEnter your last name: ";
	getline(cin, last);
	both = first + " " + last;
	cout << "Hello " << first + " " + last << ".\n";
	cout << "\nYou entered the number " << number << " and the letter " << ch << "\nThank you" << both;

	cout <<"\n--------------------------------------------  \n"; 

//Program 3-24
	double sideA, sideB, hypotenuse;
	cout << "\nEnter the length of side a: ";
	cin >> sideA;
	cout << "\nEnter the length of side b: ";
	cin >> sideB;

	hypotenuse = sqrt(pow(sideA, 2.0) + pow(sideB, 2.0));

	cout << "\n\nHypotenuse: " << setprecision(2) << hypotenuse;


	cout << "\n--------------------------------------------  \n";

//Program 3-25
	cout << "Generating three random numbers…\n" << rand() << endl << rand() << endl << rand() << endl;

	cout << "\n--------------------------------------------  \n";

//Program 3-26
	const int maxValue = 1000, minValue = 200;
	double y;

	unsigned seed = time(0);
	srand(seed);

	y = (rand() % (maxValue - minValue + 1)) + minValue;

	cout << "Generating three random numbers…\n" << rand() << endl << rand() << endl << rand() << endl;

//Program 3-27
}