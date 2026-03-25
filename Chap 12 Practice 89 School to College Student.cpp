// Chap 12 Practice 89 School to College Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
class GraduateStudent : public Student
{
	public: 
		string degree_name;
};
int main()
{
	GraduateStudent student_1;

	cin >> student_1.name;
	cin >> student_1.roll_number;
	cin >> student_1.degree_name;

	cout << "Name: " << student_1.name << endl;
	cout << "Roll Number: " << student_1.roll_number << endl;
	cout << "Degree: " << student_1.degree_name << endl;

	return 0;
}
