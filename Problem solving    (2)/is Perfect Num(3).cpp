


#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


int ReadPossitiveNum(string message)
{
	int Num;
	do
	{
	   cout << message << endl;
	   cin >> Num;
	} while (Num <= 0);

	return Num;
}

bool isPerfectNum(int Num)
{
	int sum = 0;
	for (int i = 1; i < Num; i++)
	{
		if (Num % i == 0)
		{
			sum += i;
		}
	}
	return sum == Num;
}
void CheckPerfectNum(int Number)
{
	if (isPerfectNum(Number))
	{
		cout << Number << " is perfect\n";
	}
	else
		cout << Number << " is Not Perfect";
}


int main()
{

	CheckPerfectNum(ReadPossitiveNum("Read Perfect Num"));
}