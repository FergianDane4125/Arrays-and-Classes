// Chapter 11 Practice 80 City Name Default Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class City
{
private:
	string city_name;

public:
	City();
	void displayCity();
};
City::City()
{
	city_name = "Montgomery";
}
void City::displayCity()
{
	cout << "City Name: " << city_name << endl;
}

int main()
{
	City city;

	city.displayCity();

	return 0;
}
