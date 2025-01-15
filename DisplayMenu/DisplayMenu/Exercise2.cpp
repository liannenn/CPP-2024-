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

int Exercise2()
{
	string team_names; //initializes variable to read TeamNames
	double amt_of_teams = 29;
	//words in each name alphabetically
	int letters_per_name[28] = { 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2, 2, 3, 3, 2, 2, 3, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 2 };

	//makes TeamNames 
	ofstream TeamNames("C:\Users\2017696\Desktop\CPP-2024\TeamNames.txt");
	ofstream WorldSeriesWinners("C:\Users\2017696\Desktop\CPP-2024\WorldSeriesWinners.txt");

	cout << "The following teams have won the World Series at least once: \n";

	for (i=0; i<=amt_of_teams; i++)
	{cout << 
	}

	TeamNames.close();
	WorldSeriesWinners.close();

}