// Chap 14 Practice 101 Snart Restaurant Bill Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BillCalculator
{
public:
	int calculateBill(int burger_price, int pizza_price)
	{
		return burger_price + pizza_price;
	}
	double calculateBill(double food_total , double tax_rate)
	{
		return food_total + (food_total * tax_rate);
	}
	double calculateBill(double food_total, double tax_rate, double discount)
	{
		return (food_total + (food_total * tax_rate)) - discount;
	}

};

int main()
{
	BillCalculator bill_object;

	int burger_price;
	int pizza_price;
	double tax_rate;
	double discount;


	cout << "Enter burger price: ";
	cin >> burger_price;
	cout << "Enter pizza price: ";
	cin >> pizza_price;
	cout << "Enter tax rate: ";
	cin >> tax_rate;
	cout << "Enter discount: ";
	cin >> discount;

	double food_total = burger_price + pizza_price;

	cout << "Food Total: " << bill_object.calculateBill(burger_price, pizza_price) << endl;
	cout << "Total with Tax: " << bill_object.calculateBill(food_total, tax_rate) << endl;
	cout << "Total after Tax and Discount: " << bill_object.calculateBill(food_total, tax_rate, discount) << endl;

	return 0;
}
