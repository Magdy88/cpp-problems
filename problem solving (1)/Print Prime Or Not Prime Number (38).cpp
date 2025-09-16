
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadPossitiveNum(string message)
{
	float num = 0;

	do
	{
		cout << message;
		cin >> num;
	}
	return num;

}

int main()
{
	float TotalBill = ReadPossitiveNum("read Total Bill ?");
	float Cashpaid = ReadPossitiveNum("read Cash paid ?");
	cout << endl;

	cout << "total bill = " << TotalBill << endl;


}