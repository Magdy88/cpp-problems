
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
		cin >> Num;
	} while (Num <= 0);
	return Num;

}

void PrintDigtal(int Num)
{
	int Remminder = 0;

	while (Num > 0)
	{
		Remminder = Num % 10;
		Num = Num / 10;
		cout << Remminder << endl;

	}
}




int main()
{
	PrintDigtal(ReadNum("enter your num\n"));
}
