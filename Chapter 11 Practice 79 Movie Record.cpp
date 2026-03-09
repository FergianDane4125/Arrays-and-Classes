// Chapter 11 Practice 79 Movie Record.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	string movie_name;
	float ticket_price;

public:
	void setMovie(string name, float price);
	void displayMovie();
};
void Movie::setMovie(string name, float price)
{
	movie_name = name;
	ticket_price = price;
}
void Movie::displayMovie()
{
	cout << "Movie Name: " << movie_name << endl;
	cout << "Ticket Price: " << ticket_price << endl;
}

int main()
{
	Movie movie;

	string name;
	float price;

	cout << "Enter Movie name: ";
	getline(cin, name);

	cout << "Enter Ticket Price: ";
	cin >> price;

	movie.setMovie(name, price);
	movie.displayMovie();

	return 0;
}