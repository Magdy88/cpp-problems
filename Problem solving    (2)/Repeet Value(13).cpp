
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

void RepeatNum(int Num)
{
	for (int i = 1; i <= Num; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
	
	
}








int main()
{
	int Num = ReadNum("please inter your Num?\n");
	
	RepeatNum(Num);
	
	
}

