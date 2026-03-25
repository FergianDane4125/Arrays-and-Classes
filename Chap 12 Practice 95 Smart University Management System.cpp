// Chap 12 Practice 95 Smart University Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};
class AcademicInfo
{
public:
	string department_name;
};
class SportsInfo
{
public:
	string sports_info;
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
class StudentLeader : public GraduateStudent, public SportsInfo, public AcademicInfo
{
public:
	string leadership_role;
};
class Teacher : public Person, public AcademicInfo
{
public:
	string subject_name;
};

int main()
{
	StudentLeader student_1;
	Teacher teacher_1;

	getline(cin, student_1.name);
	cin >> student_1.age;
	cin.ignore();
	getline(cin, student_1.department_name);
	cin >> student_1.roll_number;
	cin.ignore();
	getline(cin, student_1.degree_name);
	getline(cin, student_1.sports_info);
	getline(cin, student_1.leadership_role);

	getline(cin, teacher_1.name);
	cin >> teacher_1.age;
	cin.ignore();
	getline(cin, teacher_1.department_name);
	getline(cin, teacher_1.subject_name);


	cout << "----- Student Leader Details -----\n";

	cout << "Name: " << student_1.name << endl;
	cout << "Age: " << student_1.age << endl;
	cout << "Department : " << student_1.department_name << endl;
	cout << "Roll Number: " << student_1.roll_number << endl;
	cout << "Degree: " << student_1.degree_name << endl;
	cout << "Sport: " << student_1.sports_info << endl;
	cout << "Leadership Role: " << student_1.leadership_role << endl;

	cout << "----- Student Leader Details -----\n";

	cout << "Name: " << teacher_1.name << endl;
	cout << "Age: " << teacher_1.age << endl;
	cout << "Department : " << teacher_1.department_name << endl;
	cout << "Subject: " << teacher_1.subject_name << endl;


	return 0;
}