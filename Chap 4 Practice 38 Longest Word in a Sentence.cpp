// Chap 4 Practice 38 Longest Word in a Sentence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print_longest_word(char sentence[])
{
    int longest_length = 0;
    int longest_start = 0;

    int current_length = 0;
    int current_start = 0;

    for (int index = 0; ; index++)
    {
        char current_char = sentence[index];

        // End of a word (space or end of string)
        if (current_char == ' ' || current_char == '\0')
        {
            if (current_length > longest_length)
            {
                longest_length = current_length;
                longest_start = current_start;
            }

            current_length = 0;
            current_start = index + 1;
        }
        else
        {
            current_length++;
        }

        if (current_char == '\0')
            break;
    }

    // Print the longest word
    for (int i = 0; i < longest_length; i++)
    {
        cout << sentence[longest_start + i];
    }

    cout << endl;
}

int main()
{
    char sentence[200];
    cin.getline(sentence, 200);

    print_longest_word(sentence);

    return 0;
}