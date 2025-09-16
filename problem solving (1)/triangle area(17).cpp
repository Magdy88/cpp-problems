
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void readnum(float& a, float& h)
{
	cout << "please inter num1 \n";
	cin >> a;
	cout << "please inter num2 \n";
	cin >> h;
}

float CalcArea(float a, float h)
{
	return 0.5 * a * h;
}

void PrintArea(float area)
{
	cout << "tringle area " << area;
}

int main()
{
	float a, h;
	readnum(a, h);
	PrintArea(CalcArea(a, h));
	



}