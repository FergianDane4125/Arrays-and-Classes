// Chap 2 Practice 14 Student Marks Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void input_marks(int student_marks[], int student_count);
void display_marks(int student_marks[], int student_count);
int total_marks(int student_marks[], int student_count);
float average_marks(int student_marks[], int student_count);
int count_passed_students(int student_marks[], int student_count);
int highest_mark(int student_marks[], int student_count);

int main()
{
	const int student_count = 5;
	int student_marks[student_count];
	int menu_choice = 0;

	cout << "Enter Marks for " << student_count << " students" << endl;
	input_marks(student_marks, student_count);

	do
	{
		cout << endl;
		cout << "1. Display All Marks\n";
		cout << "2. Find Total Marks\n";
		cout << "3. Find Average Marks\n";
		cout << "4. Passed Students (pass mark = 40)\n";
		cout << "5. Find Highest Mark\n";
		cout << "6. Exit\n";
		cout << "Enter Choice : ";
		cin >> menu_choice;
		cout << endl;
		switch (menu_choice)
		{
		case 1:
		{
			display_marks(student_marks, student_count);
		}
		break;

		case 2:
		{
			total_marks(student_marks, student_count);
		}
		break;

		case 3:
		{
			average_marks(student_marks, student_count);
		}
		break;

		case 4:
		{
			count_passed_students(student_marks, student_count);
		}
		break;

		case 5:
		{
			highest_mark(student_marks, student_count);
		}
		break;

		case 6:
		{
			cout << "Exiting Program." << endl;
		}
		break;
		{
			default:
			cout << "Invalid Choice. Please Select 1-6"<< endl;
			break;
		}
		}



	} while (menu_choice != 6);
	return 0;
}
void input_marks(int student_marks[], int student_count)
{
	int student_number = 1;
	for (int count = 0; count < student_count; count++)
	{
		cout << "Student " << student_number << " mark: ";
		cin >> student_marks[count];
		student_number++;
	}
	cout << endl;
}
void display_marks(int student_marks[], int student_count)
{
	int student_number = 1;
	for (int count = 0; count < student_count; count++)
	{
		cout << "Student " << student_number << " mark: ";
		cout << student_marks[count] << endl;
		student_number++;
	}
}
int total_marks(int student_marks[], int student_count)
{
	int total = 0;
	for (int count = 0; count < student_count; count++)
	{
		total += student_marks[count];
	}
	cout << "Total Marks: " << total << endl;
	return total;
}
float average_marks(int student_marks[], int student_count)
{
	float average = 0;
	for (int count = 0; count < student_count; count++)
	{
		average += student_marks[count];
	}
	average = average / student_count;

	cout << "Average Marks: " << average << endl;
	return average;
}
int count_passed_students(int student_marks[], int student_count)
{
	int pass_count = 0;
	for (int count = 0; count < student_count; count++)
	{
		if (student_marks[count] >= 40)
		{
			pass_count++;
		}
	}
	cout << "Number of Passed Students: " << pass_count << endl;
	return pass_count;
}
int highest_mark(int student_marks[], int student_count)
{
	int highest = student_marks[0];
	for (int count = 0; count < student_count; count++)
	{
		if (student_marks[count] > highest)
		{
			highest = student_marks[count];
		}
	}
	cout << "Highest Mark: " << highest << endl;
	return highest;
}