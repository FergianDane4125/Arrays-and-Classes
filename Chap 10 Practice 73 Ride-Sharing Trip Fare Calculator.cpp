// Chap 10 Practice 73 Ride-Sharing Trip Fare Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Trip
{
private:
	float distance_km;
	float rate_per_km;

public:
	Trip()
	{
		distance_km = 0;
		rate_per_km = 12.5;
	}
	void set_distance_km(float distance)
	{
		if (distance >= 0)
		{
			distance_km = distance;
		}
		else
		{
			cout << "Invalid distance\n";
		}
	}
	void set_rate_per_km(float rate)
	{
		if (rate > 0)
		{
			rate_per_km = rate;
		}
		else
		{
			cout << "Invalid rate\n";
		}
	}
	float get_fare()
	{
		return distance_km * rate_per_km;
	}

};

int main()
{
	Trip trip;
	float distance;
	float rate;
	cin >> distance;
	cin >> rate;

	trip.set_distance_km(distance);
	trip.set_rate_per_km(rate);

	cout << "Fare: " << fixed << setprecision(2) << trip.get_fare() << endl;

	return 0;
}