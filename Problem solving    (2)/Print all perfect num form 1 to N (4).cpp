
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
bool isperfectNum(int Num)
{
	int sum = 0;
	for (int i = 1; i <= Num; i++)
	{
		if (Num % i == 0)
		
			sum += i;
		
		
	}
	return Num == sum;
	
}

void PrintPerfectNumfrom1toN(int Num )
{
	for (int i = 1; i < Num; i++)
	{
	  if (isperfectNum(i))
	
		cout << i << endl;
	

	}
}



int main()
{
	PrintPerfectNumfrom1toN(ReadNum("enter your num\n"));
}
