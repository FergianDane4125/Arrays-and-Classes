// Chap 3 Practice 22 Highest Value in Each Row.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int students = 3;
	const int subjects = 4;
	int marks[students][subjects];

	
	for (int row = 0; row < students; row++)
	{
		for (int col = 0; col < subjects; col++)
		{
			cout << "Enter marks for student " << row + 1 << " Subject " << col + 1 << ": ";
			cin >> marks[row][col];
			row + 1;
			col + 1;
		}
		cout << endl;
	}
	/* 
	for (int row = 0; row < students; row++)
	{
		for (int col = 0; col < subjects; col++)
		{
			cout << marks[row][col] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	
	*/
	for (int row = 0; row < students; row++)
	{
		int max = marks[row][0];
		for (int col = 0; col < subjects; col++)
		{
			if (marks[row][col] > max)
			{
				max = marks[row][col];
			}
		}
		cout << "Student " << (row + 1) << "'s highests = " << max << endl;
	}
	return 0;
}

