// Chap 4 Practice 36 Replace Spaces with -.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void replace_spaces(char sentence[])
{
    for (int index = 0; sentence[index] != '\0'; index++)
    {
        if (sentence[index] == ' ')
        {
            sentence[index] = '-';
        }
    }
}

int main()
{
    char sentence[200];
    cin.getline(sentence, 200);

    replace_spaces(sentence);

    cout << sentence << endl;

    return 0;
}