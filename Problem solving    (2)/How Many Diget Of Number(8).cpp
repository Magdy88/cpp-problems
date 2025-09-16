
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

int PrintNumOfDiget(int Num, int Diget)
{
	int Remminder = 0;
	int counter = 0;
	while (Num > 0)
	{
		Remminder = Num % 10;
		Num = Num / 10;
		if (Remminder == Diget)
		{
			counter++;
		}

	}return counter;
}








int main()
{
	int Num = ReadNum("please inter your Num?\n");
	int Diget = ReadNum("Please choose your Diget?\n");

	cout << "Diget " << Diget << " Frequance is " <<
		PrintNumOfDiget(Num, Diget) << " Times";
		
	
	
}

