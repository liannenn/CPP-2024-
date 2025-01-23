
#include <iostream>
using namespace std;


int main()
{
	const int size = 20;
	int idNums[size] = { 101, 142, 147, 189, 199, 207, 222, 234, 289, 296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600 };
	
	int results;
	int stuID;

	//prompts user for the id
	cout << "Enter the stude ID to search for: ";
	cin >> stuID;

	//pass the array, size, and search critera to vinarySearch
	results = binarySearch(idNums, size, stuID);

	//outputs
	if (results == -1)
		cout << "The Student ID " << stuID << " was not found.";
	else
	{
		cout << "That Student ID was found at index " << results << endl; 
	}
}

int binarySearch(const int array[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	//loops through 
	while (!found && first <= last)
	{
		middle = (first + last) / 2; //find a midpoint
		if (array[middle] == value) //value is at the middle
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) //checks if value is in lower half
			last = middle - 1;
		else // runs if value is in upper half
			first = middle = 1;

	}
	return position;

}