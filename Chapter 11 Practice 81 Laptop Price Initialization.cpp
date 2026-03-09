// Chapter 11 Practice 81 Laptop Price Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Laptop
{
private:
	float laptop_price;

public:
	Laptop(float price);
	void displayPrice();
};
Laptop::Laptop(float price)
{
	laptop_price = price;
}
void Laptop::displayPrice()
{
	cout << laptop_price << endl;
}
int main()
{
	Laptop laptop_A(45000);
	Laptop laptop_B(62000);
	Laptop laptop_C(81000);

	cout << "Laptop A Balance: ";
	laptop_A.displayPrice();

	cout << "Laptop B Balance: ";
	laptop_B.displayPrice();

	cout << "Laptop C Balance: ";
	laptop_C.displayPrice();

	return 0;
}