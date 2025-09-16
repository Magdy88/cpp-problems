
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum ennumber{pass =1 ,faild =2};
int readnum()
{
	int num;
	cout << "please inter your num \n";
	cin >> num;
	return num;
}

ennumber checknum(int num)
{
	if (num >= 50)
		return ennumber::pass;
	else
		return ennumber::faild;

}
void printnum(ennumber number)
{
	if (number == ennumber::pass)
		cout << "pass";
	else
		cout << "faild";
}



int main()
{
	printnum(checknum(readnum()));

}