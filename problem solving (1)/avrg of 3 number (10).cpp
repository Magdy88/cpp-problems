
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum bignum { num1 = 1, num2 = 2 };
void readnum(int& num1, int& num2)
{
	cout << "please inter num1 \n";
	cin >> num1;
	cout << "please inter num2 \n";
	cin >> num2;

}
bignum checkbignum(int num1, int num2)
{
	if (num1 > num2)
		return bignum::num1;
	else
		return bignum::num2;

}
void printbignum(float thebigone)
{
	if (checkbignum(num1, num2) == bignum::num1)
		cout << "number1 is the max \n";
	else
		cout << "number2 is the max \n";
}

int main()
{
	int num1, num2;
	readnum(num1, num2);
	printbignum(checkbignum(num1, num2));


}