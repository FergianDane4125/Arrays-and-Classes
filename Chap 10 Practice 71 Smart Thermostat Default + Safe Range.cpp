// Chap 10 Practice 71 Smart Thermostat Default + Safe Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Thermostat
{
private:
	float temperature;

public:
	Thermostat()
	{
		temperature = 24;
	}

	void set_temperature(float temp)
	{
		if (temp >= 16 && temp <= 30)
		{
			temperature = temp;
		}
		else
		{
			cout << "Invalid Temperature\n";
		}
	}
	float get_temperature()
	{
		return temperature;
	}
};

int main()
{
	Thermostat temp_change;
	float user_input;

	cout << "Enter new temperature into thermostat: ";
	cin >> user_input;
		
	temp_change.set_temperature(user_input);

	cout << "Temperature set to: " << temp_change.get_temperature() << endl;
	
	return 0;
}