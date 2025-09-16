
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readnum(int& num1, int &num2)
{
	cout << "please inter num1 \n";
	cin >> num1;
	cout << "please inter num2 \n";
	cin >> num2;

}
 
void swapnum(int &num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

}
void printnums(int num1,int num2)
{
	cout << "number1 is " << num1 << endl;
	cout << "number2 is " << num2 << endl;

}

int main()
{
	int num1, num2;
	readnum(num1, num2);
	printnums(num1,num2);
	swapnum(num1, num2);
	printnums(num1, num2);


}