
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



bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDayInMonth(Date.Month,
		Date.Year));
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


stDate IncreaseDateBy10Days(short Days,stDate Date)
{
	for (short i = 1; i <= Days; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}
	return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
	for (short i = 0; i < 7; i++)
	{
		Date = IncreaseDateByOneDay(Date);
	}
	return Date;
}

stDate IncreaseDateBy10Weeks(short Weeks,stDate Date)
{
	for (int i = 1; i <= Weeks; i++)
	{
		Date = IncreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate increaseDateBy1Month(stDate Date)
{
	if (Date.Month == 12)
	{
		Date.Month = 1;
		Date.Year++;
	}
	else
	{
		Date.Month++;
	}

	short NumberOfDayInCurrentMonth = NumberOfDayInMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDayInCurrentMonth)
	{
		Date.Day = NumberOfDayInCurrentMonth;
	}

	return Date;
}

stDate increaseDataBy5Month(short Month, stDate Date)
{
	for (int i = 1; i <= Month; i++)
	{
		Date = increaseDateBy1Month(Date);
	}
	return Date;
}

stDate increaseDateBy1Year(stDate Date)
{

	Date.Year++;

	return Date;
}

stDate IncreaseDateByXYears(short Years, stDate Date)
{
	for (int i = 1; i <= Years; i++)
	{
		Date = increaseDateBy1Year(Date);
	}
	return Date;
}

stDate IncreaseDateByXYearsFaster(short Years, stDate Date)
{
	Date.Year += Years;
	return Date;
}

stDate InCreaseDateBy1Decade(stDate Date)
{
	Date.Year += 10;
	return Date;
}

stDate increaseDateByXDecade(short Decade, stDate Date)
{
	for (int i = 1; i <= Decade; i++)
	{
		Date = InCreaseDateBy1Decade(Date);
	}
	return Date;
}

stDate increaseDateByXDecadeFaster(short Decade,stDate Date)
{
	Date.Year += Decade * 10;
	return Date;
}

stDate InCrease1Century(stDate Date)
{
	Date.Year += 100;
	return Date;
}

stDate InCreaseXCentury(stDate Date)
{
	Date.Year += 1000;
	return Date;
}








int main()
{
	stDate Date = ReadFullDate();

	Date=IncreaseDateByOneDay(Date);
	cout << "01-Adding One Day is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateBy10Days(10,Date);
	cout << "02-Adding 10 Day is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByOneWeek(Date);
	cout << "03-Adding One week is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateBy10Weeks(10,Date);
	cout << "04-Adding 10 Weeks is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = increaseDateBy1Month(Date);
	cout << "05-Adding One Month is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	Date = increaseDataBy5Month(5,Date);
	cout << "06-Adding 5 Month is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = increaseDateBy1Year( Date);
	cout << "06-Adding 1 Year is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = IncreaseDateByXYears(10,Date);
	cout << "07-Adding X Years is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = IncreaseDateByXYearsFaster(10, Date);
	cout << "08-Adding X Years (Faster) is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = InCreaseDateBy1Decade( Date);
	cout << "09-Adding 1 Decade : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = increaseDateByXDecade(10,Date);
	cout << "10-Adding X Decade : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = increaseDateByXDecadeFaster(10, Date);
	cout << "11-Adding X Decade (Faster) : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = InCrease1Century(Date);
	cout << "12-Adding 1 Century : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = InCreaseXCentury(Date);
	cout << "12-Adding X Century : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;



	






}


