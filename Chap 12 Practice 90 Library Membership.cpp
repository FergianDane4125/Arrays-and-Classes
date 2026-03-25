// Chap 12 Practice 90 Library Membership.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
};
class Member : public Person
{
public:
	int member_id;
};
class PremiumMember : public Member
{
public:
	int books_borrowed;
};
int main()
{
	PremiumMember member;

	getline(cin, member.name);
	cin >> member.member_id;
	cin >> member.books_borrowed;

	cout << "Member Name: " << member.name << endl;
	cout << "Member ID: " << member.member_id << endl;
	cout << "Books Borrowed: " << member.books_borrowed << endl;
	if (member.books_borrowed > 10)
	{
		cout << "Status: Limit Exceeded\n";
	}
	else
	{
		cout << "Status: Within Limit \n";
	}
	return 0;
}
