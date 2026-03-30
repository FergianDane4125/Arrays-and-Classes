// Chap 14 Practice 102 Student Result Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class ResultAnalyzer
{
public:
	int calculateResult(int mark1, int mark2)
	{
		return mark1 + mark2;
	}
	double calculateResult(int mark1, int mark2, int mark3)
	{
		return mark1 + mark2 + mark3;
	}
	double calculateResult(double total_marks, int subjects)
	{
		return total_marks / subjects;
	}

};

int main()
{
	ResultAnalyzer mark_object;

	int mark1;
	int mark2;
	int mark3;
	int subjects = 3;
	

	cout << "Enter Marks for Subject 1: ";
	cin >> mark1;
	cout << "Enter Marks for Subject 2: ";
	cin >> mark2;
	cout << "Enter Marks for Subject 3: ";
	cin >> mark3;

double total_marks = mark1 + mark2 + mark3;

	cout << "Total of 2 Subjects: " << mark_object.calculateResult( mark1,  mark2) << endl;
	cout << "Total of 3 Subjects: " << mark_object.calculateResult( mark1,  mark2,  mark3) << endl;
	cout << "Average Marks: " << mark_object.calculateResult( total_marks,  subjects) << endl;

	return 0;
}