// Chap 2 Practice 10 Print Only Even Numbers from an Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int print_array(int even_number[], int size);

int main()
{
    const int size = 5;
    int number[size] = { 10, 15, 20, 25, 30 };

    print_array(number, size);
}
int print_array(int even_number[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (index % 2 == 0)
        {
            cout << even_number[index] << " ";
        }
    }
    return 0;
}