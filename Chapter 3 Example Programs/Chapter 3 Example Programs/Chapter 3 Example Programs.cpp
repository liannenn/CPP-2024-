//CH. 3 Example Programs

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

/*Example Program 3-1 
  Receives no arguments
  Takes input from the user in the form of length and width
  Calculates and outputs the area of a rectangle*/
	int length, width, area;

	//print asking for the length
	cout << "Input a value for length: ";
	//store length
	cin >> length;

	//print asking for the width
	cout << "Input a value for length: ";
	//store width
	cin >> width;

	/*	Could also use:
	cout << "Enter values for the length and width, separated by a space: ";
	cin >> length1 >> width1;
	*/

	//calculate the area
	area = length * width;
	//print the area
	cout << "The area of a rectangle with a length of " << length << " and width of " << width << " is " << area << endl;

/*Example Program 3-1
  Accepts no arguments
  It takes input from the user for three values, first an integer, then a double, then a character. 
  It outputs them in the order they are taken as input*/

	int integer;
	double double_value;
	char letter;

	cout << "\nEnter an integer, a double, and a character separated by a space: ";
		cin >> integer >> double_value >> letter; 

		cout << "\n\nFor the integer value you entered: " << integer << endl;
		cout << "For the double value you entered: " << double_value << endl;
		cout << "FOr the character you entered: " << letter << endl;

/*Example Program 3-4
  Accepts no arguments
  Takes input from the user for the length of one side of a square and finds the area of the square using the pow() function
  */

	//create the variable
	double side_of_square, area_of_square;
	
	//ask for the side of the square
	cout << "\n\nEnter the length of one side of the square: ";
	//store it
	cin >> side_of_square; 

	//calculate the area
	area_of_square = pow(side_of_square);

		//print the area 
	cout << "The area of a square with a side measurement of " << side_of_square << " is: " << area_of_square;

}