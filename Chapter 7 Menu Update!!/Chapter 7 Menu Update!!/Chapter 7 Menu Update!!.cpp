#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

//delcare function prototypes
int DisplayMenu();
int Exercise1();
int Exercise2();

int main()
{
	int choice = DisplayMenu();
	while (choice != 6)
	{
		switch (choice)
		{
		case 1:
			Exercise1();
			break;
		case2:
			Exercise2();
			break;
		case 3: 
		}
		choice = DisplayMenu();
	}
}
