
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

bool IsDate1BEqualDate2(stDate Date, stDate Date2)
{
	return (Date.Year == Date2.Year) ? ((Date.Month == Date2.Month)
		? ((Date.Day == Date.Day )? true : false) : false) : false;
	
	

}






int main()
{
	stDate Date = ReadFullDate();
	stDate Date2 = ReadFullDate();
	
	

	if (IsDate1BEqualDate2(Date,Date2))
	{
		cout << "Yes , Date One Is Equal Than Date two ";

	}
	else
	{
		cout << "NO , Date One Is Not Equal Than Date two ";
	}


	


}



	