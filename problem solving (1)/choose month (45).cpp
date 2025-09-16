
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enChoosemonth {
	Jan = 1, Fab = 2, Mar = 3, Apri = 4, May = 5, june = 6,
	July = 7, Agu = 8, Sebt = 9, Oct = 10,Nov = 11 , Dec = 12
};

int readnum(string message, int from, int to)
{
	int num = 0;
	do
	{
		cout << message << endl;
		cin >> num;

	} while (num < from || num > to);

	return num;
}

enChoosemonth readmonth()
{
	return (enChoosemonth)readnum("choose your number of month frome [ 1 to 12 ] ?", 0, 12);
}

string GetYourMonth(enChoosemonth month)
{
	switch (month)
	{
	case enChoosemonth::Jan:
		return "january";

	case enChoosemonth::Fab:
		return "Febrary";

	case enChoosemonth::Mar:
		return "March";

	case enChoosemonth::May:
			return "May";

	case enChoosemonth::june:
		return "jaun";

	case enChoosemonth::July:
		return "Jaly";

	case enChoosemonth::Agu:
		return "Agu";

	case enChoosemonth::Sebt:
		return "Sebteaber";

	case enChoosemonth::Oct:
			return "October";

	case enChoosemonth::Nov:
		return "November";

	case enChoosemonth::Dec:
			return "Decamber";

	default :
		return "wrong month";
	}
}

	int main()
	{

		cout << GetYourMonth(readmonth());
	}
