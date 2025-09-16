
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
	cout << "Please inter Your Year ? ";
	cin >> Year;
	cout << " \n\n";
	return Year;
}

short ReadMonth()
{
	short Month;
	cout << "Pelase inter Your Month ?";
	cin >> Month;
	return Month;
}

short ReadDay()
{
	short Day;
	cout << "Pelase inter Your Day ? ";
	cin >> Day;
	return Day;

}

struct stDate
{
	short Day;
	short Month;
	short Year;
};


stDate ReadFullDate()
{
	stDate Date;

	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();

	return Date;

}


bool IsLeapYear(short Year)
{
	return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
}


short NumberOfDayInMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
	{
		return 0;
	}

	short NumberOFDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOFDay[Month - 1];


}

bool CheckLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDayInMonth(Date.Month, Date.Year));
}

bool ChekLastMonthInYear(stDate Date)
{
	return (Date.Month == 12);
}






int main()
{
	stDate Date = ReadFullDate();
	
	if (CheckLastDayInMonth(Date))
	{
		cout << "Yes Day Is The Last Day In Month\n";
	}
	else
	{
		cout << "No is Not Last Day\n";
	}

	if (ChekLastMonthInYear(Date))
	{
		cout << "Yes Month Is The Last Day In Month\n";

	}
	else
	{
		cout << "No is Not Last Month\n";

	}


	


}



	