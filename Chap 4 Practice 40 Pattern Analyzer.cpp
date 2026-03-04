// Chap 4 Practice 40 Pattern Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int find_pattern_index(char text[], char pattern[])
{
    int text_length = 0;
    int pattern_length = 0;

    while (text[text_length] != '\0')
        text_length++;

    while (pattern[pattern_length] != '\0')
        pattern_length++;

    for (int start = 0; start <= text_length - pattern_length; start++)
    {
        bool match = true;

        for (int p = 0; p < pattern_length; p++)
        {
            if (text[start + p] != pattern[p])
            {
                match = false;
                break;
            }
        }

        if (match)
            return start;
    }

    return -1;
}

int main()
{
    char text[200];
    char pattern[200];

    cin.getline(text, 200);
    cin.getline(pattern, 200);

    int index = find_pattern_index(text, pattern);
    cout << index << endl;

    return 0;
}