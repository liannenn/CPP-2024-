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
	double month_int, payments_done, loan_amt, ann_rate, amount_paid, interest_paid, adj_rate, monthly_pay, tot_paid;
	const double num_months = 12;
	const double one_hun = 100;
	const double amt_paid = 10360.03;

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
	cout << setprecision(2) << fixed;
	cout << "\nLoan Amount: \t\t$" << setw(10) << loan_amt;

	//calculate the monthly interest rate
	month_int = ann_rate /1200;


	//calculate for the adjusted interest rate
	adj_rate = 1 + month_int;
	adj_rate = pow(adj_rate, payments_done);

	//calculate for the monthly payment
	monthly_pay = (month_int * adj_rate) / (adj_rate - 1) * loan_amt;


	month_int = month_int * 100;
	//print the monthly interest rate


	cout << "\nMonthly Interest Rate: \t" << setw(10) << month_int << "%";

	//print the number of payments
	cout << "\nNumber of Payments: \t$" << setw(10) << payments_done;

	//print the monthly payment
	cout << "\nMonthly Payment: \t$" << setw(10) << monthly_pay;

	cout << "\nAmount Paid Back: \t$" << setw(10) << amt_paid;

	//calc interest paid
	interest_paid = amt_paid-loan_amt;
	cout << "\nInterest Paid: \t\t$" << setw(10) << interest_paid;
}