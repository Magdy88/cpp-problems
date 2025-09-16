
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum()
{
	int num;
	cout << "please inter your num"
    cin >> num;
}

int opp(int num)
{
	int halfnum;

	halfnum = num / 2;

	return halfnum;
}

void printnum(int theopp)
{
	cout << "your half num is " << halfnum;

}



int main()
{

	printnum(opp(readnum()));

}