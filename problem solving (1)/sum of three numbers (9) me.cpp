
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct stinfo
{
	int num1;
	int num2;
	int num3;
};
stinfo readnums()
{
	stinfo info;
	cout << "read number 1 \n";
	cin >> info.num1;
	cout << "read number 2 \n";
	cin >> info.num2;
	cout << "read num 3";
	cin>> info.num3;

	return info;

}

int suminfo(stinfo info)
{
	int sum;
	sum = info.num1 + info.num2 + info.num3;

	return sum;
}

void printnums(int sum)
{
	cout << "the sum of num is " << sum;
}


int main()
{
	printnums(suminfo(readnums()));
}