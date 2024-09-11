#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	//Exercise #19 - Monthly Payments:
		//calculate the monthly payment on a loan
	double month_int, payments_done, loan_amt, ann_rate, amount_paid, interest_paid, adj_rate, monthly_pay;
	const double num_months = 12;
	const double one_hun = 100;

	//ask for loan amt
	cout << "Enter the loan amount: $";
	cin >> loan_amt; 

	//ask for the annual interest rate
	cout << "Enter the annual interest rate: ";
	cin >> ann_rate;

	//ask for the number of payments made
	cout << "Enter the number of payments made: ";
	cin >> payments_done;

	//-----------------------------------------------

	//print the loan amount
	cout << "\nLoan Amount: $" << loan_amt;

	//calculate the monthly interest rate
	month_int = ann_rate /1200;


	//calculate for the adjusted interest rate
	adj_rate = 1 + month_int;
	adj_rate = pow(adj_rate, payments_done);

	//calculate for the monthly payment
	monthly_pay = (month_int * adj_rate) / (adj_rate - 1) * loan_amt;


	month_int = month_int * 100;
	//print the monthly interest rate
	cout << "\nMonthly Interest Rate: " << month_int << "%";

	//print the number of payments
	cout << "\nNumber of Payments: " << payments_done;

	//print the monthly payment
	cout << "\nMonthly Payment: " << monthly_pay;

	//calculate the amount paid back
	amount_paid = loan_amt + interest_paid;

}