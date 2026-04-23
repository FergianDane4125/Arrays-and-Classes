// Chapter 11 Practice 86 Mobile Record Combined Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mobile
{
    private:
        string brand_name;
        float mobile_price;

    public:
        Mobile(string brand, float price);
        void setPrice(float mobile_price);
        string getBrand() const;
        float getPrice() const;
};

Mobile::Mobile(string brand, float price)
{
    brand_name = brand;
    mobile_price = price;
}

void Mobile::setPrice(float mobile_price)
{
    this->mobile_price = mobile_price;
}

string Mobile::getBrand() const
{
    return brand_name;
}

float Mobile::getPrice() const
{
    return mobile_price;
}

int main()
{
    Mobile my_mobile("Samsung", 25000);

    my_mobile.setPrice(27000);

    cout << "Brand: " << my_mobile.getBrand() << endl;
    cout << "Price: " << my_mobile.getPrice() << endl;

    return 0;
}
