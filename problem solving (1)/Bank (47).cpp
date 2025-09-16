
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "please inter pin code ? \n";
	cin >> PinCode;
	return PinCode;
}
bool Login()
{
	string PinCode;
	int counter = 3;

	do
	{
		counter--;
		PinCode == ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4f");
			cout << "wrong pin you stell have " << counter << " Tray " << endl;
		}

	} while (counter >= 1 && PinCode != "1234");
	return 0;
}



int main()
{
	if (Login())
	{
		system("color 2f");
		cout << "\n your blance is " << 7500 << endl;
	}
	else
	{
		cout << "You Should Talk The Bank";
	}

}
