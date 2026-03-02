// Chap 9 Practice 64 Phone Battery Level (Charging & Using).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class PhoneBattery
{
private:
	int battery_level;

public:
	PhoneBattery()
	{
		battery_level = 50;
	}

	void charge(int amount)
	{
		if (battery_level >= 100)
		{
			cout << "Battery can not excede 100. Please remove from charger." << endl;
		}
		else
		{
			battery_level += amount;
		}

	}
	void use_phone(int minutes)
	{
		battery_level -= minutes;
	}
	void display_battery()
	{
		cout << "Battery: " << battery_level << "%" << endl;
	}
};
int main()
{
	PhoneBattery phone_1;

	phone_1.charge(40);
	phone_1.use_phone(20);
	phone_1.display_battery();

	return 0;
}
