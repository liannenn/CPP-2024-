#include <iomanip>
#include <iostream>

using namespace std;

int square(int);
double square(double);


int main()
{
	int userInt;
	double userFloat;

	//get an int and a double
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter an interger and a floating-point value: ";
	cin >> userInt >> userFloat;

	cout << "Here are their squares: ";
	cout << square(userInt) << " and " << square(userFloat);
	return 0;

	int square(int number)
	{
		return number * number;
	}


}