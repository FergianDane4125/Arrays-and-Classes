// Chap 2 Practice 13 Count Passed Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void count_pass(int marks[], int size);
int main()
{
	const int size = 5;
	int marks[size] = { 35, 78, 40, 22, 90 };

	count_pass(marks, size);

	return 0;
}
void count_pass(int marks[], int size)
{
	int student = 0;
	for (int index = 0; index < size; index++)
	{
		
		if (marks[index] >= 40)
		{
			student++;
		}
	}
	cout << "Students passed: " << student;
}