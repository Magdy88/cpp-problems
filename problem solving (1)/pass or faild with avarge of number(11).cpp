
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum passorfaild {pass=1,faild=0};
void readmark(int& num1, int& num2, int& num3)
{
	cout << "please inter num1 \n";
	cin >> num1;
	cout << "please inter num2 \n";
	cin >> num2;
	cout << "please inter num3 \n";
	cin >> num3;

}
int sumofmark(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

int avrageofmark(int num1, int num2, int num3)
{
	return (float)(sumofmark(num1, num2, num3) / 3);
}
passorfaild isaccept(float avarge)
{
	if (avarge >=50)
		return passorfaild::pass;
	else
		return passorfaild::faild;
}
void printmark(float avarge)
{

	cout << "your avrage is " << avarge << endl;

	if (isaccept(avarge) == passorfaild::pass)
		cout << "pass";
	else
		cout << "faild";
}
int main()
{
	int num1, num2, num3;
	readmark(num1, num2, num3);
	printmark(avrageofmark(num1,num2,num3));

}