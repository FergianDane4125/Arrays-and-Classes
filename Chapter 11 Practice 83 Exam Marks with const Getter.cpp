// Chapter 11 Practice 83 Exam Marks with const Getter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Exam
{
    private:
        float marks;

    public:
        void setMarks(float marks);
        float getMarks() const;
    };

void Exam::setMarks(float marks)
{
    this->marks = marks;
}

float Exam::getMarks() const
{
    return marks;
}

int main()
{
    float marks;
    cin >> marks;

    Exam exam_record;
    exam_record.setMarks(marks);

    cout << "Marks: " << exam_record.getMarks() << endl;

    return 0;
}
