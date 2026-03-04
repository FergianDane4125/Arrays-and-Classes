// Chap 4 Practice 39 Compress String (Run-Length Encoding).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void compress_string(char word[])
{
    int index = 0;

    while (word[index] != '\0')
    {
        char current_char = word[index];
        int count = 1;

        int next_index = index + 1;
        while (word[next_index] == current_char)
        {
            count++;
            next_index++;
        }

        cout << current_char << count;

        index = next_index;
    }

    cout << endl;
}

int main()
{
    char word[200];
    cin.getline(word, 200);

    compress_string(word);

    return 0;
}