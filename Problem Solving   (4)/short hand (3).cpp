
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Please inter Your Num ?";
	cin >> Num;
	return Num;
}

bool LeapYear(int Leap)
{

	return (Leap % 4 == 0 && Leap % 100 != 0) || (Leap % 400 == 0);


}
	
	int main()
{

	int Number = ReadNumber();

	if (LeapYear(Number))
	{
		cout << "Leap Year";
	}
	else
	{
		cout << "Not Leap";
	}





	return 0;
}
