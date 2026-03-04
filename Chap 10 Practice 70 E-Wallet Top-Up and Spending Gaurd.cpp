// Chap 10 Practice 70 E-Wallet Top-Up and Spending Gaurd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class EWallet
{
private:
    float balance;

public:
    EWallet()
    {
        balance = 0;
    }
    void set_balance(float bal)
    {
        if (bal >= 0)
        {
            balance = bal;
        }
        else
        {
            cout << "Invalid Balance\n";
        }
    }
    void spend(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Payment Declined\n";
        }
    }
    float get_balance()
    {
        return balance;
    }
};
int main()
{
    EWallet wallet;
    float user_input;
    float user_spend;

    cout << "Enter Balance:";
    cin >> user_input;
    cout << "Enter Spend Amount: ";
    cin >> user_spend;

    wallet.set_balance(user_input);
    wallet.spend(user_spend);
    

    cout << "Final Balance: " << wallet.get_balance() << endl;
}
