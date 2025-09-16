
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

int CalcArea(int num1 , int num2)

{
	return num1 * num2;
	

}
void PrintArea(int area)
{
	cout << "area is " << area;
}

int main()
{
	int num1, num2;
	readnum(num1,num2);
	PrintArea(CalcArea(num1, num2));



}