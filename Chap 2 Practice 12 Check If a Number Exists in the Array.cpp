// Chap 2 Practice 12 Check If a Number Exists in the Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void search_element(int number[], int size, int search_num);
int main()
{
	const int size = 5;
	int number[size] = { 4, 7, 9, 12, 15 };
	int check;

	cout << "Enter the number :";
	cin >> check;

	search_element(number, size, check);

	return 0;
}
void search_element(int number[], int size, int search_num)
{
	bool flag = false;

	for (int index = 0; index < size; index++)
	{
		if (number[index] == search_num)
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "Found";
	}
	else
	{
		cout << "Not Found";
	}
}