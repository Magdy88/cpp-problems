
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enoddorevennum{odd =1,even =2 };
int readnum()
{
	int N;
	cout << "enter your num \n";
	cin >> N;
	return N;
}

enoddorevennum checknum(int N)
{
	
	if (N % 2 != 0)
		return enoddorevennum::odd;
	else 

		return enoddorevennum::even;
	
}

void PrintNum_UsingForLoop(int N)
{
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (checknum(i) == enoddorevennum::even)
		{
			sum = sum + i;
		}
	}
	cout << "your sum with for loop is " << sum << endl;
	
}
void PrintNum_UsingWhile(int N)
{
	int sum = 0;
	int i = 0;
	while (i < N )
	{
		i++;
		if(checknum(i) ==enoddorevennum::even)
		{ 
		
		sum += i;
		}
	}
	cout << "your sum with while is " << sum << endl;
}
void PrintNum_UsingDoWhile(int N)
{
	int i = 0;
	int sum = 0;
	do
	{
		i++;
		if (checknum(i) == enoddorevennum::even)
		{
			sum += i;
		}

	} while (i < N);
	cout << "sum num with do while is " << sum << endl;
}



int main()
{
	int N = readnum();
	PrintNum_UsingForLoop(N);
	PrintNum_UsingWhile(N);
	PrintNum_UsingDoWhile(N);



}