// Chap 8 Practice 54 Smart Device Power State.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum PowerState
{
	Off,
	On,
	Sleep
};
int main()
{
	PowerState device_state = Sleep;

	switch (device_state)
	{
	case Off:
		cout << "Device Turned Off";
		break;

	case On:
		cout << "Device Running";
		break;

	case Sleep:
		cout << "Device is in power-saving mode";
		break;
	}

	return 0;
}
