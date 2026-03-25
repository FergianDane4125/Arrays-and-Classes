// Chap 12 Practice 88 Online Order Bill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Product
{
	public: 
		string product_name;
		double product_price;
};
class DiscountedProduct : public Product
{
	public:
		double discount_percentage;
};
int main()
{
	DiscountedProduct item_1;
	double final_price;
	double discount_amount;

	cin >> item_1.product_name;
	cin >> item_1.product_price;
	cin >> item_1.discount_percentage;

	discount_amount = item_1.product_price * item_1.discount_percentage / 100;
	final_price = item_1.product_price - discount_amount;

	cout << "Product Name: " << item_1.product_name << endl;
	cout << "Original Price: " << item_1.product_price << endl;
	cout << "Discount Percentage: " << item_1.discount_percentage << endl;
	cout << "Final Price: " << final_price << endl;

	return 0;
}
