// Chap 5 Practice 46 University Course Registration System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

struct Student
{
	int ID;
	char name[100];
	char course_code[20];
	int credits;
};
int main()
{
	Student students[4];

	int total_credits = 0;
	for (int index = 0; index < 4; index++)
	{
		cout << "Enter Student " << (index + 1) << " ID: ";
		cin >> students[index].ID;
		
		cin.ignore();

		cout << "Enter Student Full Name: ";
		cin.getline(students[index].name, 100);

		cout << "Enter Course Code: ";
		cin.getline(students[index].course_code, 20);

		cout << "Enter Number of Credits: ";
		cin >> students[index].credits;
		
		cout << endl;

		total_credits = total_credits + students[index].credits;
	}

	cout << "\n----- Student Course Resgistration -----\n";

	for (int count = 0; count < 4; count++)
	{
		cout << "Student " << count + 1 << " ID: " << students[count].ID << endl;
		cout << "Student " << count + 1 << " Name: " << students[count].name << endl;
		cout << "Student " << count + 1 << " Course Code: " << students[count].course_code << endl;
		cout << "Student " << count + 1 << " Course Credits: " << students[count].credits << endl << endl;
	}
	
	cout << "Total Student Credits: " << total_credits << endl;

	return 0;
}