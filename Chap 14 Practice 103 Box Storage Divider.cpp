// Chap 14 Practice 103 Box Storage Divider.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class StorageBox
{
	private:
		int item_count;

	public:
		
		void setItemCount(int count)
		{
			item_count = count;
		}
		
		int getCount()
		{
			return item_count;
		}

		StorageBox operator/(int divide)
		{
			StorageBox result_box;

			if (divide != 0)
			{
				result_box.item_count = item_count / divide;
			}
			else
			{
				cout << "Error: Division by zero" << endl;
				result_box.item_count = 0;
			}
		
			return result_box;
		}
};
int main()
{
	StorageBox box1;
	StorageBox box2;

	int count;
	int divide;

	cout << "Enter number of items: ";
	cin >> count;

	cout << "Enter divisor: ";
	cin >> divide;

	box1.setItemCount(count);

	box2 = box1 / divide;

	cout << "Result: " << box2.getCount() << endl;

	return 0;
}