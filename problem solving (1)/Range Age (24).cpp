
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readage()
{
	int age;
	cout << "please inter age \n";
	cin >> age;

	return age;
}

bool calcage(int age ,int from ,int to)
{
	return (age >= to && age <= from);
}
int checkavregbetweenage(int from, int to)
{
	int age = 0;
	do
	{
		age = readage();
	} while (!calcage(int age, int from, int to))
		return age;
}
void printage(int age)
{
	if (calcage(age, 18, 45))
		cout << "valid age";
	else
		cout << "invalid age";
}


int main()
{
	
	printage(checkavregbetweenage(18,45));



}