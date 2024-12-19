#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void get_score(int&);
int lowest_score(int, int, int, int, int);
int calc_average(int, int, int, int, int, int);

double calc_outpatient(int, int);
double calc_inpatient(int, int, int, int);

void population_size(double, double, double, double);

void game_main();
int computer_choice();
string player_choice();
void winner(string, int);

int main()
{
	int menuChoice; // Varaible to store the user's choice
	
	// Displaying the welcome message and menu options
	cout << "Welcome to the Chapter 6 Exercise Menu"
		<< "Please choose from the following choices.\n"
		<< "1.\tExercise 6-11, Lowest Score Drop\n"
		<< "2.\tExercise 6-15, Overloaded Hospital\n"
		<< "3.\tExercise 6-16, Population\n"
		<< "4.\tExercise 6-24, Rock, Paper, Scissors, Lizard, Spock\n"
		<< "5.\tQuit\n";

	cout << "Choice: ";
	cin >> menuChoice; // User inputs their choice

	switch (menuChoice)
	{
	case 1: //Program Lowest Score Drop
	{
		// declares variables to hold scores 
		int test_1, test_2, test_3, test_4, test_5, calculating, avg;

		// receives an input from the user
		get_score(test_1);
		get_score(test_2);
		get_score(test_3);
		get_score(test_4);
		get_score(test_5);

		// calls lowest_score to calculate the lowest score
		calculating = lowest_score(test_1, test_2, test_3, test_4, test_5);

		// Calculate and display the average of the four highest scores
		avg = calc_average(test_1, test_2, test_3, test_4, test_5, calculating);
		cout << "After dropping the lowest score, the test average is " << avg << ".";
	}
		break;
	case 2: // Program Overloaded Hostpital
	{
		char blood_type;
		int medicine_charges, lab_cosst, Days, daily_rate, num_days;
		double totalCharges;

		cout << "\nThis pogram will compute patient hospital charges.";
		cout << "\nWhat was the patient type?";
		cout << "\nIn-patient or Out-patient? (I or O) ";
		cin >> blood_type;

		// Splits paths into outpatient and inpatient
		if (blood_type == 'O') //outpatient
		{
			// Gathers input for calculations
			cout << "Medication Charges: $\t";
			cin >> medicine_charges;
			cout << "Lab fees and other sercie charges: $\t";
			cin >> lab_cosst;

			// calls calc_outpatient to make calculations
			totalCharges = calc_outpatient(medicine_charges, lab_cosst);
		}
		else if (blood_type == 'I') //inpatient
		{
			// Gathers input for calculations
			cout << "Number of days in the hospital: ";
			cin >> num_days;
			cout << "Daily room rate: $";
			cin >> daily_rate;
			cout << "Medication Charges: $";
			cin >> medicine_charges;
			cout << "Lab fees and other service charges: $";
			cin >> lab_cosst;

			// calls calc_inpatient to make the calculations
			totalCharges = calc_inpatient(num_days, daily_rate, medicine_charges, lab_cosst);
		}
		// Displays total charges
		cout << "\nThe total charges are $" << fixed << setprecision(2) << totalCharges << endl;
	}
		break;
	case 3: //Program Population
	{
		double startPop, annual_birth, annual_death, years;

		cout << "\nThis program calculates population change.";
		do {
			cout << "\nEnter the starting population size: ";
			cin >> startPop;
		} while (startPop < 2);

		do {
			cout << "Enter the annual birth rate (as % of current population): ";
			cin >> annual_birth;
			annual_birth /= 100;
			cout << "Enter the annual detah rate (as % of current population): ";
			cin >> annual_death;
			annual_death /= 100; 
		} while (annual_birth <= -1 || annual_death <= -1);

		do {
			cout << "For how many years do you wish to view population changes? ";
			cin >> years;

			cout << "\nStarting population: " << startPop << endl;
		} while (startPop < 2);

		population_size(startPop, annual_birth, annual_death, years);
	}
		break;
	case 4: // Rock, Paper, Scissor, Lizard, Spock
	{
		game_main();
	}
		break;
	default:
		cout << "Invalid Input." << endl; // Handles invalid menu choices
	}
}

