// Chap 12 Practice 87 Employee Bonus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Employee
{
	public:
		string employee_name;
		int salary;
};
class Manager : public Employee
{
	public:
		int bonus;
};
int main()
{
	Manager person_1;
	int total_income;

	person_1.employee_name = "Alice";
	person_1.salary = 50000;
	person_1.bonus = 8000;

	total_income = person_1.salary + person_1.bonus;

	cout << "Manager Name: " << person_1.employee_name << endl;
	cout << "Salary: " << person_1.salary << endl;
	cout << "Bonus: " << person_1.bonus << endl;
	cout << "Total income: " << total_income << endl;

	return 0;
}
