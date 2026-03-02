// Chap 9 Practice 62 Rectangle Area + Perimeter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle
{
private:
	float length;
	float width;

public:
	void set_dimensions(float rect_length, float rect_width)
	{
		length = rect_length;
		width = rect_width;
	}
	float get_area()
	{
		return length * width;
	}
	float get_perimeter()
	{
		return 2 * (length + width);
	}
	void display_details()
	{
		cout << "Width: " << width << endl;
		cout << "Length: " << length << endl;
		cout << "Area: " << get_area() << endl;
		cout << "Perimeter: " << get_perimeter() << endl;
	}
};
int main()
{
	Rectangle rect_1;

	rect_1.set_dimensions(100.0, 100.0);
	rect_1.display_details();

	return 0;
}