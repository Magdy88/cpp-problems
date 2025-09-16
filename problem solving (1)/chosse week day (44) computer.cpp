
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum enChooseWeekDay{ sun =1 ,mon=2 ,thu=3 ,wen=4 ,thir=5 ,fri=6 ,sat=7 };
int ReadNum(string message)
{
	int num = 0;

	do
	{
		cout << message << endl;
		cin >> num;
		

	} while (num < 0 || num >7);

	return num;
}

enChooseWeekDay ReadDayOfWeek()
{
	
	return (enChooseWeekDay)ReadNum("please inter your num ?");

}	

string PrintWeekDay(enChooseWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enChooseWeekDay::sun:
		return " its sunday";
		
	case enChooseWeekDay::mon:
		return "its monday";

	case enChooseWeekDay::thu:
		return "its thusday";

	case enChooseWeekDay::wen:
		return "its wensday";

	case enChooseWeekDay::thir:
		return "its thirsday";

	case enChooseWeekDay::fri:
		return "its friday";

	case enChooseWeekDay::sat:
		return "its saterday";

	default:
		"wrong day";

	}
}



	int main()
	{
		PrintWeekDay(ReadDayOfWeek());
	}
