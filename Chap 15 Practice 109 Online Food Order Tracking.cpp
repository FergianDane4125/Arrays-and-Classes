// Chap 15 Practice 109 Online Food Order Tracking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class OrderStatus
{
	public:
		virtual void showStatus()
		{
			cout << "Status\n";
		}
};
class Preparing : public OrderStatus
{
	public:
		 void showStatus()
		{
			cout << "Order is being prepared\n";
		}
};
class OutForDelivery : public OrderStatus
{
	public:
		 void showStatus()
		{
			cout << "Order is out for delivery\n";
		}
};
class Delivered : public OrderStatus
{
	public:
		void showStatus()
		{
			cout << "Order has been delivered\n";
		}
};

int main()
{
	OrderStatus* status_pointer;

	Preparing prep_object;
	OutForDelivery out_for_deli_object;
	Delivered delievered_object;

	status_pointer = &prep_object;
	status_pointer->showStatus();

	status_pointer = &out_for_deli_object;
	status_pointer->showStatus();

	status_pointer = &delievered_object;
	status_pointer->showStatus();

	return 0;
}