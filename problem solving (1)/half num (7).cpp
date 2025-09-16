
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int num;
	cout << "please inter your num \n";
		cin >> num;

		return num;
}

float opp(int num)
{
	return (float)num / 2;
}

void printnum(int num)
{
	string result = "half of " + to_string(num) + " is " + to_string(opp(num));
	cout << endl << result << endl;
}



int main()
{

	printnum(readnum());

}