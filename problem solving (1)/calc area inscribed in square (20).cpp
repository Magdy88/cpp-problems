
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


float ReadArea()
{
	float A;
	cout << "please inter area \n";
		cin >> A;
	return A;
}

float CalcArea(float A)
{
	const float PI = 3.14;
	float Area = (PI * (pow(A, 2)))/4;
	return Area;

}
void PrintArea(float calcarea)
{
	cout << "area is " << calcarea;
}
int main()
{

	PrintArea(CalcArea(ReadArea()));



}