// Chap 15 Practice 112 Ride Booking Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Ride
{
    public:
        virtual void bookRide() = 0;
};

class BikeRide : public Ride
{
    public:
        void bookRide()
        {
            cout << "Bike ride booked successfully\n";
        }
};

class CarRide : public Ride
{
public:
        void bookRide()
        {
            cout << "Car ride booked successfully\n";
        }
};

int main()
{
    Ride* ride_pointer;

    BikeRide bike;
    CarRide car;

    ride_pointer = &bike;
    ride_pointer->bookRide();

    ride_pointer = &car;
    ride_pointer->bookRide();

    return 0;
}

