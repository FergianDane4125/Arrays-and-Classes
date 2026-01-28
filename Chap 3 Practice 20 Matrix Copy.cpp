// Chap 3 Practice 20 Matrix Copy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int max_row = 2;
	const int max_col = 3;
	int table_a[max_row][max_col];
	int table_b[max_row][max_col];

	cout << "Enter Values for Matrix A (2x3):" << endl;

	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			cout << "A [" << row << "] [" << col << "]: ";
			cin >> table_a[row][col];
			col + 1;
		}
	}

	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			table_b[row][col] = table_a[row][col];
		}
	}

	cout << "Matrix B (copy of A):" << endl;

	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			cout << table_b [row][col] << "\t";
		}
		cout << endl;
	}


	return 0;
}