// Chap 7 Practice 59 Food Delivery Order Status System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum order_status
{
    placed,
    preparing,
    out_for_delivery,
    delivered
};

struct order
{
    int order_id;
    string customer_name;
    float total_amount;
    order_status status;
};

int main()
{
    order current_order;

    cout << "Enter Order ID: ";
    cin >> current_order.order_id;

    cout << "Enter Customer Name: ";
    cin >> current_order.customer_name;

    cout << "Enter Total Amount: ";
    cin >> current_order.total_amount;

    int status_choice;
    cout << "Enter Status (0 = placed, 1 = preparing, 2 = out_for_delivery, 3 = delivered): ";
    cin >> status_choice;

    if (status_choice == 0)
    {
        current_order.status = placed;
    }
    else if (status_choice == 1)
    {
        current_order.status = preparing;
    }
    else if (status_choice == 2)
    {
        current_order.status = out_for_delivery;
    }
    else if (status_choice == 3)
    {
        current_order.status = delivered;
    }
    else
    {
        cout << "Invalid status. Defaulting to placed." << endl;
        current_order.status = placed;
    }

    cout << "\nOrder Summary\n";
    cout << "Order ID: " << current_order.order_id << endl;
    cout << "Customer Name: " << current_order.customer_name << endl;
    cout << "Total Amount: " << current_order.total_amount << endl;

    if (current_order.status == placed)
    {
        cout << "Status: Your order has been placed." << endl;
    }
    else if (current_order.status == preparing)
    {
        cout << "Status: Your food is being prepared." << endl;
    }
    else if (current_order.status == out_for_delivery)
    {
        cout << "Status: Your order is out for delivery." << endl;
    }
    else if (current_order.status == delivered)
    {
        cout << "Status: Your order has been delivered." << endl;
    }

    return 0;
}