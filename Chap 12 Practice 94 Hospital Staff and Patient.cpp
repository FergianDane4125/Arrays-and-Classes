// Chap 12 Practice 94 Hospital Staff and Patient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};
class Doctor : public Person
{
public:
	string specialization;
};
class Patient : public Person
{
public:
	string disease_name;
};
int main()
{
	Doctor doctor_1;
	Patient patient_1;

	getline(cin, doctor_1.name);
	cin >> doctor_1.age;
	cin.ignore();
	getline(cin, doctor_1.specialization);

	getline(cin, patient_1.name);
	cin >> patient_1.age;
	cin.ignore();
	getline(cin, patient_1.disease_name);

	cout << "Doctor Name: " << doctor_1.name << endl;
	cout << "Age: " << doctor_1.age << endl;
	cout << "Specialization : " << doctor_1.specialization << endl;

	cout << "Patient Name: " << patient_1.name << endl;
	cout << "Age: " << patient_1.age << endl;
	cout << "Disease : " << patient_1.disease_name << endl;

	return 0;
}