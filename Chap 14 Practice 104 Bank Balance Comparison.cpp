// Chap 14 Practice 104 Bank Balance Comparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
	private:
		int balance;

	public:

		void setBalance(double amount)
		{
			balance = amount;
		}

		bool operator==(BankAccount second_account)
		{
			if (balance == second_account.balance)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	BankAccount account1;
	BankAccount account2;

	double balance1;
	double balance2;

	cout << "Enter balance of account 1: ";
	cin >> balance1;

	cout << "Enter balance of account 2: ";
	cin >> balance2;

	account1.setBalance(balance1);
	account2.setBalance(balance2);

	if (account1 == account2)
	{
		cout << "Both accounts have the same balance\n";
	}
	else
	{
		cout << "Accounts have different balances\n";
	}

	return 0;
}