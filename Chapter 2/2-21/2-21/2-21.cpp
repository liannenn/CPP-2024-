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
	cout << "Your wages for this week are: $" << totalWages;
}