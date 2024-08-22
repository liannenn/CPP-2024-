// Chapter 2 Programs
#include <iostream>
using namespace std;

int main()
{
	//2-2 "Sales Prediction"

	//write a program that predict how much the midwest division generates

	//create and define variables
	int eightmill = 8600000, tenmill = 10000000;
	double totalsales1, totalsales2;

	//calculate the amount generated
	totalsales1 = eightmill * 0.58 / 1000000.0;
	totalsales2 = tenmill * 0.58 / 1000000.0;


	//print the calculations for 8.6m
	cout << "If total sales are 8.6 million the Midwest division is estimated to generate $" << totalsales1 << " million." << endl;

	//print the calculation for 10m
	cout << "If total sales are 10 million the Midwest division is estimated to generate $" << totalsales2 << " million." << endl;

	cout << "\n ------------------------------------------------------------------------------------\n";

	//2-3 "Sales Tax"

	//create variables 
	double statetax1 = 0, statetax2 = 0, statetax3 = 0; // state tax amount holders
	double countytax1 = 0, countytax2 = 0, countytax3 = 0; // county tax amt holders
	double purchase1 = 75.00, purchase2 = 85.00, purchase3 = 100.00; // variable for purchase cost
	const double tax2 = 0.02, tax1 = 0.04; //make a constant int for both taxes

	//calculate for purchase1
	statetax1 = purchase1 * tax1;
	countytax1 = purchase1 * tax2;

	//calcykate tthe total for purchase1
	purchase1 = statetax1 + purchase1 + countytax1;

	//print the calculations
		cout << "Purchase:\t$"statetax1 << endl; // state tax for 75
		cout << countytax1 <<endl; // county tax for 75
		cout << purchase1;

}