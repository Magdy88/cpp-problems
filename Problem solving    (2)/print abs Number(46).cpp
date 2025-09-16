
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;



float ReadNum()
{
	int Number;
	cout << "please inter your Numer?\n";
	cin >> Number;
	return Number;
}

float PrintAbs(int Number)
{
	if (Number > 0)
		return Number;
	else
	return  Number * -1;
}







int main()
{
	int Number = ReadNum();

	cout << "My abs Result is " << PrintAbs(Number) << endl;
	cout << "c++ abs Result : " << abs(Number) << endl;


}

