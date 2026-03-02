// Chap 9 Practice 65 Shopping Item Total Cost.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class ShoppingItem
{
private:
    string item_name;
    float price;
    int quantity;

public:
    void set_item(string name, float price_1, int quantity_1)
    {
        item_name = name;


        if (price_1 > 0)
        {
            price = price_1;
        }
        else
        {
            price = 0;
        }
        if (quantity_1 > 0)
        {
            quantity = quantity_1;
        }
        else
        {
            quantity = 0;
        }
    }
    float get_total_cost()
    {
        return price * quantity;
    }
    void display_bill()
    {
        cout << "Item: " << item_name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total: " << get_total_cost();
    }
};
int main()
{
    ShoppingItem Item;

    Item.set_item("Milk", 4.9, 2);
    Item.display_bill();

    return 0;
}