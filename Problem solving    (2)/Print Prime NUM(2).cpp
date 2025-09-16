
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPrimeornotPrime{ Prime = 1, notPrime = 2 };

int ReadNum(string Message)
{
	int Num;
	do
	{
		cout << Message << endl;
		cin >>Num;
	} while (Num<0 || Num>Num);
	return Num;

}

enPrimeornotPrime CheckNum(int Num)
{
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
		{
			return enPrimeornotPrime::notPrime;

		}
		else
			return enPrimeornotPrime::Prime;
		
	}
}

void PrintPrimeOrNotPrime(int Num)
{
	for (int i = 1; i <= Num; i++)
	{


		if (CheckNum(i) == enPrimeornotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	
	PrintPrimeOrNotPrime(ReadNum("read posstive Num"));

}
