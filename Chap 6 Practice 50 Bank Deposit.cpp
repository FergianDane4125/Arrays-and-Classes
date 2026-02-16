// Chap 6 Practice 50 Bank Deposit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct bank_account
{
	int account_num;
	int balance;
};

void desposit_money(bank_account &acc_ref, int deposit_amount);

int main()
{
	bank_account acc_main;
	int deposit;

	cout << "Account Number: ";
	cin >> acc_main.account_num;
	cout << "Account Balance: ";
	cin >> acc_main.balance;
	cout << "Deposit Amount: ";
	cin >> deposit;

	cout << "Before function call: " << acc_main.balance << endl;

	desposit_money(acc_main, deposit);

	cout << "After function call: " << acc_main.balance << endl;

	return 0;
}
void desposit_money(bank_account & acc_ref, int deposit_amount)
{
	acc_ref.balance += deposit_amount;
	cout << "Inside function (copy): " << acc_ref.balance << endl;
}
