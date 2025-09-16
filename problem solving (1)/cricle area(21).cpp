
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


float ReadArea()
	{
		float L;
		cout << "please inter your area \n";
		cin >> L;

		return L;
	}

float CalcArea(float L)
{
	const float PI = 3.14;
	float Area = (pow(L, 2) / (4 * PI));

	return Area;
}

void PrintArea(float Area)
{
	cout << "the area is " << Area;
}

int main()
{

	PrintArea(CalcArea(ReadArea()));


}