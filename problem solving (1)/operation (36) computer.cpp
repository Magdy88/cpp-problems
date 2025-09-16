
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enOperationType { Odd = '+', Sub = '-', Muliti = '*', Divi = '/' };

float readnum(string message)
{
	float number = 0;
	cout << message << endl;
	cin >> number;

	return number;

}

enOperationType readoptype()
{
	char OT = '+';

	cout << "enter your operation ( + , - , * , / )  \n";
	cin >> OT;

		return (enOperationType)OT;
}

float Calculate(int number1, int number2, enOperationType optype)
{
	switch(optype)
	{
		case enOperationType::Odd:
			return number1 + number2;
	    case enOperationType::Sub:
				return number1 - number2;
		case enOperationType::Muliti:
				return number1 * number2;
		case enOperationType::Divi:
				return number1 / number2;
		default:
			return number1 + number2;
}



}
int main()
{
	float number1 = readnum("please inter your frist number");
	float number2 = readnum("please inter your second number");

	enOperationType optype = readoptype();

	cout << "the result is " << Calculate(number1, number2, optype);

}