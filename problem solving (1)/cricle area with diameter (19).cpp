
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadArea()
{
	float D;
	cout << "please inter diameter \n";
	cin >> D;
	return D;

}

float CalcArea(float D)
{
	const float PI = 3.14;
	float Area = (PI * (pow(D, 2))) / 4;
	return Area;
}

void PrintArea(float circlearea)
{
	cout << "your area is " << circlearea;
}
int main()
{

	PrintArea(CalcArea(ReadArea()));
	



}