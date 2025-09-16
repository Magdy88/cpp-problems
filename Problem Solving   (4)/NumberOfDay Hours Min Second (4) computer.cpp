
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



short NumberOfDaysInYear(int Year)
{
	return (IsLeapYear(Year) ? 366 : 365);

}

short NubmerofHourInYear(int Year)
{
	return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinInYear(int Year)
{
	return NubmerofHourInYear(Year) * 60;
}


int NumberOfSecondInYear(int Year)
{
	return NumberOfMinInYear(Year) * 60;
}

	
	int main()
{

	int Years = ReadNumber();
	
	
	
	cout << "Number of Days          in Year  [" << Years << "] is " <<
		NumberOfDaysInYear(Years) << endl;

	cout << "Number of Hours         in Year  [" << Years << "] is " <<
		NubmerofHourInYear(Years) << endl;

	cout << "Number of Minutes       in Year  [" << Years << "] is " <<
		NumberOfMinInYear(Years) << endl;

	cout << "Number of Seconds       in Year  [" << Years << "] is " <<
		NumberOfSecondInYear(Years) << endl;





	return 0;
}
