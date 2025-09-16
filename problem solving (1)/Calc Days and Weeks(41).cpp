
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadPossitiveNum(string message)
{
	int num = 0;

	do
	{
		cout << message << endl;
		cin >> num;

	} while (num < 0 || num >7);

	return num;
}

void PrintWeakDay(int Day)
{
	switch (Day)
	{
	case 1:
		cout << "its sunday";
		break;

	case 2:
		cout << "its monday";
		break;

	case 3:
		cout << "its thusday";
		break;

	case 4:
		cout << "its wensday";
		break;

	case 5:
		cout << "its thursday";
		break;

	case 6:
		cout << "its friday";
		break;

	case 7:
		cout << "its saterday";
		break;


	}
}




int main()
{
	PrintWeakDay(ReadPossitiveNum("Please Inter Your Day ?"));

}