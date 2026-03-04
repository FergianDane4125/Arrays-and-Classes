// Chap 4 Practice 37 Check if Two Strings are Anagram (case-sensitive, ignore spaces).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool are_anagrams(char first[], char second[])
{
    int first_count[26] = { 0 };
    int second_count[26] = { 0 };

    for (int index = 0; first[index] != '\0'; index++)
    {
        char current_char = first[index];

        if (current_char == ' ')
            continue;

        if (current_char >= 'a' && current_char <= 'z')
        {
            int position = current_char - 'a';
            first_count[position]++;
        }
    }

    for (int index = 0; second[index] != '\0'; index++)
    {
        char current_char = second[index];

        if (current_char == ' ')
            continue;

        if (current_char >= 'a' && current_char <= 'z')
        {
            int position = current_char - 'a';
            second_count[position]++;
        }
    }
    for (int position = 0; position < 26; position++)
    {
        if (first_count[position] != second_count[position])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    char first_line[200];
    char second_line[200];

    cin.getline(first_line, 200);
    cin.getline(second_line, 200);

    if (are_anagrams(first_line, second_line))
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl;
    }

    return 0;
}