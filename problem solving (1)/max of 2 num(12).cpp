
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void readnum(int& num1, int& num2)
{
	cout << "please inter num1 \n";
	cin >> num1;
	cout << "please inter num2 \n";
	cin >> num2;

}
int checkbignum(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;

}
void printbignum(int max)
{
	cout << "the max is " << max << endl;
}

int main()
{
	int num1, num2;
	readnum(num1, num2);
	printbignum(checkbignum(num1, num2));


}