
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int readnum()
{
	int number;
	cout << "please inter your total sale \n";
	cin >> number;

	return number;
}

float CalcCommission(float TotalSale)
{
	
	if (TotalSale >= 1000000)
		return 0.01;

	else if (TotalSale >= 500000)
		return 0.02;

	else if (TotalSale >= 100000)
		return 0.03;

	else if (TotalSale >= 50000)
		return 0.05;

	else
		return 0.00;

}

float printcommission(int TotalSale)
{
	return (CalcCommission(TotalSale) * TotalSale);
}


int main()
{
	int TotalSale = readnum();

	cout << "commission percentage = " << CalcCommission(TotalSale) << endl;
	cout << " Total commission is " << printcommission(TotalSale) << endl;

}