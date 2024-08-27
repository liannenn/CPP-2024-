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

	cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

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

		cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

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
	area_of_square = pow(side_of_square, 2);

		//print the area 
	cout << "\nThe area of a square with a side measurement of " << side_of_square << " is: " << area_of_square << endl << endl;

	cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

//Example Program 3-5
	// Accepts no arguments
	// Takes inputs from theuser for the radius of a circle,
	// calculates the area using the formula area = PI * R^2
	// and outputs it to the user 
	
	// intialize a constant for pi with the value 3.14159
	const double pi = 3.14159;
	double radius, area_circle;

	//ask for radius
	cout << "Enter a value for the radius of a circle: ";
	//store the number
	cin >> radius;

	//calculate the area
	area_circle = pow(radius, 2) * pi;

		//print the area
		cout << "\nThe area of a circle wth the radius " << radius << " is " << area_circle << endl;

		cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

//Example Program 3-6
		//Accepts no arguments
		//Takes input from the user for three test scores and finds and outputs the average

		//initiate variable for three people
		const double three_scores = 3;
		//initiate a variable to store the three scores
		double score_1, score_2, score_3, average_score;

		//print asking for score 1
		cout << "Input the score for test #1: ";
		cin >> score_1;

		//print asking for score 2
		cout << "Input the score for test #2: ";
		cin >> score_2;

		//print asking for score 3
		cout << "Input the score for test #3: ";
		cin >> score_3;

		//calculate for the average score
		average_score = (score_1 + score_2 + score_3) / three_scores;

		//print the average scores
		cout << "\nThe average of the three test scores " << score_1 << ", " << score_2 << ", and " << score_3 << " is: " << average_score;

		cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

//Example Program 3-7
		//Accepts no arguments
		// Demonstrates overflow and unferflow of an integer

		//initalize testVar ( max val for a short)
		short testVar = 32767;

		//output testVar
		cout << "Maximum short integer value: " << testVar << endl;

		//add 1 to make it overflow and output it
		testVar = testVar + 1;
		cout << "\nAdd 1 to make testVar overflow:" << testVar << endl;

		//subtract 1 to make it underflow
		testVar = testVar - 1;
		cout << "Subtract 1 to make testVar underflow back to it's original value: " << testVar << endl; 

		cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

//Example Program 3-8
		//accepts no arguments
		//demonstrates overflow and unferflow with max float being 2.0e38

		//define variables
		float test;

		//multiply to overflow the float test and output results
		test = 2.0e38 * 1000;
		cout << "2.0e38 * 1000 results in the following overflow: " << test << endl;

		//divide to the underflow test and output the results
		test = 2.0e-38 / 2.0e38;
		cout << "2.0e-38 / 2.0e38 results in the following underflow: " << test << endl;

		cout << "\n\n---------------------------------------------------------------------------------------------------\n\n";

//Example Program 3-9
		//accepts no arguments
		//takes input from the user for the number of books read and the number of months to read them
		//make both integers
		//calculate the average number of books to read to meet the book goal. 
		//use type casting to prevent integer division

		//define variables
		int books, months;
		double perMonth;

		//print asking for number of books 
		cout << "How many books do you plan to read? ";
		cin >> books;

		//print asking for months
		cout << "\nHow many months will it take you to read them? ";

		//calculate the amount of books read per month
		perMonth = static_cast<double>(books) / months;

		//print amount read per month
		cout << "You will need to read " << perMonth << " books per month.";
}