
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadArea(float& a, float& b, float& c)
{
	cout << "please inter num1 \n";
	cin >> a;
	cout << "please inter num2 \n";
	cin >> b;
	cout << "please inter num3 \n";
	cin >> c;
}

float CalcArea(float a, float b, float c)
{
	const float PI = 3.14;
	float p = (a + b + c) / 2;
	float gg =  (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	float Area = PI * pow(gg, 2);
	return Area;
}
void PrintArea(float Area)
{
	cout << "your Area Is " << Area;
}

int main()
{
	float a, b, c;
	ReadArea(a, b, c);
	PrintArea(CalcArea(a, b, c));
	



}