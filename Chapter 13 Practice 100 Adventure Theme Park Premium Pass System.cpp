// Chapter 13 Practice 100 Adventure Theme Park Premium Pass System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Visitor
{
    private:
        int visitor_id;
        string city;

    public:
        void setVisitorId(int visitor_id);
        int getVisitorId() const;

        void setCity(string city);
        string getCity() const;
};

void Visitor::setVisitorId(int visitor_id)
{
    this->visitor_id = visitor_id;
}

int Visitor::getVisitorId() const
{
    return visitor_id;
}

void Visitor::setCity(string city)
{
    this->city = city;
}

string Visitor::getCity() const
{
    return city;
}

class PremiumVisitor : public Visitor
{
private:
    string visitor_name;
    string pass_type;
    int rides_selected;
    int guest_count;
    float total_spending;
    string locker_required;

public:
    void setPremiumDetails(string visitor_name,
        string pass_type,
        int rides_selected,
        int guest_count,
        float total_spending,
        string locker_required);

    string getLoungeAccess() const;
    string getFoodCoupon() const;
    string getVisitorCategory() const;

    void displayPremiumPass() const;
};

void PremiumVisitor::setPremiumDetails(string visitor_name,
    string pass_type,
    int rides_selected,
    int guest_count,
    float total_spending,
    string locker_required)
{
    this->visitor_name = visitor_name;
    this->pass_type = pass_type;
    this->rides_selected = rides_selected;
    this->guest_count = guest_count;
    this->total_spending = total_spending;
    this->locker_required = locker_required;
}

string PremiumVisitor::getLoungeAccess() const
{
    if (guest_count > 3)
    return "Yes";
    return "No";
}

string PremiumVisitor::getFoodCoupon() const
{
    if (total_spending >= 3000)
    return "Eligible";
    return "Not Eligible";
}

string PremiumVisitor::getVisitorCategory() const
{
    if (pass_type == "Gold" || pass_type == "Platinum")
    return "Premium Fast Track";
    return "Standard Premium";
}

void PremiumVisitor::displayPremiumPass() const
{
    cout << "****************************************" << endl;
    cout << "ADVENTURE PARK PREMIUM PASS" << endl;
    cout << "****************************************" << endl;
    cout << "Visitor Name : " << visitor_name << endl;
    cout << "Visitor ID : " << getVisitorId() << endl;
    cout << "City : " << getCity() << endl;
    cout << "Pass Type : " << pass_type << endl;
    cout << "Rides Selected : " << rides_selected << endl;
    cout << "Guests Count : " << guest_count << endl;
    cout << "Total Spending : " << total_spending << endl;
    cout << "Locker Required : " << locker_required << endl;
    cout << "Lounge Access : " << getLoungeAccess() << endl;
    cout << "Food Coupon : " << getFoodCoupon() << endl;
    cout << "Visitor Category : " << getVisitorCategory() << endl;
    cout << "Reminder : Please arrive 30 minutes early" << endl;
    cout << "****************************************" << endl;
}

int main()
{
    PremiumVisitor premium_visitor;

    string input_visitor_name;
    int input_visitor_id;
    string input_city;
    string input_pass_type;
    int input_rides_selected;
    int input_guest_count;
    float input_total_spending;
    string input_locker_required;

    cout << "Enter visitor name: ";
    cin >> input_visitor_name;

    cout << "Enter visitor ID: ";
    cin >> input_visitor_id;

    cout << "Enter city: ";
    cin >> input_city;

    cout << "Enter pass type: ";
    cin >> input_pass_type;

    cout << "Enter number of rides selected: ";
    cin >> input_rides_selected;

    cout << "Enter number of guests: ";
    cin >> input_guest_count;

    cout << "Enter total spending: ";
    cin >> input_total_spending;

    cout << "Enter locker required (Yes/No): ";
    cin >> input_locker_required;

    premium_visitor.setVisitorId(input_visitor_id);
    premium_visitor.setCity(input_city);

    premium_visitor.setPremiumDetails(
        input_visitor_name,
        input_pass_type,
        input_rides_selected,
        input_guest_count,
        input_total_spending,
        input_locker_required
    );

    premium_visitor.displayPremiumPass();

    return 0;
}