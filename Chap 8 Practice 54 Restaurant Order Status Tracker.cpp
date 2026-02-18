// Chap 8 Practice 54 Restaurant Order Status Tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum OrderStatus
{
	Placed,
	Cooking,
	Ready,
	Delivered
};
int main()
{
	string user_input;
	OrderStatus status;

	cout << "Enter Current Status ( Placed / Cooking / Ready / Delivered ): ";
	cin >> user_input;


	if (user_input == "Placed")
		status = Placed;
	else if (user_input == "Cooking")
		status = Cooking;
	else if (user_input == "Ready")
		status = Ready;
	else if (user_input == "Delivered")
		status = Delivered;
	else
	{
		cout << "Invalid Input!";
		return 0;
	}


	switch (status)
	{
	case Placed:
		cout << "Order Placed";
		break;

	case Cooking:
		cout << "Order Cooking";
		break;

	case Ready:
		cout << "Order Ready";
		break;

	case Delivered:
		cout << "Order Delivered";
		break;

	default:
		cout << "Invalid Input";
	}

	return 0;
}
