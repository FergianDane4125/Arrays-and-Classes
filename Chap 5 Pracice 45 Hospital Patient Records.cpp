// Chap 5 Pracice 45 Hospital Patient Records.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

struct Records
{
	int patient_id;
	char name[50];
	float body_temp;
};
int main()
{
	Records patient[5];

	for (int index = 0; index < 5; index++)
	{
		cout << "Enter Patient " << index + 1 << " ID: ";
		cin >> patient[index].patient_id;
		cin.ignore();

		cout << "Enter Patient Full Name: ";
		cin.getline(patient[index].name, 50);

		cout << "Enter Patient Temperature: ";
		cin >> patient[index].body_temp;
		cout << endl;
	}

	cout << "------ Patient Records ------\n \n";

	for (int count = 0; count < 5; count++)
	{
		cout << "Patient " << count + 1 << " ID: " << patient[count].patient_id << endl;
		cout << "Patient " << count + 1 << " Name: " << patient[count].name << endl;
		cout << "Patient " << count + 1 << " Body Temperature: " << patient[count].body_temp << endl << endl;
	}

	return 0;
}