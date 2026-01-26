// Chap 3 Practice 18 Classroom Seating Chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 3;
const int max_col = 4;
void read_seats(int seats[][max_col], int max_row);
void print_seats(int  seats[][max_col], int max_row);

int main()
{
	int seats[max_row][max_col];
	read_seats(seats, max_row);
	print_seats(seats, max_row);

	return 0;
}
void read_seats(int seats[][max_col], int max_row)
{
	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			cout << "Enter Seat[" << row << "][" << col << "]: ";
			cin >> seats[row][col];
		}
	}
}
void print_seats(int  seats[][max_col], int max_row)
{
	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			cout << seats[row][col] << "\t";
		}
		cout << endl;
	}
}