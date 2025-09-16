
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

int PrintReveseNum(int Num)
{
	int Remminder = 0;
	int Number2 = 0;
	while(Num>0)
	{ 
	 Remminder = Num % 10;
	Num = Num / 10;
	Number2 = Number2 * 10 + Remminder;

}
	return Number2;

	
}








int main()
{
	cout << "Revers is " <<PrintReveseNum(ReadNum("please inter your Num ?"));
	
}

