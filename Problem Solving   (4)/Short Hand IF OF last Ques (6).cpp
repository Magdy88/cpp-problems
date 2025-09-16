
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;


short ReadYear()
{
	short Year;
	cout << "Enter Your Year to Check ? ";
	cin >> Year;
	return Year;
}

short ReadMonth()
{
	short Month;
	cout << "Pelase inter Your Month ?";
	cin >> Month;
	return Month;
}

bool IsLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year %4==0  && Year % 100 != 0);
}

short NumberOfDayInMonth(short Month,short Year)
{
	if (Month < 1 || Month>12)
	{
		return 0;
	}

	short NumberOFDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOFDay[Month - 1];


}
short NumberOfHoursInMonth(short Month,short Year)
{
	return NumberOfDayInMonth( Month,Year) * 24;
}

int NumberOFMinInMonth(short Month,short Year)
{
	return NumberOfHoursInMonth(Month,Year) * 60;
}

int NumberOFSecInMonth(short Month,short Year)
{
	return NumberOFMinInMonth(Month,Year) * 60;
}





int main()
{
	short Year = ReadYear();
	short Month = ReadMonth();

	cout << "Number Of Day in Year [" << Month << "] is " <<
		NumberOfDayInMonth(Month,Year)<<endl;

	cout << "Number Of Hours in Year [" << Month << "] is " <<
		NumberOfHoursInMonth(Month,Year) << endl;

	cout << "Number Of minut in Year [" << Month << "] is " <<
		NumberOFMinInMonth(Month,Year) << endl;

	cout << "Number Of Day in Year [" << Month << "] is " <<
		NumberOFSecInMonth(Month,Year) << endl;



}





	