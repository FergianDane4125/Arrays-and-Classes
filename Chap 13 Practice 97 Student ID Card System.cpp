// Chap 13 Practice 97 Student ID Card System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Person
{
    private:
        int age;

    public:
        void setAge(int age);
        int getAge() const;
};

void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge() const
{
    return age;
}

class Student : public Person
{
    private:
        string name;

    public:
        void setName(string name);
        void displayID() const;
};

void Student::setName(string name)
{
    this->name = name;
}

void Student::displayID() const
{
    cout << "------ Student ID Card ------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Status: Active Student" << endl;
}

int main()
{
    Student s;
    string name;
    int age;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    s.setName(name);
    s.setAge(age);

    s.displayID();

    return 0;
}
