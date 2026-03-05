// Chap 6 Practice 52 Create Product and Return It.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct product_record
{
    int product_id;
    float price;
};

product_record create_product(int product_id, float price)
{
    product_record temp_product;

    temp_product.product_id = product_id;
    temp_product.price = price;

    return temp_product;
}

int main()
{
    int id;
    float cost;

    cout << "Enter Product ID: ";
    cin >> id;

    cout << "Enter Price: ";
    cin >> cost;

    product_record result = create_product(id, cost);

    cout << "Product ID: " << result.product_id << endl;
    cout << "Price: " << result.price << endl;

    return 0;
}