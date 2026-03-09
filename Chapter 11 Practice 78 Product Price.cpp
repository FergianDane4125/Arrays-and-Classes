// Chapter 11 Practice 78 Product Price.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string product_name;
	float product_price;

public:
	void setProduct(string product_name, float product_price);
	void displayProduct();
};
void Product :: setProduct(string product_name, float product_price)
{
	this->product_name = product_name;
	this->product_price = product_price;
}
void Product :: displayProduct()
{
	cout << "Product: " << product_name << endl;
	cout << "Price: " << product_price << endl;
}

int main()
{
	Product user;

	string product;
	float price;

	cout << "Enter Product Name: ";
	getline(cin, product);

	cout << "Enter Price: ";
	cin >> price;

	user.setProduct( product,price);
	user.displayProduct();

	return 0;
}
