// Chapter 6 Individual Programming Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

void getScore(double& score_1, double& score_2, double& score_3, double& score_4, double& score_5){
void CalcAverage(double score_1, double score_2, double score_3, double score_4, double score_5);

int main();
	{
		int menu_choice;

		cout << "Chapter 6 Individual Programming Exercise Menu" << endl;
		cout << "\n------------------------------------------------------------\n\n";
		cout << "1) 6.11 - Lowest Score Drop" << endl;
		cout << "2) 6.15 - Overloaded Hospital" << endl;
		cout << "3) 6.16 - Population" << endl;
		cout << "4) 6.24 - Rock, Paper, Scissors, Lizard, Spock" << endl;
		cout << "\n------------------------------------------------------------\n\n";
		cout << "Option : ";
		cin >> menu_choice;

		do
		{
			cout << "Invalid option, please pick a new choice." << endl;
			cout << "Option : ";
			cin >> menu_choice;
		} while (menu_choice <= 0 || menu_choice > 4);

		switch (menu_choice)
	{
		case 1:
		{
			void getScore(double& score_1, double& score_2, double& score_3, double& score_4, double& score_5);
			void CalcAverage(double score_1, double score_2, double score_3, double score_4, double score_5, double dropped_average);

		}

		case 2:
		{

		}

		case 3:
		{

		}

		case 4:
		{

		}
	}

}

void getScore(double& score_1, double& score_2, double& score_3, double& score_4, double& score_5);
{
	cout << "Enter a test score: ";
	cin >> score_1;

	cout << "Enter a test score: ";
	cin >> score_2;

	cout << "Enter a test score: ";
	cin >> score_3;

	cout << "Enter a test score: ";
	cin >> score_4;

	cout << "Enter a test score: ";
	cin >> score_5;
}

void CalcAverage(double score_1, double score_2, double score_3, double score_4, double score_5, double dropped_average);
{	
	double dropped_average = 0;

	void findLowest(double score_1, double score_2, double score_3, double score_4, double score_5);

	dropped_average = (score_1 + score_2 + score_3 + score_4 + score_5) / 4;
}

void findLowest(double score_1, double score_2, double score_3, double score_4, double score_5);
{
	//finds the lowest score out of the five scores passed and drops it 

	if (score_1 < score_2 && score_1 < score_3 && score_1 < score_4 && score_1 < score_5);
	{
		score_1 = 0;
	}

	if (score_2 < score_1 && score_2 < score_3 && score_2 < score_4 && score_2 < score_5);
	{
		score_2 = 0;
	}

	if (score_3 < score_1 && score_3 < score_2 && score_3 < score_4 && score_3 < score_5);
	{
		score_3 = 0;
	}

	if (score_4 < score_1 && score_4 < score_2 && score_4 < score_3 && score_4 < score_5);
	{
		score_4 = 0;
	}

	if (score_5 < score_1 && score_5 < score_2 && score_5 < score_3 && score_5 < score_4);
	{
		score_4 = 0;
	}
}