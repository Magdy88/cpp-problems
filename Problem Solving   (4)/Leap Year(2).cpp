
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

	if (Leap % 400 == 0)
	{
		return true;
	}

   else if(Leap%100==0)
	{
		return false;
	}


	else if (Leap % 4 == 0)
	{
		return true;
	}
	
	else
	{
		return false;
	}

	
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
