
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

short CalcHowManyDayTillNow(short Days, short Month, short Year)
{
	short TotalDays = 0;

	for (short i = 0; i < Month; i++)
	{
		TotalDays += NumberOfDayInMonth(i, Year);
	}

	TotalDays += Days;
	return TotalDays;


}

stDate GetDataFromDayOrderInYear (short DayOrderInYear,  short Year)
{

	stDate Date;
	short RemianingDays = DayOrderInYear;
	short MonthDay = 0;

	Date.Year = Year;
	Date.Month = 1;

	while (true)
	{
		MonthDay = NumberOfDayInMonth(Date.Month, Year);

		if (RemianingDays > MonthDay)
		{
			RemianingDays -= MonthDay;
			Date.Month++;
		}
		else
		{
			Date.Day = RemianingDays;
			break;
		}

	}
	return Date;


	

}





int main()
{
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();

	short DayOrederInYear = CalcHowManyDayTillNow(Day, Month, Year);


	cout << "\nNumber of Days from the begining of the year is " <<
		DayOrederInYear;


	stDate Date;
	Date = GetDataFromDayOrderInYear(DayOrederInYear, Year);
	cout << "\n\nDate For [" << DayOrederInYear << "] is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year;


}



	