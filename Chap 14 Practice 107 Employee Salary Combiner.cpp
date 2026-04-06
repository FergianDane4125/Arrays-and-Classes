// Chap 14 Practice 107 Employee Salary Combiner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class EmployeeSalary
{
    private:
        int monthly_salary;

    public:
        EmployeeSalary()
        {
            monthly_salary = 0;
        }

        EmployeeSalary(int salary_amount)
        {
            monthly_salary = salary_amount;
        }

        EmployeeSalary operator+(EmployeeSalary other_employee)
        {
            EmployeeSalary combined_salary;
            combined_salary.monthly_salary = monthly_salary + other_employee.monthly_salary;
            return combined_salary;
        }

        bool operator>(EmployeeSalary other_employee)
        {
            return monthly_salary > other_employee.monthly_salary;
        }

        int getSalary()
        {
            return monthly_salary;
        }
};

int main()
{
    int first_employee_salary_input;
    int second_employee_salary_input;

    cin >> first_employee_salary_input;
    cin >> second_employee_salary_input;

    EmployeeSalary first_employee_salary(first_employee_salary_input);
    EmployeeSalary second_employee_salary(second_employee_salary_input);

    EmployeeSalary total_combined_salary = first_employee_salary + second_employee_salary;

    cout << "Total salary: " << total_combined_salary.getSalary() << endl;

    if (first_employee_salary > second_employee_salary)
    {
        cout << "First employee has higher salary.\n";
    }
    else
    {
        cout << "Second employee has higher salary.\n";
    }

    return 0;
}
