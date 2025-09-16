
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
	for (int i = 65+Num-1; i >=65; i--)
	{
		for (int j = 1; j <=Num- (65+Num-1-i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
	
	
	
}








int main()
{
	int Num = ReadNum("please inter your Num?\n");
	
	RepeatNum(Num);
	
	
}

