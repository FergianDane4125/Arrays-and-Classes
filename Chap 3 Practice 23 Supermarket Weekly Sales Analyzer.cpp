// Chap 3 Practice 23 Supermarket Weekly Sales Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int cashiers = 3;
const int days = 4;
void read_sales(int sales[][days], int cashiers);
void analyze_sales(int sales[][days], int cashiers);

int main()
{
	int sales[cashiers][days];
	read_sales(sales, cashiers);
	analyze_sales(sales, cashiers);

}
void read_sales(int sales[][days], int cashiers)
{
	for (int row = 0; row < cashiers; row++)
	{
		for (int col = 0; col < days; col++)
		{
			cout << "Enter Sales for Cashier " << row + 1 << " on Day " << col + 1 << ": ";
			cin >> sales[row][col];
		}
		cout << endl;
	}
}
void analyze_sales(int sales[][days], int cashiers)
{
    int top_cashier = 0;
    int top_cashier_total = 0;

    int top_single_day_cashier = 0;
    int top_single_day_sale = 0;

    for (int row = 0; row < cashiers; row++)
    {
        int total = 0;
        int max_sale = sales[row][0];

        for (int col = 0; col < days; col++)
        {
            total += sales[row][col];

            if (sales[row][col] > max_sale)
            {
                max_sale = sales[row][col];
            }
        }

        cout << "Cashier " << (row + 1) << " total sales: " << total << endl;
        cout << "Cashier " << (row + 1) << "'s highest sale = " << max_sale << endl << endl;

        if (total > top_cashier_total)
        {
            top_cashier_total = total;
            top_cashier = row;
        }

        if (max_sale > top_single_day_sale)
        {
            top_single_day_sale = max_sale;
            top_single_day_cashier = row;
        }
    }

    cout << "Cashier " << (top_cashier + 1)
        << " has the highest total sales: " << top_cashier_total << endl;

    cout << "Cashier " << (top_single_day_cashier + 1)
        << " has the highest single-day sale: " << top_single_day_sale << endl;
}