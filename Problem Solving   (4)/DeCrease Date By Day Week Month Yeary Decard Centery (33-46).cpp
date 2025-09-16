
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




stDate DecreaseDateByOneDay(stDate Date)
{
	if (Date.Day == 1)
	{
		if (Date.Month == 1)
		{
			Date.Day == 31;
			Date.Month = 12;
			Date.Year--;
		}
		else
		{
			Date.Day = NumberOfDayInMonth(Date.Month, Date.Year);
			Date.Month--;
		}
	}
	else
	{
		Date.Day--;
	}

	return Date;
}


stDate DecreaseDateBy10Days(short Days,stDate Date)
{
	for (short i = 1; i <= Days; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}
	return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
	for (short i = 0; i < 7; i++)
	{
		Date = DecreaseDateByOneDay(Date);
	}
	return Date;
}

stDate DecreaseDateBy10Weeks(short Weeks,stDate Date)
{
	for (int i = 1; i <= Weeks; i++)
	{
		Date = DecreaseDateByOneWeek(Date);
	}
	return Date;
}

stDate DecreaseDateBy1Month(stDate Date)
{
	if (Date.Month == 1)
	{
		Date.Month = 12;
		Date.Year--;
	}
	else
	{
		Date.Month--;
	}

	short NumberOfDayInCurrentMonth = NumberOfDayInMonth(Date.Month, Date.Year);

	if (Date.Day > NumberOfDayInCurrentMonth)
	{
		Date.Day = NumberOfDayInCurrentMonth;
	}

	return Date;
}

stDate DecreaseDataBy5Month(short Month, stDate Date)
{
	for (int i = 1; i <= Month; i++)
	{
		Date = DecreaseDateBy1Month(Date);
	}
	return Date;
}

stDate DecreaseDateBy1Year(stDate Date)
{

	Date.Year--;

	return Date;
}

stDate DecreaseDateByXYears(short Years, stDate Date)
{
	for (int i = 1; i <= Years; i++)
	{
		Date = DecreaseDateBy1Year(Date);
	}
	return Date;
}

stDate DecreaseDateByXYearsFaster(short Years, stDate Date)
{
	Date.Year -= Years;
	return Date;
}

stDate DeCreaseDateBy1Decade(stDate Date)
{
	Date.Year -= 10;
	return Date;
}

stDate DecreaseDateByXDecade(short Decade, stDate Date)
{
	for (int i = 1; i <= Decade; i++)
	{
		Date = DeCreaseDateBy1Decade(Date);
	}
	return Date;
}

stDate DecreaseDateByXDecadeFaster(short Decade,stDate Date)
{
	Date.Year -= Decade * 10;
	return Date;
}

stDate DeCrease1Century(stDate Date)
{
	Date.Year -= 100;
	return Date;
}

stDate DeCreaseXCentury(stDate Date)
{
	Date.Year -= 1000;
	return Date;
}








int main()
{
	stDate Date = ReadFullDate();

	Date= DecreaseDateByOneDay(Date);
	cout << "01-Adding One Day is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateBy10Days(10,Date);
	cout << "02-Adding 10 Day is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByOneWeek(Date);
	cout << "03-Adding One week is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateBy10Weeks(10,Date);
	cout << "04-Adding 10 Weeks is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateBy1Month(Date);
	cout << "05-Adding One Month is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
	
	Date = DecreaseDataBy5Month(5,Date);
	cout << "06-Adding 5 Month is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = DecreaseDateBy1Year( Date);
	cout << "06-Adding 1 Year is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = DecreaseDateByXYears(10,Date);
	cout << "07-Adding X Years is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXYearsFaster(10, Date);
	cout << "08-Adding X Years (Faster) is : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DeCreaseDateBy1Decade( Date);
	cout << "09-Adding 1 Decade : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DecreaseDateByXDecade(10,Date);
	cout << "10-Adding X Decade : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


	Date = DecreaseDateByXDecadeFaster(10, Date);
	cout << "11-Adding X Decade (Faster) : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DeCrease1Century(Date);
	cout << "12-Adding 1 Century : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

	Date = DeCreaseXCentury(Date);
	cout << "12-Adding X Century : "
		<< Date.Day << "/" << Date.Month << "/" << Date.Year << endl;



	






}


