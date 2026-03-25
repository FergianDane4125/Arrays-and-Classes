// Chap 12 Practice 96 Smart Hospital and Wellness Monitoring Systems.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
class MedicalInfo
{
	public:
		string disease_name;
};
class FitnessInfo
{
	public:
		int daily_step_count;
};
class Patient : public Person
{
	public:
		string patient_id;
};
class InPatient : public Patient
{
	public:
		int room_number;
};
class WellnessPatient : public InPatient, public FitnessInfo
{
	public:
		string diet_plan;
};
class Doctor : public Person
{
	public:
		string specialization;
};
class VisistingDoctor : public Doctor
{
	public:
		string visiting_hours;
};
class HealthAdvisor : public VisistingDoctor, public MedicalInfo
{
	public:
		string advice_note;
};

int main()
{
	WellnessPatient patient_1;
	HealthAdvisor advisor_1;

	getline(cin, patient_1.name);
	cin >> patient_1.age;
	cin.ignore();

	getline(cin, patient_1.patient_id);
	cin >> patient_1.room_number;
	cin >> patient_1.daily_step_count;
	cin.ignore();

	getline(cin, patient_1.diet_plan);


	getline(cin, advisor_1.name);
	cin >> advisor_1.age;
	cin.ignore();

	getline(cin, advisor_1.specialization);
	getline(cin, advisor_1.visiting_hours);
	getline(cin, advisor_1.disease_name);
	getline(cin, advisor_1.advice_note);


	cout << "----- Wellness Patient Details -----\n";

	cout << "Name: " << patient_1.name << endl;
	cout << "Age: " << patient_1.age << endl;
	cout << "Patient ID : " << patient_1.patient_id << endl;
	cout << "Room Number : " << patient_1.room_number << endl;
	cout << "Daily Step Count: " << patient_1.daily_step_count << endl;
	cout << "Diet Plan: " << patient_1.diet_plan << endl;

	if (patient_1.daily_step_count >= 7000)
	{
		cout << "Activity Status: Active" << endl;
	}
	else
	{
		cout << "Activity Status: Needs Improvement" << endl;
	}

	cout << endl;

	cout << "----- Health Advisor Details -----\n";

	cout << "Name: " << advisor_1.name << endl;
	cout << "Age: " << advisor_1.age << endl;
	cout << "Specialization : " << advisor_1.specialization << endl;
	cout << "Visiting Hours: " << advisor_1.visiting_hours << endl;
	cout << "Disease Hours: " << advisor_1.disease_name << endl;
	cout << "Advice Note: " << advisor_1.advice_note << endl;

	return 0;
}