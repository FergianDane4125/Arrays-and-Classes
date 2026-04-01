// Chapter 11 Practice 76 Student Name.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string student_name;

public:
	Student();
	void displayname();
};
Student::Student()
{
	student_name = "Unknown";
}
void Student::displayname()
{
	cout << "Student Name: " << student_name << endl;
}

int main()
{
	Student name;

	name.displayname();

	return 0;

}

