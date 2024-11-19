using namespace std;
#include <iostream>
#include <fstream>


void getScores(int[], int);
double getTotal(int[], int);
double getLowest(int[], int);

int main()
{
	const int SIZE = 4;
	double total, lowest, average;

	int scores[SIZE];

	getScores(scores, SIZE);

	//get the lwoest score
	lowest = getLowest(scores, SIZE);

	//get total and subtract lowest score

	total = getTotal(scores, SIZE);

	//calculate the average
	total = getTotal(scores, SIZE) - lowest;

	//calculate the average
	average = total / (SIZE - 1);
	cout << fixed << showpoint;
	cout << "The average of the scores ";

	for (int index = 0; index < SIZE; index++)
	{
		cout << scores[index] << " ";
	}

	cout << " with the lowest score of " << lowest << " dropped is: " << average << endl;

}

void getScores(int scores[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << "Enter the score for test " << (index + 1) << ": ";
		cin >> scores[index];
	}
}