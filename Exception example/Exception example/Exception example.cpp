// Exception example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
    try {
        double x = 0;
        // try block
        // get input from the user
        cout << "Enter a value: ";
        cin >> x;


        if (x == 0) {
            //throws runtime error if div by zero 
            throw runtime_error("Division by zero");
        }

        else {
            double y = 10 / x;
            cout << 10 << " \ " << x << "=" << y << endl;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
