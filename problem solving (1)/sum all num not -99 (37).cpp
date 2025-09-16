
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int readnum(string message)
{
	int num;
	cout << message << endl;
	cin >> num;

	return num;
}
int printsum()
{
	int num = 0;
	int sum = 0;
	int counter = 1;

	
	do
	{
		num = readnum("enter num " + to_string(counter));
		if (num == -99)
		{
			break;
		}

		
		sum += num;
		counter++;


	}while (num != -99) ;

	return sum;
}
int main()
{
	cout << "sum is " << printsum();

}