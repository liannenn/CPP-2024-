#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	//Program 5-15
	//Accepts no arguments
	//Opens a file named namesdemo.txt to write in 
	//And write four names into the file
	//Afterwards close the file

	//create file and open it
	ofstream outFile;

	//opens the file 
	outFile.open("namesdemo.txt");

	if (!outFile)
		cout << "File not found.";
	else
	{
	//outputs info to user
		cout << "Writing these names to the file:\n"
			<< "Tom Bombadil\n"
			<< "Frodo Baggins\n"
			<< "Gandalf The White\n"
			<< "Goldberry\n" << endl;

	//--------------------------------------------------
		outFile << "Tom Bombadil\n"
			<< "Frodo Baggins\n"
			<< "Gandalf The White\n"
			<< "Goldberry\n" << endl;

	//close the file and output a message 
		outFile.close();
		cout << "All names sucessfully written to file: namesdemon.txt";
	}
}
