
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int num;
	cout << "please inter num \n";
	cin >> num;

	return num;
}

void PrintNum_UsingForLoop(int num)
{
	for (int i = 0; i <= num; i++)
	{
		cout << i << endl;
	}
	cout << "============\n";

}
void PrintNum_UsingWhile(int num)
{
	int i = 0;
	while (i < num)
	{
		i++;
		cout << i << endl;
	}
	cout << "==============\n";
}
void PrintNum_UsingDoWhile(int num)
{
	int i = 0;
	do
	{
		i++;
		cout << i << endl;

	} while (i < num);
}


int main()
{

	int N = readnum();

	PrintNum_UsingForLoop(N);
	PrintNum_UsingWhile(N);
	PrintNum_UsingDoWhile(N);

}