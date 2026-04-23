// Chap 11 Practice 84 Fan Default + Setter + Const Getter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Fan
{
    private:
        float speed;

    public:
        Fan();
        void setSpeed(float speed);
        float getSpeed() const;
};

Fan::Fan()
{
    speed = 0;
}

void Fan::setSpeed(float speed)
{
    this->speed = speed;
}

float Fan::getSpeed() const
{
    return speed;
}

int main()
{
    float new_speed;
    cin >> new_speed;

    Fan room_fan;
    room_fan.setSpeed(new_speed);

    cout << "Fan Speed: " << room_fan.getSpeed() << endl;

    return 0;
}
