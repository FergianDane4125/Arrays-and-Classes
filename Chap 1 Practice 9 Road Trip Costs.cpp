// Chap 1 Practice 9 Road Trip Costs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int size = 5;
	int costs[size];

	cout << "Enter the costs of " << size << " road trip expenses: " << endl;

	for (int count = 0; count < size; count++)
	{
		cin >> costs[count];
	}
	cout << "Costs: ";
	for (int count = 0; count < size; count++)
	{
		cout << costs[count] << " ";
	}
	cout << endl;

	int max_cost = costs[0];
	for (int count = 1; count < size; count++)
	{
		if (costs[count] > max_cost)
		{
			max_cost = costs[count];
		}
	}
	cout << "Highest Price: " << max_cost << endl;
	return 0;
}

