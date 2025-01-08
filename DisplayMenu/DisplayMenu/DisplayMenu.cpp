// DisplayMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    int choice;

    //prints the menu's options
    cout << "Welcome to the Ch. 7 Program Menu " << endl;
    cout << "--------------------------------------------------------\n"; 
    cout << "1)\tExercise #12, Grade Book" << endl;
    cout << "2)\tExercise #16, World Series Winners" << endl;
    cout << "3)\tExercise #18, Tic-Tac-Toe" << endl;
    cout << "4)\tExercise #19, Magic 8 Ball" << endl;
    cout << "5)\tExercise #20, 1994 Gas Prices" << endl;
    cout << "6)\tExercise #22, Team Project (Theater Seating)" << endl;
    cout << "7)\tExit Menu" << endl;
    cout << "Choice:\t"; //prompts the user for a choice
    cin >> choice; //stores the choice 
    
    while (choice <= 6 && choice >= 1)
    {
        //prints the menu's options
        cout << "Welcome to the Ch.7 Program Menu " << endl;
        cout << "--------------------------------------------------------\n";
        cout << "1)\tExercise #12, Grade Book" << endl;
        cout << "2)\tExercise #16, World Series Winners" << endl;
        cout << "3)\tExercise #18, Tic-Tac-Toe" << endl;
        cout << "4)\tExercise #19, Magic 8 Ball" << endl;
        cout << "5)\tExercise #20, 1994 Gas Prices" << endl;
        cout << "6)\tExercise #22, Team Project (Theater Seating)" << endl;
        cout << "7)\tExit Menu" << endl;
        cout << "Choice:\t"; //prompts the user for a choice
        cin >> choice; //stores the choice
    }

    if (choice == 7)
    {
        cout << "Thank you for using the Ch. 7 Program Menu.\nExiting..";
    }
}