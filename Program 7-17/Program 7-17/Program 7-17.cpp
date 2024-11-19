using namespace std;
#include <iostream>
#include <fstream>

void showValue(int[], int);

int main()
{
	const int SIZE = 8;

	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

	showValue(numbers, SIZE); //passes array to show value
	return 0;

	
}

void showValue(int nums[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << nums[index] << " ";
	}
}