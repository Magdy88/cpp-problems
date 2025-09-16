
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readnumber(int& num1, int& num2, int& num3)
{
	cout << "please inter num 1 ? \n";
	cin >> num1;
	cout << "please inter num 2 ? \n";
	cin >> num2;
	cout << "please inter num 3 ? \n";
	cin >> num3;
}

int sumofnumber(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
void printnum(int total)
{
	cout << "your sum is " << total;
}


int main()
{

	int num1, num2, num3;
	readnumber(num1, num2, num3);
	printnum(sumofnumber(num1, num2, num3));

}