#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
	//create variables month_1, month_2, and month_3
	string month_1, month_2, month_3;
	double rain_1, rain_2, rain_3, average_rain, total_rain;

	//get an input for the first month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_1;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_1 << ": ";
	cin >> rain_1; // store amount of rain 

	//get an input for the second month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_2;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_2 << ": ";
	cin >> rain_2; // store amount of rain 

	//get an input for the last month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_3;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_3 << ": ";
	cin >> rain_3; // store amount of rain 

	
	//calculate the average amount of rain
	total_rain = rain_1 + rain_2 + rain_3;
	average_rain = total_rain/3;
	
	cout << "THe average rainfall for the months of " << month_1 << ", " << month_2 << "and " << month_3 << "is: " << average_rain << " inches of rain.";
	


}