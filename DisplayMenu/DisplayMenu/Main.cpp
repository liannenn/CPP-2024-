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

//declare function prototypes
int DisplayMenu();
int Exercise1();
int Exercise2();
int Exercise3();
int Exercise4();
int Exercise5();
int Exercise6();


int main()
{
    int choice = DisplayMenu();

    switch (choice)
    {
    case 1:
        Exercise1();
        break;
    case 2:
        Exercise2();
        break;
    case 3:
        Exercise3();
        break;
    case 4:
        Exercise4();
        break;
    case 5:
        Exercise5();
        break;
    case 6:
        Exercise6();
        break;
    case 7:
        cout << "Thank you for using the Ch. 7 Program Menu.\nExiting..";
    
}

