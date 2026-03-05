// Chap 6 Practice 53 Return Total and Average as a Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct result_record
{
    int total_marks;
    float average_marks;
};

result_record calculate_result(int math_mark, int science_mark, int english_mark)
{
    result_record student_result;

    student_result.total_marks = math_mark + science_mark + english_mark;
    student_result.average_marks = student_result.total_marks / 3.0;

    return student_result;
}

int main()
{
    int first_mark;
    int second_mark;
    int third_mark;

    cout << "Enter first mark: ";
    cin >> first_mark;

    cout << "Enter second mark: ";
    cin >> second_mark;

    cout << "Enter third mark: ";
    cin >> third_mark;

    result_record final_result = calculate_result(first_mark, second_mark, third_mark);

    cout << "Total: " << final_result.total_marks << endl;
    cout << "Average: " << final_result.average_marks << endl;

    return 0;
}