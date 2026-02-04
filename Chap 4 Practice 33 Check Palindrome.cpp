// Chap 4 Practice 33 Check Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void check(char print[]);

int main()
{
	char input[20];
	cin.getline(input, 20);

	check(input);

	return 0;

}
void check(char print[])
{
	int length = 0;

	while (print[length] != '\0')
	{
		length++;
	}

	int left_index = 0;
	int right_index = length - 1;
	bool palindrome = true;

	while (left_index < right_index)
	{
		
		if (print[left_index] != print[right_index])
		{
			palindrome = false;
			break;
		}
		left_index++;
		right_index--;
	}
	if (palindrome)
	{
		cout << "palindrome";
	}
	else
	{
		cout << "not palindrome";
	}

}