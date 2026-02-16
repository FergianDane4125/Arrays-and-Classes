// Chap 6 Practice Convert Celsius to Fahrenheit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct temp_record
{
    float celsius;
};
void convert_to_fahrenheit(temp_record &temp_ref)
{
    temp_ref.celsius = (temp_ref.celsius * (9.0 / 5.0)) + 32.0;
    cout << "Fahrenheit: " << temp_ref.celsius << endl;
}
int main()
{
    temp_record temp;

    cout << "Enter Temperature in Celsius: ";
    cin >> temp.celsius;

    cout << "Temperature before function call: " << temp.celsius << endl;

    convert_to_fahrenheit(temp);

    cout << "Temperature after function call: " << temp.celsius << endl;

    return 0;
}
