#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;




void displayMessage()
{
	cin.get();
	cout << "Hello from function displayMessage!\n";
	cout << "Returning you to function main.\nPause...";

}

int main()
{
	cout << "Hello from main.\n";
	cout << "Please hold while I forward you to function displayMessage.\nPause...";
	// call displayMessages
	displayMessage();
	cin.get();
	cout << "Welcome back to function main. Have a great day.\n";

	return 0;
}

//---------------------------------------------------------------------------------------

void displayMsg()
{
	cin.get();
	cout << "Hello again from the function displayMsg.\n";
	cout << "Returning you to main...\nPress any key.\n";
	cin.get();
}

int main()
{
	for (int count = 1; count <= 5; count++)
	{
		cout << "Sending you to displayMsg...\nPress any key.\n";
		displayMsg();
	}
	cout << "Processing the next line in main...\nPress any key.\n";
	cin.get();
}

//---------------------------------------------------------------------------------------

void displayValue(int);

int main()
{
	//display a message and pass the interger to 5 to displayValue
	cout << "Passing the value 5 to displayValue\n";
	displayValue(5);
	cin.get();
	cout << "Success!\n";

	return 0;
}

/*##################################*/
void displayValue(int num)
{
	cout << "displayValue received the intereger " << num << " as an argument .\n";
	cout << "Returning you to main..\nPress any key.\n";

}


void displayValue(int);

int main()
{
	//display a message and pass the interger to 5 to displayValue
	cout << "Passing the value 5 to displayValue\n";
	displayValue(5);
	cin.get();
	cout << "Success!\n";

	return 0;
}

/*##################################*/
void displayValue(int num)
{
	cout << "displayValue received the interger " << num << " as an argument .\n";
	cout << "Returning you to main..\nPress any key.\n";

}

//---------------------------------------------------------------------------------------

int main()
{
	const int value1 = 20, //first val
			value2 = 40, //second val
			total; // holds the total

	cout << "The sum of " << value1 << " and " << value2 << " is " << total << endl;

	return 0;

}

//function for sum
int sum(int num1, int num2)
{
	return num1+num2; 
}
