// Chap 13 Practice 99 Smart Hospital Patient Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Person
{
    private:
        int person_age;

    public:
        void setAge(int person_age);
        int getAge() const;
};

void Person::setAge(int person_age)
{
    this->person_age = person_age;
}

int Person::getAge() const
{
    return person_age;
}

class Patient : public Person
{
    private:
        string patient_name;
        string patient_gender;
        string disease_name;
        string doctor_name;
        int room_number;
        int days_admitted;
        float bill_amount;

    public:
        void setPatientDetails(string patient_name,
            string patient_gender,
            string disease_name,
            string doctor_name,
            int room_number,
            int days_admitted,
            float bill_amount);

    void displayRecord() const;
    string getAdmissionType() const;
    string getBillStatus() const;
};

void Patient::setPatientDetails(string patient_name,
    string patient_gender,
    string disease_name,
    string doctor_name,
    int room_number,
    int days_admitted,
    float bill_amount)
{
    this->patient_name = patient_name;
    this->patient_gender = patient_gender;
    this->disease_name = disease_name;
    this->doctor_name = doctor_name;
    this->room_number = room_number;
    this->days_admitted = days_admitted;
    this->bill_amount = bill_amount;
}

string Patient::getAdmissionType() const
{
    if (days_admitted > 7)
        return "Long Stay";
    return "Short Stay";
}

string Patient::getBillStatus() const
{
    if (bill_amount >= 5000)
        return "High Bill Case";
    return "Regular Bill Case";
}

void Patient::displayRecord() const
{
    cout << "========================================" << endl;
    cout << "SMART HOSPITAL RECORD" << endl;
    cout << "========================================" << endl;
    cout << "Patient Name : " << patient_name << endl;
    cout << "Age : " << getAge() << endl;
    cout << "Gender : " << patient_gender << endl;
    cout << "Disease : " << disease_name << endl;
    cout << "Doctor Assigned : " << doctor_name << endl;
    cout << "Room Number : " << room_number << endl;
    cout << "Days Admitted : " << days_admitted << endl;
    cout << "Bill Amount : " << bill_amount << endl;
    cout << "Admission Type : " << getAdmissionType() << endl;
    cout << "Bill Status : " << getBillStatus() << endl;
    cout << "Advice : Patient needs continuous monitoring" << endl;
    cout << "========================================" << endl;
}

int main()
{
    Patient hospital_patient;

    string input_patient_name;
    int input_age;
    string input_gender;
    string input_disease;
    string input_doctor_name;
    int input_room_number;
    int input_days_admitted;
    float input_bill_amount;

    cout << "Enter patient name: ";
    cin >> input_patient_name;

    cout << "Enter age: ";
    cin >> input_age;

    cout << "Enter gender: ";
    cin >> input_gender;

    cout << "Enter disease: ";
    cin >> input_disease;

    cout << "Enter doctor name: ";
    cin >> input_doctor_name;

    cout << "Enter room number: ";
    cin >> input_room_number;

    cout << "Enter days admitted: ";
    cin >> input_days_admitted;

    cout << "Enter bill amount: ";
    cin >> input_bill_amount;

    hospital_patient.setAge(input_age);

    hospital_patient.setPatientDetails(
        input_patient_name,
        input_gender,
        input_disease,
        input_doctor_name,
        input_room_number,
        input_days_admitted,
        input_bill_amount
    );

    hospital_patient.displayRecord();

    return 0;
}
