// Chap 5 Practice 44 Student Records Using Loop Array of Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Student
{
	int roll_number;
	char name[50];
	float marks;
};
int main()
{
	Student students[3];

	for (int index = 0; index < 3; index++)
	{
		cout << "Enter Student roll number: ";
		cin >> students[index].roll_number;
		cin.ignore();

		cout << "Enter Student Full Name: ";
		cin.getline(students[index].name,20);

		cout << "Enter Student Marks: ";
		cin >> students[index].marks;
	
	}

	for (int count = 0; count < 3; count++)
	{
		cout << "Student " << count + 1 << " Roll number: " << students[count].roll_number << endl;
		cout << "Student " << count + 1 << " Name: " << students[count].name << endl;
		cout << "Student " << count + 1 << " Marks: " << students[count].marks << endl;
	}

	return 0;
}