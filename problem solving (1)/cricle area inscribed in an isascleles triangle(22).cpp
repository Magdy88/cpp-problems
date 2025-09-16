
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadArea(float &a, float& b)
{
	cout << "please inter num1 \n";
	cin >> a;
	cout << "please inter num2 \n";
	cin >> b;
}
float CalcArea(float a, float b)
{
	const float PI = 3.14;
	float Area = ((PI * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;
}
void PrintArea(float Area)
{
	cout << "the area is " << Area;
}


int main()
{
	float a, b;
	ReadArea(a, b);
	PrintArea(CalcArea(a,b));



}