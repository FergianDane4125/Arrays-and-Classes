// Chap 11 Practice 82  Employee Name Using this.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee
{
    private:
        string employee_name;
        float employee_salary;

    public:
        void setEmployee(string employee_name, float employee_salary)
        {
            this->employee_name = employee_name;
            this->employee_salary = employee_salary;
        }

        void displayEmployee()
        {
            cout << employee_name << endl;
            cout << employee_salary << endl;
        }
};

int main()
{
    string employee_name;
    float employee_salary;

    cin >> employee_name;
    cin >> employee_salary;

    Employee employee_record;
    employee_record.setEmployee(employee_name, employee_salary);

    employee_record.displayEmployee();

    return 0;
}
