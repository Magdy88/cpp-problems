
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int N;
	cout << "please inter your num \n";
	cin >> N;
	return N;
}

void printfactoricalnum(int N)
{
	int fact = 1;
	for (int i = N; i >= 1; i--)
	{
		fact *= i;
	}
	cout << "factorical with for loop is " << fact << endl;
	
}
void printfactoricalnum_uaingwhile(int  N)
{
	int fact = 1;
	int i = N+1;
	while (i > 1)
	{
		i--;
		fact *= i;
	}
	cout << "factorical with while is " << fact << endl;
}
void printnum_usingdowhile(int N)
{
	int fact = 1;
	int i = N +1;
	do
	{
		i--;
		fact *= i;

	} while (i > 1);
	cout << "factorical with do while is " << fact << endl;
}


int main()
{
	int N = readnum();
	printfactoricalnum(N);
	printfactoricalnum_uaingwhile(N);
	printnum_usingdowhile(N);

}