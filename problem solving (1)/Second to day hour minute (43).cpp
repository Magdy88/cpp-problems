
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct StTaskDuration {
	int NumberOfDay, NumberOfHours, NumberOfMinute, NumberOfSecond;
};
int ReadNumberOfSecond(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}

StTaskDuration DurationInSecond(int TotalSecond)
{
	StTaskDuration TaskDuration;

	const int SecondPerDay = 24 * 60 * 60;
	const int SecondPerHour = 60 * 60;
	const int SecondPerMinute = 60;

	int Reminder = 0;

	TaskDuration.NumberOfDay = floor(TotalSecond / SecondPerDay);
	Reminder = TotalSecond % SecondPerDay;
	TaskDuration.NumberOfHours = floor(TotalSecond / SecondPerHour);
	Reminder = TotalSecond % SecondPerHour;
	TaskDuration.NumberOfMinute = floor(TotalSecond / SecondPerMinute);
	Reminder = TotalSecond % SecondPerMinute;
	TaskDuration.NumberOfSecond = Reminder;

	return TaskDuration;

	

}

void PrintTaskDuration(StTaskDuration TaskDuration)
{
	cout << "\n";

	cout << TaskDuration.NumberOfDay << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinute << ":"
		<< TaskDuration.NumberOfSecond;
}




int main()
{
	int TotalSecond = ReadNumberOfSecond("Please Inter Num In Second");
	PrintTaskDuration(DurationInSecond(TotalSecond));

}