
#include <iostream>
#include <cmath>
#include <string>
using namespace std;



float ReadPossitiveNum(string message)
{
	float num = 0;

	do
	{
		cout << message << endl;
		cin >> num;
	} while (num <= 0);

	return num;

}
float CalcReminder(float TotalBill, float Cashpaid)
{
	return TotalBill - Cashpaid;
}

int main()
{
	float TotalBill = ReadPossitiveNum("read Total Bill ?");
	float Cashpaid = ReadPossitiveNum("read Cash paid ?");
	cout << endl;

	cout << "total bill = " << TotalBill << endl;
	cout << "cash paid = " << Cashpaid << endl;
	cout << "********************\n";

	cout << "Total Reminder = " << CalcReminder( Cashpaid, TotalBill);


}