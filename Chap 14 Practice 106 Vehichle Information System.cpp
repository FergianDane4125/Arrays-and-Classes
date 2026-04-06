// Chap 14 Practice 106 Vehichle Information System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vehicle
{
    public:
        void showType()
        {
            cout << "Vehicle is used for transportation.\n";
        }
};

class Car : public Vehicle
{
    public:
        void showType()
        {
            cout << "Car is a four-wheeler vehicle.\n";
        }
};

class Bike : public Vehicle
{
    public:
        void showType()
        {
            cout << "Bike is a two-wheeler vehicle.\n";
        }
};

int main()
{
    Car car_object;
    Bike bike_object;

    car_object.showType();
    bike_object.showType();

    Vehicle* vehicle_pointer;
    vehicle_pointer = &car_object;
    vehicle_pointer->showType();

    return 0;
}
