using namespace std;
#include <iostream>
#include <fstream>

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];


	cout << "Enter the hours worked by "
		<< NUM_EMPLOYEES << " employees.";

	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];
	cin >> hours[4];
	cin >> hours[5];

	cout << "The hours you entered are: ";
	cout << " " << hours[0];
	cout << " " << hours[1];
	cout << " " << hours[2];
	cout << " " << hours[3];
	cout << " " << hours[4];
	cout << " " << hours[5] << endl;

	const int MONTHS = 12;
	int days[MONTHS] = { 31, 28, 31, 20 ,31, 20, 31, 31, 30, 31 ,30 ,31 };

	for (int count = 0; count < MONTHS; count++)
	{
		cout << "Month " << (count + 1) << " has " << days[count] << " days. " << endl;
	}

	const int SIZE = 10;
	int numbers[SIZE];
	int count = 0;



	ifstream inFile("numbersdemo.txt");

	if (!inFile)
		cout << "File not found.";
	else
	{
		while (count < SIZE && inFile >> numbers[count])
			count++;

	}
	cout << endl;

	ofstream outFile("prog7_8demo.txt");

	for (count = 0; count < SIZE; count++)
		outFile << numbers[count] << endl;

	if (!outFile)
		cout << "File not found.";
	else
	{
		for (count = 0; count < SIZE; count++)
			outFile << numbers[count] << endl;

	}

	outFile.close();

	int numbers[] = { 10, 20, 30, 40, 50 };

	for (int val : numbers)
		cout << val << endl;


	const int SIZE = 8;

	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

	for (int index = 0; index < SIZE; index++)
		showValue(numbers[index]);


}

void showValue(int element)
{
	cout << element << " ";
}