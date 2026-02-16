// Chap 5 Practice 42 Mini Library Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Book
{
	int book_id;
	char title[50];
	float price;
};

int main()
{
	Book book_1;
	cout << "Enter book ID: ";
	cin >> book_1.book_id;
	
	cin.ignore();

	cout << "Enter Book Title: ";
	cin.getline(book_1.title, 50);

	cout << "Enter Book Price: ";
	cin >> book_1.price;

	return 0;
}

