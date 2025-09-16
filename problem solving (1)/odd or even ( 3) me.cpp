
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum( )
{
	int num;
	cout << "please inter num \n";
	cin >> num;
	return num;
}
void checknum(int num)
{
	if (num >= 0)
	{
		cout << "the num is odd ";
	}
	if (num <= 0)
	{
		cout << "the num is even ";
	}
}
int main()
{
	checknum(readnum());
	
	






	return 0;


}