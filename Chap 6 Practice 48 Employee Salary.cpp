// Chap 6 Practice 48 Employee Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct employee_record
{
	int employee_id;
	int salary;

};
void increase_salary(employee_record employee_copy, int bonus_amount)
{
	employee_copy.salary += bonus_amount;
	cout << "Inside function call (copy): " << employee_copy.salary << endl;
}
int main()
{
	employee_record employee_main;
	int bonus;

	cout << "ID: ";
	cin >> employee_main.employee_id;
	cout << "Salary: ";
	cin >> employee_main.salary;
	cout << "Bonus: ";
	cin >> bonus;

	cout << "Employee ID: " << employee_main.employee_id << endl;
	cout << "Employee Salary before function call: " << employee_main.salary << endl;

	increase_salary(employee_main, bonus);

	cout << "Employee Salary after function call: " << employee_main.salary << endl;

}
