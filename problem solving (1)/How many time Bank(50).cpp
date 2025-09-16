
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadPinCode() 
{
	string pincode;
	cout << "please inter your pin code \n";
	cin >> pincode;
	return pincode;

}

bool Login()
{
	string pincode;
	int counter = 3;

	do
	{
		
		counter--;
		pincode == ReadPinCode();

		if (pincode == "1234")
		{
			return 1;

		}
		else
		{
			system("color 4f");
			cout << "wrong pin you still have " << counter << "tray" << endl;
		}
	} while (counter >= 1 && pincode != "1234");
	return 0;
}



int main()
{
	if (Login())
	{
		system("color 2f");
		cout << "your blance is " << 7500 << endl;
	}
	else
	{
		cout << "you should talk the bank";
	}
	return 0;

}