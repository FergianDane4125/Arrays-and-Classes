// Chap 8 Practice 56 Smart Home Mode Controller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum SMARThome
{
	Home = 1,
	Away = 2,
	Night = 3,
	Vacation = 4
};
int main()
{
	int user_choice;
	cout << "Select Home Setting\n";
	cout << "1 - Home\n";
	cout << "2 - Away \n";
	cout << "3 - Night \n";
	cout << "4 - Vacation \n";
	cout << "Enter Your Choice:";
	cin >> user_choice;

	SMARThome Setting = (SMARThome)user_choice;

	switch (Setting)
	{
	case Home:
		cout << "Lights on";
		break;

	case Away:
		cout << "Doors locked";
		break;

	case Night:
		cout << "Lights Dimmed, Doors locked";
		break;

	case Vacation:
		cout << "Doors locked, have fun!";
		return 0;

	default:
		cout << "Invalid Input";
	}

	return 0;
}
