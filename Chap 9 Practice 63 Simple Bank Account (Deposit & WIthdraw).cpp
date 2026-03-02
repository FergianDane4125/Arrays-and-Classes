// Chap 9 Practice 63 Simple Bank Account (Deposit & WIthdraw).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance = 0;

public:
	void deposit(float amount)
	{
		if (amount > 0)
		{
			balance += amount;
		}
		else
		{
			cout << "ERROR";
		}
	}
	void widthdraw(float amount)
	{
		if (amount <= balance)
		{
			balance -= amount;
		}
		else
		{
			cout << "Insufficient balance!";
		}
	}
	void display_balance ()
	{
		cout << "Balance: " << balance << endl;
	}
};
int main()
{
	BankAccount acc;

	acc.deposit(500);
	acc.display_balance();

	acc.widthdraw(100);
	acc.display_balance();

	acc.widthdraw(1000);

	return 0;
}