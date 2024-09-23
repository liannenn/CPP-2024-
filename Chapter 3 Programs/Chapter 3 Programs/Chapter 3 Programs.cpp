#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
//Exercise #4 - Average Rainfall:

	//create variables month_1, month_2, and month_3
	string month_1, month_2, month_3;
	double rain_1, rain_2, rain_3, average_rain, total_rain;
	const double three = 3;

	//get an input for the first month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_1;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_1 << ": ";
	cin >> rain_1; // store amount of rain 

	//get an input for the second month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_2;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_2 << ": ";
	cin >> rain_2; // store amount of rain 

	//get an input for the last month
	cout << "Enter a month to record rainfall for: ";
	cin >> month_3;

	//ask for the amount of rainfall
	cout << "Enter the rainfall for " << month_3 << ": ";
	cin >> rain_3; // store amount of rain 

	
	//calculate the average amount of rain
	total_rain = rain_1 + rain_2 + rain_3;
	average_rain = total_rain/three;
	
	//print the months and the average inches of rain for the months
	cout << "\nThe average rainfall for the months of " << month_1 << ", " << month_2 << " and " << month_3 << "is: " << average_rain << " inches of rain." << endl;
	
	cout << "\n-------------------------------------------------------------------------------------\n\n";

//Exercise #6 - Ingredient Adjuster:
	//create recipe, this reciple yields 48 cookies
	const double sugar = 1.5, butter = 1, flour = 2.75, recipe_yield = 48; //set the reciple as a constant
	double amount_of_cookies, sugar_needed, butter_needed, flour_needed, batches;

	//ask the amount of cookies that need to be made
	cout << "Enter the number of cookies: ";
	cin >> amount_of_cookies;

	//calculate how many batches are in the amount needed
	batches = amount_of_cookies / recipe_yield;
	
	//calculate the sugar needed
	sugar_needed = sugar * batches;
	//calculate the butter needed
	butter_needed = butter * batches;
	//calculate the flour needed
	flour_needed = flour * batches;

	//print the calculations for the amount of cups needed per each ingredient
	cout << "\nTo make " << amount_of_cookies << " cookies, you will need:" << endl; //print cookies
	cout << setprecision(3) << sugar_needed << " cups of sugar" << endl; //print cups of sugar
	cout << butter_needed << " cups of butter" << endl; //print cups of butter
	cout << flour_needed << " cups of flour" << endl; //print cups of flour


	cout << "\n-------------------------------------------------------------------------------------\n\n";

//Exercise #17 - Math Tutor:
	//write a program can be used as a tutor for a young student
	
	//create variables
	double number_1, number_2, total;
	const int maxValue = 500, minValue = 0; //create a constant to make a range for the number
	char ch; //define a char variable to take an input to reveal your answer

	//system time
	unsigned seed = time(0);

	//create a randomized number 
	number_1 = (rand() % (maxValue - minValue) +1) + minValue;
	number_2 = (rand() % (maxValue - minValue) +1) + minValue;

	//calculate the total of the two randomized numbers
	total = number_1 + number_2;

	//print the equation
	cout << setw(5) << number_1 << endl << "+ " << number_2 << endl << "-----";
	
	//take input to reveal your answer
	ch = cin.get();

	//reveal your answer
	cin.get(ch);
	cout << setw(5) << total; 

	cout << "\n-------------------------------------------------------------------------------------\n\n";

	
//Exercise #19 - Monthly Payments:
	//calculate the monthly payment on a loan
	double month_int, payments_done_, loan_amt, ann_rate, amount_paid, interest_paid, adj_rate;
	const double num_months = 12;
	const double one_hun = 100;
	#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    /*Exercise #25 - Word Game:
   Write a program that plays a word game with the user, like Mad Libs.*/
    
    //initialize variables
    string name, age, city, college, profession, animal, animal_name;
    
    //ask for name
    cout << "What is your name? ";
    cin >> name;
    
    //ask for age
    cout << "What is your age? ";
    cin >> age;
    
    //ask for city
    cout << "What is your city's name? ";
    cin >> city;
    
    //ask for college
    cout << "What is your college's name? ";
    cin >> college;
    
    //ask for their profession
    cout << "What is your profession? ";
    cin >> profession;
    
    //ask for their type of animal
    cout << "What is your pet? ";
    cin >> animal;
    
    //ask for their pet's name
    cout << "What is the name of your pet? ";
    cin >> animal_name;
    
    //print the story
    cout << "\n\nThere once was a person named " << name << " who lived in " << city << ". At the age of " << age << " " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << animal_name << ". They both lived happily ever after.";
}

  /*Exercise #20 - Pizza Pi:
    Joe’s Pizza Palace needs a program to calculate the number of slices of pizza any size can be divided into.*/
    
    //initialize variables
    double diameter, radius, slices, people, slices_per_person, total_pizzas, pizza_area;
    const double pi=3.14159, area_of_slice=14.125;
    
    //ask and store the diameter of the pizza
    cout << "Enter the diameter of the pizza in inches: ";
    //stores diameter in the variable diameter
    cin >> diameter;
    
    //calculate the amount of slices in a pizza
    radius = diameter/2;
    pizza_area = pow(radius, 2)*pi;
    slices = pizza_area/area_of_slice;
    
    //print the amount of slices per the diameter inputted for a slices
    cout << "A " << diameter << " inch pizza contains about " << setprecision(3) << slices << " slices.";
    
    //ask how many people will be attending
    cout << "\n\nHow many people will be attending? ";
    cin >> people;
    
    //ask and store how many slices will be attended
    cout << "How many slices per person? ";
    //stores slices per person in the variable slices_per_person
    cin >> slices_per_person;
    
     //calculates the total amount of pizza(s) needed
    total_pizzas = slices_per_person*people;
    total_pizzas = total_pizzas/slices;
    
    //print the total pizzas that need to be bought
    cout << "\nYou will need to buy " << setprecision(2) << total_pizzas << " pizzas.";
    

}
