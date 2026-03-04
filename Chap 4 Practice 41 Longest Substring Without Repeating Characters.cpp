// Chap 4 Practice 41 Longest Substring Without Repeating Characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int longest_unique_substring(char text[])
{
    bool visited[256] = { false };

    int start_index = 0;
    int max_length = 0;

    for (int end_index = 0; text[end_index] != '\0'; end_index++)
    {
        char current_char = text[end_index];

        while (visited[(unsigned char)current_char])
        {
            visited[(unsigned char)text[start_index]] = false;
            start_index++;
        }

        visited[(unsigned char)current_char] = true;
        
        int current_length = end_index - start_index + 1;
        if (current_length > max_length)
            max_length = current_length;
    }

    return max_length;
}

int main()
{
    char text[200];
    cin.getline(text, 200);

    int result = longest_unique_substring(text);
    cout << result << endl;

    return 0;
}