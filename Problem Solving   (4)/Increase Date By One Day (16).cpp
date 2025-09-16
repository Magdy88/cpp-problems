
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



stDate IncreaseDateByOneDay( stDate Date)
{

	if (CheckLastDayInMonth(Date))
	{
		if (ChekLastMonthInYear(Date))
		{
			Date.Day = 1;
			Date.Month = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}

	}
	else
	{
		Date.Day++;
	}



	return Date;



}





int main()
{
	stDate Date = ReadFullDate();
	
	Date = IncreaseDateByOneDay(Date);

	cout << "Date After One Day is : " <<
		Date.Day << "/" << Date.Month << "/" << Date.Year;


	


}



	