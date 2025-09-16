
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
	cout << "Please inter Your a Year To Check ?";
	cin >> Num;
	return Num;
}

bool IsLeapYear(int Year)
{

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

	
}

int checkLeapYear(int Year)
{
	if (IsLeapYear(Year))
	{
		return 366;
	}
	else
	{
		return 365;
	}

}

void NumberOfDaysInYear(int Year)
{
	if (IsLeapYear(Year))
	{
		cout << "Number of Day       in Year  [" << Year << "] is " << checkLeapYear(Year) << endl;
	}
	else
	{
		cout << "Number of Day       in Year  [" << Year << "] is " << checkLeapYear(Year) << endl;

	}

}

void NubmerofHourInYear(int Year)
{
	if (IsLeapYear(Year))
	{
		cout << "Number of Hours       in Year  [" << Year << "] is " <<
			checkLeapYear(Year)*24 << endl;

	}
	else
	{
		cout << "Number of Hours       in Year  [" << Year << "] is " <<
			checkLeapYear(Year) * 24 << endl;

	}
}

void NumberOfMinInYear(int Year)
{
	if (IsLeapYear(Year))
	{
		cout << "Number of Minute       in Year  [" << Year << "] is " <<
			checkLeapYear(Year) * 24*60 << endl;

	}
	else
	{
		cout << "Number of Minute       in Year  [" << Year << "] is " <<
			checkLeapYear(Year) * 24*60 << endl;

	}

}

void NumberOfSecondInYear(int Year)
{
	if(IsLeapYear(Year))
	{ 
	cout << "Number of Hours       in Year  [" << Year << "] is " <<
		checkLeapYear(Year) * 24*60*60<<endl;
}

	else
	{
		cout << "Number of Hours       in Year  [" << Year << "] is " <<
			checkLeapYear(Year) * 24*60*60 << endl;

	}
}
	
	int main()
{

	int Years = ReadNumber();
	NumberOfDaysInYear(Years);
	NubmerofHourInYear(Years);
	NumberOfMinInYear(Years);
	NumberOfSecondInYear(Years);

	





	return 0;
}
