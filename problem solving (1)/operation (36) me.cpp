
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stcalcnums
{
	int num1, num2;
	string op;
};
stcalcnums readnums()
{
	stcalcnums readnumandop;
	cout << "please inter your num \n";
	cin >> readnumandop.num1;
	cout << "please inter your num \n";
	cin >> readnumandop.num2;
	cout << "enter your operation \n";
	cin >> readnumandop.op;

	return readnumandop;

}

float PrintReault(stcalcnums readnumandop)

{
	
	if (readnumandop.op == "+")
		return readnumandop.num1 + readnumandop.num2;

	else if (readnumandop.op == "-")
		return readnumandop.num1 - readnumandop.num2;

	else if (readnumandop.op == "*")
		return readnumandop.num1 * readnumandop.num2;

	else if (readnumandop.op == "/")
		return readnumandop.num1 / readnumandop.num2;

	

}



int main()
{
	cout << "the result is " << PrintReault(readnums());


}