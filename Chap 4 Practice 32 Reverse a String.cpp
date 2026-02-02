// Chap 4 Practice 32 Reverse a String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

void reverse_string(char print[]);

int main()
{
	char input[20];
	cin.getline(input, 20);

	reverse_string(input);

	return 0;
}
void reverse_string(char print[])
{
	int length = 0;

	while (print[length] != '\0')
	{
		length++;
	}

	int left_index = 0;
	int right_index = length - 1;

	while (left_index < right_index)
	{
		char temporary = print[left_index];
		print[left_index] = print[right_index];
		print[right_index] = temporary;

		left_index++;
		right_index--;
	}
	cout << print << endl;

}