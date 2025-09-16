
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int N;
	cout << "enter your num \n";
	cin >> N;
	return N;
}


void printsumnum_forloop(int N)
{
	int sum = 0;
	for (int i = 1; i < 10; i++)
	{
		if (i%2==0)

		{
			continue;

		}
		sum = sum + i;
	}
	cout << "sum with for loop is " << sum << endl;
	cout << "=======\n";

}

void printsumnum_usingwhile(int N)
{
	int sum = 0;
	int i = 0;
	while (i < 10)
	{
		i++;
		if (i % 2 == 0)
		{
			continue;
		}
		
		sum += i;


	}
	cout << "sum with while is " << sum << endl;
	cout << "=======\n";

}
void printsumnum_usingdowhile(int N)
{
	int i = 0;
	int sum = 0;
	do
	{
		i++;
		if (i % 2 == 0)
		{
			continue;
		}
		sum += i;
	} while (i < 10);
	cout << "sum with do while is " << sum;
}

int main()
{
	int N = readnum();
	printsumnum_forloop(N);
	printsumnum_usingwhile(N);
	printsumnum_usingdowhile(N);

}