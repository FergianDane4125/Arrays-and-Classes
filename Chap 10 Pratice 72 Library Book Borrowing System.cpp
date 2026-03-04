// Chap 10 Pratice 72 Library Book Borrowing System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

class LibraryBook
{
private:
	string book_title;
	int copies_available;

public:
	LibraryBook()
	{
		book_title = "C++ Basics";
		copies_available = 3;
	}

	void set_title(string title)
	{
		if (title.size() > 0)
		{
			book_title = title;
		}
	}	

	string get_title()
	{
		return book_title;
	}
	int get_copies()
	{
		return copies_available;
	}

	void borrow_book()
	{
		if (copies_available > 0)
		{
			copies_available -= 1;
		}
		else
		{
			cout << "No copies available\n";
		}
	}
};

int main()
{
	LibraryBook book;

	string title;
	int copies;

	cout << "Enter title: ";
	cin >> title;
	cout << "Enter the amount of copies:";
	cin >> copies;

	book.set_title(title);

	for (int count = 0; count < copies; count++)
	{
		book.borrow_book();
	}

	cout << "Title: " << book.get_title() << endl;
	cout << "Copies left: " << book.get_copies() << endl;

	return 0;
}