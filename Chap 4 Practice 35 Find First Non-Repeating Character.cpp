// Chapter 4 Practice 35 Find First Non-Repeating Character.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print_first(char input[], char result[]);

int main()
{
	char input[20];
	char output[20];

	cout << "Enter a string: ";

	cin.getline(input, 20);
	print_first(input, output);

	return 0;
}
void print_first(char input[], char result[])
{
	char unique = '\0';

	for (int input_index = 0; input[input_index] != '\0'; input_index++)
	{
		int character_count = 0;

		for (int check_index = 0; input[check_index] != '\0'; check_index++)
		{
			if (input[input_index] == input[check_index])
			{
				character_count++;
			}
		}
		if (character_count == 1)
		{
			unique = input[input_index];
			break;
		}
	}
	if (unique == '\0')
	{
		cout << "No unique characters." << endl;
	}
	else
	{
		cout << unique << endl;
	}
}