void get_score(int &testref)
{
	do
	{
		cout << "Enter a test score: ";
		cin >> testref;

		if (testref < 0 || testref > 100)
			cout << "Invalid test score. Try again.\n";
	} while (testref < 0 || testref > 100);
}

int lowest_score(int test_1, int test_2, int test_3, int test_4, int test_5)
{
	int lowest = test_1;  // Assume the first score is the lowest initially

	if (test_2 < lowest) {
		lowest = test_2;
	}
	if (test_3 < lowest) {
		lowest = test_3;
	}
	if (test_4 < lowest) {
		lowest = test_4;
	}
	if (test_5 < lowest) {
		lowest = test_5;
	}

	return lowest;  // Return the lowest score found
}

int calc_average(int test_1, int test_2, int test_3, int test_4, int test_5, int lowest)
{
	int avg = ((test_1 + test_2 + test_3 + test_4 + test_5) - lowest) / 4;
	return avg;
}

double calc_outpatient(int medicine_charges, int lab_cosst)
{
	int totalCharges;
	return (totalCharges = medicine_charges + lab_cosst);
}

double calc_inpatient(int num_days, int daily_rate, int medicine_charges, int lab_cosst)
{
	int totalCharges;
	totalCharges = (num_days * daily_rate) + medicine_charges + lab_cosst;
	return (totalCharges);

void population_size(double startPop, double annual_birth, double annual_death, double years)
{
	double new_population = startPop, birth, death;
	int counter = 1;

	while (counter <= years)
	{
		birth = new_population * annual_birth;
		death = new_population * annual_death;

		new_population = new_population + birth - death;
		cout << fixed << setprecision(0) << "Population at the end of year " << counter << " is " << floor(new_population) << "." << endl;

		counter += 1;
	}
	return;
}

void game_main()
{
	int computer;
	string player;

	cout << "Welcome to Rock, Paper, Scissors, Lizard, Spock.\n";
	cout << "Press any button to continue...";
	cin.ignore();
	cin.get();

	computer = computer_choice();
	player = player_choice();

	winner(player, computer);
}

int computer_choice()
{
	const int min = 1;
	const int max = 5;
	
	unsigned seed = time(0);
	srand(seed);

	int random = (rand() % (max - min + 1)) + min;

	return (random);
}

string player_choice()
{
	string weapon;

	cout << "\nChoose your weapon (rock, paper, scissors, lizard, spock): ";
	cin >> weapon;

	return (weapon);
}

void winner(string player, int computer)
{
	int playerNum;

	switch (computer)
	{
	case 1:
		cout << "The computer chose rock.";
		break;
	case 2:
		cout << "The computer chose paper.";
		break;
	case 3:
		cout << "The computer chose scissors.";
		break;
	case 4:
		cout << "The computer chose lizard.";
		break;
	case 5:
		cout << "The computer chose spock.";
		break;
	}

	if (player == "rock")
	{
		if (computer == 1)
			cout << "\nIt's a tie.";
		else if (computer == 2 || computer == 5)
			cout << "\nYou lose.";
		else
			cout << "\nYou win.";
	}
	if (player == "paper")
	{
		if (computer == 2)
			cout << "\nIt's a tie!";
		else if (computer == 3 || computer == 4)
			cout << "\nYou lose.";
		else
			cout << "\nYou win.";
	}
	if (player == "scissors")
	{
		if (computer == 3)
			cout << "\nIt's a tie!";
		else if (computer == 1 || computer == 5)
			cout << "\nYou lose.";
		else
			cout << "\nYou win.";
	}
	if (player == "lizard")
	{
		if (computer == 4)
			cout << "\nIt's a tie.";
		else if (computer == 2 || computer == 1)
			cout << "\nYou lose.";
		else
			cout << "\nYou win.";
	}
	if (player == "spock")
	{
		if (computer == 5)
			cout << "\nIt's a tie.";
		else if (computer == 2 || computer == 4)
			cout << "\nYou lose.";
		else
			cout << "\nYou win.";
	}
	cout << endl;
}
