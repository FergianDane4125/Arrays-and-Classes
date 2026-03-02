// Chap 9 Practice 61 Student Result Pass & Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string student_name;
	int marks;

public:
	void set_student_data(string name, int mark)
	{
		student_name = name;

		if (mark >= 0 && mark <= 100)
		{
			marks = mark;
		}
		else
		{
			marks = 0;
		}
	}
	bool is_pass()
	{
		{
			return marks >= 40;
		}
	}
	void display_result()
	{
		cout << "Student Name: " << student_name << endl;
		cout << "Student Marks: " << marks << endl;
		cout << "Pass or Fail: " << (is_pass() ? "PASS" : "Fail") << endl;
	}

};

int main()
{
	Student student_1;

	student_1.set_student_data("Dane", 41);
	student_1.display_result();

	return 0;
}
