
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

int ReadYear()
{
	int Year;
	cout << "Please inter Your a Year To Check ?";
	cin >> Year;
	return Year;
}


int ReadMonth()
{
	short Month;
	cout << "Please inter a Month To Check ? " ;
	cin >> Month;
	return Month;

}

bool IsLeapYear(int Year)
{

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

	
}



int GetInformationOfMonth(short Year,short Month)
{
	if (Month < 1 || Month>12)
	{
		return 0;
	}

	if (Month == 2)
	{
		return IsLeapYear(Year) ? 29 : 28;
	}

	short arr31Month[7] = {1,3,5,7,8,10,12};

	for (short i = 0; i < 7; i++)
	{
		if (arr31Month[i - 1 == Month])
		{
			return 31;
		}
	}
	return 30;
}



short NumberOfDaysInmonth(short Year,short Month)
{
	
	return GetInformationOfMonth(Year, Month)  ;
}

short NubmerofHourInDay(int Year,int Month)
{
	return NumberOfDaysInmonth(Year,Month) * 24;
}

int NumberOfMinInDay(int Year,int Month)
{
	return NubmerofHourInDay(Year,Month) * 60;
}


int NumberOfSecondInDay(int Year,int Month)
{
	return NumberOfMinInDay(Year,Month) * 60;
}

	
	int main()
{

	int Years = ReadYear();
	int Month = ReadMonth();
	
	
	
	cout << "Number of Days          in Year  [" << Years << "] is " <<
		NumberOfDaysInmonth(Years,Month) << endl;

	cout << "Number of Hours         in Year  [" << Years << "] is " <<
		NubmerofHourInDay(Years,Month) << endl;

	cout << "Number of Minutes       in Year  [" << Years << "] is " <<
		NumberOfMinInDay(Years,Month) << endl;

	cout << "Number of Seconds       in Year  [" << Years << "] is " <<
		NumberOfSecondInDay(Years,Month) << endl;

		



	return 0;
}
