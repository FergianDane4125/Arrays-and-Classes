// Chap 8 Practice 55 ATM Transaction Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum TransactionType
{
	Deposit,
	Withdraw,
	CheckBalance,
	Exit
};
int main()
{
	string user_input;
	TransactionType action;

	cout << "Enter Current Status ( Deposit / Withdraw / Balance / Exit ): ";
	cin >> user_input;


	if (user_input == "Deposit")
		action = Deposit;
	else if (user_input == "Withdraw")
		action = Withdraw;
	else if (user_input == "Balance")
		action = CheckBalance;
	else if (user_input == "Exit")
		action = Exit;
	else
	{
		cout << "Invalid Input!";
		return 0;
	}


	switch (action)
	{
	case Deposit:
		cout << "Depositing";
		break;

	case Withdraw:
		cout << "Withdrawing";
		break;

	case CheckBalance:
		cout << "Balance : $50000";
		break;

	case Exit:
		cout << "Bye";
		return 0;

	default:
		cout << "Invalid Input";
	}

	return 0;
}
