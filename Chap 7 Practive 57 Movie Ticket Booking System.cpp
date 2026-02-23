// Chap 7 Practive 57 Movie Ticket Booking System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Bookings
{
    int booking_id;
    string customer_name;
    string movie_name;
    int number_of_tickets;
    float price;
};
void display_bookings(Bookings booking_list[], int size)
{
    float revenue = 0;
    for (int index = 0; index < size; index++)
    {
        cout << "- - - - Booking Details - - - -" << endl;
        cout << "Booking ID: " << booking_list[index].booking_id << endl;
        cout << "Customer: " << booking_list[index].customer_name << endl;
        cout << "Movie: " << booking_list[index].movie_name << endl;
        cout << "Tickets: " << booking_list[index].number_of_tickets << endl;

        booking_list[index].price = booking_list[index].price * booking_list[index].number_of_tickets;
        
        cout << "Total: " << booking_list[index].price << endl;
        cout << "- - - - - - - - - - - - - - - -" << endl;
        revenue += booking_list[index].price;
    }
    cout << "Total Theatre Revenue: " << revenue;
    cout << endl << endl;
}

int main()
{
    const int bookings = 3;
    Bookings details[bookings];

    for (int index = 0; index < bookings; index++)
    {
        cout << "Enter details for Booking: " << index + 1 << endl;

        cout << "Booking ID: ";
        cin >> details[index].booking_id;

        cin.ignore();

        cout << "Customer name: ";
        getline(cin, details[index].customer_name);

        cout << "Movie Name: ";
        getline(cin, details[index].movie_name);
       

        cout << "Number of Tickets: ";
        cin >> details[index].number_of_tickets;

        cout << "Ticket Price: ";
        cin >> details[index].price;
        cout << "\n";
    }
   
    display_bookings(details, bookings);
    return 0;
}