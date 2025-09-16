
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int number;
	cout << "please inter your number \n";
	cin >> number;

	return number;
}
int readpower()
{
	int pow;
	cout << "please inter your power \n";
	cin >> pow;

	return pow;
}

int powerpfM(int number, int power)
{
	if (power == 0)
	{
		return 1;
	}
	
	int p = 1;
	for (int i = 1; i <= power; i++)
	{
		p = p * number;
	}
	return p;
}
  
int main()
{
	cout << "reault = " << powerofM(readnum(), readpower());
	
}