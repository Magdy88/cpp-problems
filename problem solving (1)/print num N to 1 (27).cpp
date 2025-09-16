
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int num;
	cout << "please inter num \n";
	cin >> num;
cout << "============\n";
	return num;
	
}

void PrintNum_UsingForLoop(int num)
{
	for (int i = num; i >= 1; i--)
	{
		cout << i << endl;
	}
	cout << "============\n";

}
void PrintNum_UsingWhile(int num)
{
	int i = num+1;
	while (i > 1)
	{
		i--;
		cout << i << endl;
	}
	cout << "==============\n";
}
void PrintNum_UsingDoWhile(int num)
{
	int i = num + 1;
	do
	{
		i--;
		cout << i << endl;
	} while (i > 1);
	
}


int main()
{

	int N = readnum();

	PrintNum_UsingForLoop(N);
	PrintNum_UsingWhile(N);
	PrintNum_UsingDoWhile(N);

}