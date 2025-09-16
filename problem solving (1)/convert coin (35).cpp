
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enoptype { Add = '+', sub = '-', Multi = '*', divi = '/' };

float readnum(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;
	return number;
}

enoptype readoptype()
{
	char ot = 0;
	cout << "please inter operation type (+,-,*,/)\n";
	cin >> ot;
	return (enoptype)ot;
}
float calculate(int number1, int number2, enoptype optype)
{
	switch (optype)
	{
	case enoptype::Add:
		return number1 + number2;
	case enoptype::sub:
		return number1 - number2;
	case enoptype::Multi:
		return number1 * number2;
	case enoptype::divi:
		return number1 / number2;
	default:
		return number1 + number2;
	}
}


int main()
{
	float number1 = readnum("please inter your frist number");
	float number2 = readnum("please inter your second number");

	enoptype optype = readoptype();

	cout << "result is " << calculate(number1, number2, optype);

}