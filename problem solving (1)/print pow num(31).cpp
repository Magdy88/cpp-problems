
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
  
int readnum()
{
	int N;
	cout << "enter your num \n";
	cin >> N;
	cout << "============ \n";

	return N;
}

void printpownum(int N)
{
	for (int i = 2; i <= 4; i++)
	{
		cout << pow(N, i) << endl;
	}
	cout << "============ \n";
}

void printpownum_usingwhile(int N)
{
	int i = 1;
	while (i < 4)
	{
		i++;
		cout << pow(N, i) << endl;

	}
	cout << "============ \n";

}

void printpownum_usingdowhile(int N)
{
	int i = 1;
	do
	{
		i++;
		cout << pow(N, i) << endl;
	} while (i < 4);
}
int main()
{
	int N = readnum();
	printpownum(N);
	printpownum_usingwhile(N);
	printpownum_usingdowhile(N);
}