// Chap 12 Practice 91 Smart Device.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Camera
{
	public:
		int camera_megaspixels;
};
class MusicPlayer 
{
	public:
		int speaker_power;
};
class SmartPhone : public Camera, public MusicPlayer
{
	public:
		string brand_name;
};
int main()
{
	SmartPhone phone;

	getline(cin, phone.brand_name);
	cin >> phone.camera_megaspixels;
	cin >> phone.speaker_power;

	cout << "Brand: " << phone.brand_name << endl;
	cout << "Camera: " << phone.camera_megaspixels << " MP" << endl;
	cout << "Speaker Power: " << phone.speaker_power << " W" << endl;

	return 0;
}
