// Chapter 11 Practice 77 Bank Account Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;

public:
	BankAccount(float bal);
	void displayBalance();
};
BankAccount ::BankAccount(float bal)
{
	balance = bal;
}
void BankAccount :: displayBalance()
{
	cout << balance << endl;
}
int main()
{
	BankAccount account_A(500);
	BankAccount account_B(1200);
	BankAccount account_C(50);

	cout << "Account A Balance: ";
	account_A.displayBalance();

	cout << "Account B Balance: ";
	account_B.displayBalance();

	cout << "Account C Balance: ";
	account_C.displayBalance();

	return 0;
}

