
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

int ReverseNum(int Num)
{
	int Remminder = 0; int Num2 = 0;
	while (Num > 0)
	{
		Remminder = Num % 10;
		Num = Num / 10;
		Num2 = Num2 * 10 + Remminder;


	}
	return Num2;
}

void PrintNum(int Num)
{
	int Remminder = 0;
	while (Num > 0)
	{
		Remminder = Num % 10;
		Num = Num / 10;
		cout << Remminder << "\t";
	}
}







int main()
{
	int Num = ReadNum("please inter your Num?\n");

     PrintNum(ReverseNum(Num));
	
		
	
	
}

