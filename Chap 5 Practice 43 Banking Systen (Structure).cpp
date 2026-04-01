// Chapt 5 Practice 43 Banking Systen (Structure).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Bank
{
    int account_num;
    char account_name[50];
    float account_balance;
};
int main()
{
	Bank account_1;
	cout << "Enter Account Number: ";
	cin >> account_1.account_num;

	cin.ignore();

	cout << "Enter Acount Holder Name: ";
	cin.getline(account_1.account_name, 50);

	cout << "Enter balance: ";
	cin >> account_1.account_balance;
	
	cout << "\n \n----- Account Details -----" << endl;
	cout << "Account Number: " << account_1.account_num << endl;
	cout << "Acount Holder Name: " << account_1.account_name << endl;
	cout << "Account Balance: " << account_1.account_balance << endl;

	return 0;
}
