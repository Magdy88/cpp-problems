
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

int GetNumOfDiget(int Num, int Diget)
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

void PrintHowManyDiget(int Num)
{
	
	for (int i = 1; i < 10; i++)
	{
		short DigetFrequance = 0;

		DigetFrequance = GetNumOfDiget(Num, i);
		if (DigetFrequance > 0)
		{
			cout << "Diget " << i << "Frequance is " <<
				DigetFrequance << " Times" << endl;
		}

	}
}






int main()
{
	int Num = ReadNum("please inter your Num?\n");

	PrintHowManyDiget(Num);
		
	
	
}

