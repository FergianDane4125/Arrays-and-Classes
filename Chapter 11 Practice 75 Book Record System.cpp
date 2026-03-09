// Chapter 11 Practice 75 Book Record System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
	string book_title;
	float book_price;

public:
	LibraryBook()
	{
		book_price = 0;
	}

	void set_Book(string title, float price);

	void displayBook();

};
void LibraryBook :: set_Book(string title, float price)
{
	book_title = title;
	book_price = price;
	
}
void LibraryBook::displayBook()
{
	cout << "Title: " << book_title << endl;
	cout << "Price: $" << book_price << endl;
}


int main()
{
	LibraryBook book;

	string title;
	float price;

	cout << "Enter title: ";
	getline(cin, title);

	cout << "Enter price:";
	cin >> price;

	book.set_Book(title, price);
	book.displayBook();

	return 0;
}