
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

#pragma warning(disable : 4996)




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
	cout << "Pelase inter Your Vacation Day ? ";
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

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}


bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
		: false;
}

bool IsDate1AfterDate2(stDate Date1,stDate Date2)
{

	return ((!IsDate1BeforeDate2(Date1, Date2)) && (!IsDate1EqualDate2(Date1, Date2)));

}

short CompareFunction(stDate Date1, stDate Date2)
{
	if (IsDate1AfterDate2(Date1, Date2))
	{
		return 1;
	}
	else if (IsDate1BeforeDate2(Date1, Date2))
	{
		return -1;
	}
	else
	{
		return 0;
	}

}

/*
short NumberOfDayInMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
	{
		return 0;
	}

	short NumberOFDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOFDay[Month - 1];


}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDayInMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
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

int GetDifferenceInDays(stDate Date1, stDate Date2, bool
	IncludeEndDay = false)
{
	int Days = 0;
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days : Days;
}

short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	//0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
		/ 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
	return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

string DayShortName(short DayOfWeek)
{
	string arrDay[7] = { "Sun","Mon","Thu","Wen","thur","Fri","Sat" };

	return arrDay[DayOfWeek];
}

bool IsEndOfWeek(stDate Date)
{
	return DayOfWeekOrder(Date) == 6;
}

bool IsWeekEnd(stDate Date)
{
	if (Date.Day == 5 || Date.Day == 6)
	{
		return true;
	}
	return false;
}

bool IsBusinessDay(stDate Date)
{
	return !(IsWeekEnd(Date));
}

short DayUntillTheEndOfWeek(stDate Date)
{
	return 6 - DayOfWeekOrder(Date);

}

short DayUntillTheEndOfMonth(stDate Date)
{
	stDate EndOfMOnth;

	EndOfMOnth.Day = NumberOfDayInMonth(Date.Month, Date.Year);
	EndOfMOnth.Month = Date.Month;
	EndOfMOnth.Year = Date.Year;

	return GetDifferenceInDays(Date, EndOfMOnth, true);

}


short DayUntilTheEndOfYear(stDate Date)
{
	stDate EndOfYearDate;
	EndOfYearDate.Day = 31;
	EndOfYearDate.Month = 12;
	EndOfYearDate.Year = Date.Year;
	return GetDifferenceInDays(Date, EndOfYearDate, true);
}


*/



stDate GetSystemDate()
{
	stDate Date;
	time_t t = time(0);
	tm* now = localtime(&t);
	Date.Year = now->tm_year + 1900;
	Date.Month = now->tm_mon + 1;
	Date.Day = now->tm_mday;
	return Date;
}



int main()
{
	stDate Date1 = ReadFullDate();
	stDate Date2 = ReadFullDate();

	cout << CompareFunction(Date1, Date2);



}


