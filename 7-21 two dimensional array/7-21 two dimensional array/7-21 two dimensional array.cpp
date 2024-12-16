using namespace std;
#include <iostream>
#include <fstream>
#include <iostream>



int main()
{
	//intiialize constants and variables
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;

	//intialize 2d awway with 3 rows
	// 4 columns
	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales = 0; 
	int div = 0, qtr = 0;//loop counters

	cout << "This program will calculate the total sales of 3 divisons"
		<< " over 4 quarters of sales.\n";
	cout << "Enter the following sales information:\n";

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1) << ",\tQuarter " << (qtr + 1) << ": ";
			cin >> sales[div][qtr];
		}
	}

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			totalSales = totalSales + sales[div][qtr];
		}
	}

	cout << "\nThe total sales for the company are $" << totalSales << endl;
	return 0;
}
