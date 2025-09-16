
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


float readarea()
{
	float r;
	cout << "enter your num \n";
		cin >> r;

		return r;
}
float CalcArea(float r)
{
	const float PI = 3.14;
    float area= PI *(pow(r, 2));
	return area;
}

void PrintArea(float area)
{
	cout << "cricle area " << area;
}
int main()
{

	PrintArea(CalcArea(readarea()));
	



}