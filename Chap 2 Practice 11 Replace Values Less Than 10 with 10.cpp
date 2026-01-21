// Chap 2 Practice 11 Replace Values Less Than 10 with 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int replace_value(int less_than[], int size);
int main()
{
	const int size = 5;
	int number[size] = { 5, 12, 8, 20, 3 };
	replace_value(number, size);

	return 0;
}
int replace_value(int less_than[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (less_than[index] < 10)
		{
			less_than[index] = 10;
			cout << less_than[index] << " ";
		}
		else
		{
			cout << less_than[index] << " ";
		}
	}
	return 1;
}