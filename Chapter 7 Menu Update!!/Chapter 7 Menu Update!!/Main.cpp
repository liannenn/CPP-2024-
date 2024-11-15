#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int choice = 0;

    do
    {
        cout << "Welcome to the Chapter 7 Exercise Menu \n";
        cout << "1.\tExercise 7-12 Grade Book\n";
        cout << "2.\tExercise 7-16 World Series Winners\n";
        cout << "3.\tExercise 7-18 Tic-Tac-Toe\n";
        cout << "4.\tExercise 7-19 Magic 8 Ball\n";
        cout << "5.\tExercise 7-20 1994 Gas Prices\n";
        cout << "Choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 6);

    cout << "-----------------\n";

    return choice;
}