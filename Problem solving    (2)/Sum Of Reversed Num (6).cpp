
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int ReadNum(string Message)
{
	int Num;
	do
	{
		cout << Message << endl;
		cin >>Num;
	} while (Num<=0 );
	return Num;

}

void SumOfDigtal(int Num)
{
	int Remminder=0 ;
	int sum = 0;

	while (Num > 0)
	{
		Remminder = Num % 10;
		Num = Num / 10;
		sum += Remminder;

	}
	cout << "\n---------------------\n";
	cout << "sum is " << sum << endl;
}




int main()
{
	SumOfDigtal(ReadNum("enter your num\n"));
}
