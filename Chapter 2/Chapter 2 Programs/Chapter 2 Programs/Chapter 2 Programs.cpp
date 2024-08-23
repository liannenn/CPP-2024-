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

	cout << "\n ------------------------------------------------------------------------------------\n\n";

	//2-3 "Sales Tax"

	//create variables 
	double statetax1 = 0, statetax2 = 0, statetax3 = 0; // state tax amount holders
	double countytax1 = 0, countytax2 = 0, countytax3 = 0; // county tax amt holders
	double purchase1 = 75.00, purchase2 = 85.00, purchase3 = 100.00; // variable for purchase cost
	const double tax2 = 0.02, tax1 = 0.04; //make a constant int for both taxes

	//------ ------ ------ ------

	//calculate for purchase1
	statetax1 = purchase1 * tax1;
	countytax1 = purchase1 * tax2;


	//print the calculations
	cout << "Purchase:\t$" << purchase1 << endl;
	cout << "State Tax:\t$" << statetax1 << endl; // state tax for 75
	cout << "County Tax:\t$" << countytax1 << endl; // county tax for 75

	//calculate the total for purchase1
	purchase1 = statetax1 + purchase1 + countytax1;
	cout << "Total:\t\t$" << purchase1 << endl << endl;

	//------ ------ ------ ------

	//calculate for purchase2
	statetax2 = purchase2 * tax1;
	countytax2 = purchase2 * tax2;


	//print the calculations
	cout << "Purchase:\t$" << purchase2 << endl;
	cout << "State Tax:\t$" << statetax2 << endl; // state tax for 85
	cout << "County Tax:\t$" << countytax2 << endl; // county tax for 85

	//calculate tthe total for purchase2
	purchase2 = statetax2 + purchase2 + countytax2;

	cout << "Total:\t\t$" << purchase2 << endl << endl;

	//------ ------ ------ ------

	//calculate for purchase3
	statetax3 = purchase3 * tax1;
	countytax3 = purchase3 * tax2;


	//print the calculations
	cout << "Purchase:\t$" << purchase3 << endl;
	cout << "State Tax:\t$" << statetax3 << endl; // state tax for 100
	cout << "County Tax:\t$" << countytax3 << endl; // county tax for 100

	//calculate tthe total for purchase3
	purchase3 = statetax3 + purchase3 + countytax3;

	cout << "Total:\t\t$" << purchase3 << endl << endl;

	cout << "\n ------------------------------------------------------------------------------------\n\n";


//2-4
	//Compute the tax and tip on a restaurant bill for 88.67 
	//state tax 6.5% 
	//tip = 20% of the total 

	double mealcost = 88.67;
	const double state_tax = 0.065, tip_add = 0.20;
	double tax_amt = 0.0, tip_amt = 0.0;
	
	//calculate the costs

	tax_amt = mealcost * state_tax;

	//print the costs
	cout << "Meal Cost: \t$" << mealcost << endl;
	cout << "Total Tax: \t$" << tax_amt << endl; 

	//calculate the tip

	tip_amt = mealcost * tip_add;

	//print the tip
	cout << "Total Tip: \t$" << tip_amt << endl;

	//calculate the total bill
	mealcost = mealcost + tax_amt + tip_amt;

	//print the total bill
	cout << "Total: \t\t$" << mealcost << endl;

	cout << "\n ------------------------------------------------------------------------------------\n\n";

//2-6 
	//calculate an employees total annual pay by multiplying the employees pay amount

	//create variables
	const double payAmount = 2200.0, payPeriods = 26;
	double annualPay = 0;

	//calculate the annualPay
	annualPay = payAmount * payPeriods;

	//print the annualPay
	cout << "Your annual pay is:\t$" << annualPay << endl;

	cout << "\n ------------------------------------------------------------------------------------\n\n";

//2-9
	//determine the amount of memory used by different data types using sizof(__), then print it 
	cout << "A char data type uses " << sizeof(char) << " byte(s) of memory.\n";
	cout << "The int data type uses " << sizeof(int) << " byte(s) of memory.\n";
	cout << "The float data type uses " << sizeof(float) << " byte(s) of memory.\n";
	cout << "The double data type uses " << sizeof(double) << " byte(s) of memory.\n";

	cout << "\n ------------------------------------------------------------------------------------\n\n";

//2-16
	//Make a diamong pattern
	cout << "   *" << endl;
	cout << "  ***" << endl;
	cout << " *****" << endl;
	cout << "*******" << endl;
	cout << " *****" << endl;
	cout << "  ***" << endl;
	cout << "   *" << endl;
	
	cout << "\n ------------------------------------------------------------------------------------\n\n";

}