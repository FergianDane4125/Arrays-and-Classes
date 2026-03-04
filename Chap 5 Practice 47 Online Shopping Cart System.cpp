// Chap 5 Practice 47 Online Shopping Cart System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Product
{
	int product_ID;
	char product_name[50];
	float price;
	int quantity;
};
int main()
{
	Product cart[2];
	float total_cost = 0.0;

	for (int index = 0; index < 2; index++)
	{
		cout << "Enter details for product " << index + 1 << ":" << endl;

		cout << "Product ID: ";
		cin >> cart[index].product_ID;

		cout << "Product name: ";
		cin >> cart[index].product_name;

		cout << "Price: ";
		cin >> cart[index].price;

		cout << "Quantity: ";
		cin >> cart[index].quantity;
	}

	cout << "\nShopping Cart Details:" << endl;

	for (int index = 0; index < 2; index++)
	{
		float cost = cart[index].price * cart[index].quantity;
		total_cost += cost;

		cout << "Product name: " << cart[index].product_name << endl;
		cout << "Cost: $" << cost << endl;
		cout << "-----------------------------" << endl;
	}

	cout << "Total Cost: $" << total_cost << endl;

	return 0;
}