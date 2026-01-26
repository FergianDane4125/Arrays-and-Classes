// Chap 3 Practice 19 Daily Temperature Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int max_cities = 3;
const int max_days = 4;

void read_array(int temp[][max_days], int max_cities);
void print_array(int temp[][max_days], int max_cities);
int main()
{
	int temp[max_cities][max_days];
	cout << "Enter Temperature for 3 cities over 4 days: " << endl;

	read_array(temp, max_cities);
	print_array(temp, max_cities);
	return 0;
}
void read_array(int temp[][max_days], int max_cities)
{
	for (int row = 0; row < max_cities; row++)
	{
		
		cout << "City " << row + 1 << ": " << endl;

		for (int col = 0; col < max_days; col++)
		{
			cout << "\tDays " << col + 1 << ": ";
			cin >> temp[row][col];
			
		}
		
	}
}
void print_array(int temp[][max_days], int max_cities)
{
	cout << "\n\tDay 1\tDay 2\tDay 3\tDay 4" << endl;
	for (int row = 0; row < max_cities; row++)
	{
		cout << "City " << row + 1 << ": ";
		for (int col = 0; col < max_days; col++)
		{
			cout << temp[row][col] << "\t";
		}
		cout << endl;
	}
}