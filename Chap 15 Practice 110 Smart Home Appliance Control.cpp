// Chap 15 Practice 110 Smart Home Appliance Control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Appliance
{
	public:
		virtual void turnOn() = 0;
};
class Fan : public Appliance
{
public:
	void turnOn()
	{
		cout << "Fan starts rotating\n";
	}
};
class AirConditioner : public Appliance
{
public:
	void turnOn()
	{
		cout << "AC starts cooling\n";
	}
};
int main()
{
	Fan fan_object;
	AirConditioner AC_object;

	fan_object.turnOn();
	AC_object.turnOn();

	return 0;
}
