// Chap 12 Practice 93 School People.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
};
class Student : public Person
{
public:
	int roll_number;
};
class Teacher : public Person
{
public:
	string subject_name;
};
int main()
{
	Student student_1;
	Teacher teacher_1;

	getline(cin, student_1.name);
	cin >> student_1.roll_number;
	cin.ignore();
	getline(cin, teacher_1.name);
	getline(cin, teacher_1.subject_name);

	cout << "Student Name: " << student_1.name << endl;
	cout << "Roll Number: " << student_1.roll_number << endl;
	cout << "Teacher Name : " << teacher_1.name << endl;
	cout << "Subject : " << teacher_1.subject_name << endl;

	return 0;
}