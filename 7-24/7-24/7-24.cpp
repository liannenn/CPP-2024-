using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

int main()
{
	//declare variables
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(NUM_EMPLOYEES);
	vector<double> payRate(NUM_EMPLOYEES);
	int index;

	cout << "Enter the hours work by " << NUM_EMPLOYEES << " employees "
		<< "and their hourly rate.\n";

	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "\nHours worked by employee " << (index + 1) << ": ";
		cin >> hours[index];

		cout << "\nHours rate for employee " << (index + 1) << ": ";
		cin >> payRate[index];

	}

	cout << "Here is the gross pay for each employee.\n";

	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "empoyee " << (index + 1) << ": $" << (hours[index] * payRate[index]);
		cout << endl;
	}

}
