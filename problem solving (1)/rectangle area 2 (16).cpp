
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void readnum(float& a, float& d)
{
	cout << "pleasa inter num1 \n";
	cin >> a;
	cout << "please inter num2 \n";
	cin >> d;
}

float CalcArea(float a, float d)
{
	float area = a * sqrt (pow(a, 2) - pow(d, 2));

	return area;
}

void PrintArea(float area)
{
	cout << "rectangle area is " << area << endl;
}

int main()
{
	float a, d;
	readnum(a, d);
	PrintArea(CalcArea(a, d));
	



}