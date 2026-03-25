// Chap 12 Practice 92 Result and Attendance System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Marks
{
	public:
		int marks_scored;
};
class Attendance
{
	public:
		double attendance_percentage;
};
class StudentRecord : public Marks, public Attendance
{
	public:
		string student_name;
};
int main()
{
	StudentRecord student_1;

	getline(cin, student_1.student_name);
	cin >> student_1.marks_scored;
	cin >> student_1.attendance_percentage;

	cout << "Student Name: " << student_1.student_name << endl;
	cout << "Marks: " << student_1.marks_scored << endl;
	cout << "Attendance : " << student_1.attendance_percentage << endl;

	if (student_1.attendance_percentage >= 75)
	{
		cout << "Eligible for Exam: Yes\n";
	}
	else
	{
		cout << "Eligible for Exam: No\n";
	}

	return 0;
}