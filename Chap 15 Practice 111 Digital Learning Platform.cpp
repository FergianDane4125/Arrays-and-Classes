// Chap 15 Practice 111 Digital Learning Platform.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Course
{
    public:
        virtual void startClass() = 0;
};

class ProgrammingCourse : public Course
{
    public:
        void startClass()
        {
            cout << "Programming class has started\n";
        }
};

class MathCourse : public Course
{
    public:
        void startClass()
        {
            cout << "Math class has started\n";
        }
};

int main()
{
    Course* course_pointer;

    ProgrammingCourse programming;
    MathCourse math;

    course_pointer = &programming;
    course_pointer->startClass();

    course_pointer = &math;
    course_pointer->startClass();

    return 0;
}
