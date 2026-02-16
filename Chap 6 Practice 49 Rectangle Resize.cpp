// Chap 6 Practice 49 Rectangle Resize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int width;
};
void resize_rectangle(rectangle rect_copy, int factor)
{
    int area;
    rect_copy.length = rect_copy.length * factor;
    rect_copy.width = rect_copy.width * factor;
    area = rect_copy.length * rect_copy.width;
    cout << "New Area inside Function (copy): " << area << endl;
}
int main()
{
    rectangle rect_main;
    int factor_1;
    int area;

    cout << "Length: ";
    cin >> rect_main.length;
    cout << "Width: ";
    cin >> rect_main.width;
    cout << "Factor: ";
    cin >> factor_1;

    area = rect_main.length * rect_main.width;

    cout << "Area before function call: " << area << endl;

    resize_rectangle(rect_main, factor_1);

    cout << "Area after function call: " << area << endl;

    return 0;
}
