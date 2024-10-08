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
	string friend_1, friend_2, friend_3;
	//Program 5-15
	//Accepts no arguments
	//Opens a file named namesdemo.txt to write in 
	//And write four names into the file
	//Afterwards close the file

	//create file and open it
	ofstream outFile("C:\\Users\\2017696\\Desktop\\CPP-2024\\datafiles\\namesdemo.txt");


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
		cout << "All names sucessfully written to file: namesdemo.txt";
	}


	//create file and open it
	ofstream outFile("C:\\Users\\2017696\\Desktop\\CPP-2024\\datafiles\\demofriends.txt");

	if (!outFile)
		cout << "File demofriends.txt not found.";
	else
	{
		cout << "Enter your first friend's name: ";
		cin >> friend_1;

		cout << "Enter the second friend's name: ";
		cin >> friend_2;

		cout << "Enter the third friend's name: ";
		cin >> friend_3;

		outFile << friend_1 << endl << friend_2 << endl << friend_3 << endl;

		outFile.close();
		cout << "All of your friend's names have been sucessfully written to the file: demofriends.txt.";
	}



}
