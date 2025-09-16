
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
	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "wrong pin\n";
			system("color 4f");
		}
		
	}while (PinCode != "1234");
	return 0;
}



	int main()
	{
		if (Login())
		{
			system("color 2f");
			cout << "\n your blance is " << 7500;
		}
		
	}
