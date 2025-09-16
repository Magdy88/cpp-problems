
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readage()
{
	int age;
	cout << "please inter age between 18 and 45 \n";
	cin >> age;

	return age;
}

bool trueage(int age, int to, int from)
{
	return (age >= to && age <= from);
}

int checkage(int to, int from)
{
	int age = 0;

	do
	{
		age = readage();
	} while (!trueage(age, to, from));

	return age;

}
void printage(int age)
{
	cout << "your age is " << age;
}
int main()
{

	printage(checkage(18,45));



}