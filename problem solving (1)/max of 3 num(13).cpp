
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readnum(int& num1, int& num2, int& num3)
{
	cout << "please inter num1 \n";
	cin >> num1;
	cout << "please inrer num2 \n";
	cin >> num2;
	cout << "please inter num3 \n";
	cin >> num3;

}

int checkmaxnum(int num1, int num2, int num3)
{
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else 
			return num3;
	if (num2 > num3)
		return num2;
	else
		return num3;
}
void printmaxnum(int max)
{
	cout << "the max is " << max << endl;
}
int main()
{
	int num1, num2, num3;
	readnum(num1, num2, num3);
	printmaxnum(checkmaxnum(num1, num2, num3));
	
	

}