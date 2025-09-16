
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct StTaskDuration {
	int NumberOfDays, NumberOfHours,NumberOfMinutes, NumberOfSecond;
};

float readpossitivenumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}

StTaskDuration ReadTaskDuration()
{
	StTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = readpossitivenumber("Please Inter Number Of Days");
	TaskDuration.NumberOfHours= readpossitivenumber("Please Inter Number Of Hours");
	TaskDuration.NumberOfMinutes = readpossitivenumber("Please Inter Number Of Minutes");
	TaskDuration.NumberOfSecond = readpossitivenumber("Please Inter Number Of Secound");

	return TaskDuration;

}

int GetNumberOfSecound(StTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSecond;

	return DurationInSeconds;
}

int main()
{
	cout << "Total Second = " << GetNumberOfSecound(ReadTaskDuration());
}