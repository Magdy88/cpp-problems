
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadBillValue(string message)
{
	float BillValue = 0;

	do
	{
		cout << message << endl;
		cin >> BillValue;

	} while (BillValue <= 0);
	return BillValue;
}
float TotalBill(float BillValue)
{
	return BillValue * 1.1 * 1.16;
}

int main()
{
	float BillValue = ReadBillValue("Enter Your Bill Value");

	cout << "Serves Fee = " << BillValue * 1.10 << endl;
	cout << "Sales Tax = " << BillValue * 1.1 * 1.16 << endl;

	cout << "Total Value = " << TotalBill(BillValue);

	


}