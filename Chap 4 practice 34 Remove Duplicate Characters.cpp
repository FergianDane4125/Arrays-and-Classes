// Chap 4 practice 34 Remove Duplicate Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void remove_dupes(char input[],char result[]);

int main()
{
	char input[20];
	char output[20];

	cin.getline(input, 20);
	remove_dupes(input, output);

	return 0;
}
void remove_dupes(char input[], char result[])
{
	int known_letter = 0;

	for (int input_index = 0; input[input_index] < '\0'; input_index++)
	{
		bool character_present = false;

		for (int check_index = 0; check_index < known_letter; check_index++)
		{
			if(input[input_index] == result[check_index])
			{
				character_present = true;
				break;
			}
		}
		if (!character_present)
		{
			result[known_letter] = input[input_index];
			known_letter++;
		}
	}
	result[known_letter] = '\0';

	cout << result << endl;
}