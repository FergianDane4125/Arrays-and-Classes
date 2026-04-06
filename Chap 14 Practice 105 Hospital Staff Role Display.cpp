// Chap 14 Practice 105 Hospital Staff Role Display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Staff
{
    public:
        void showRole()
        {
            cout << "General staff role\n";
        }
};

class Doctor : public Staff
{
    public:
        void showRole()
        {
            cout << "Doctor treats patients and gives prescriptions.\n";
        }
};

class Nurse : public Staff
{
    public:
        void showRole()
        {
            cout << "Nurse cares for patients and assists doctors.\n";
        }
};

int main()
{
    Doctor doctor;
    Nurse nurse;

    doctor.showRole();
    nurse.showRole();

    return 0;
}
