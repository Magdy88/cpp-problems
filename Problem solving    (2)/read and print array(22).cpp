
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


int ReadPossitiveNum(string message)
{
	int Num;
	do
	{
		cout << message << endl;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

void Readarray(int arr[100], int &arrayLength)
{
	cout << "Enter Number Of Element \n";
	cin >> arrayLength;

	cout << "enter Number of Array \n";
	for (int i = 1; i <= arrayLength; i++)
	{
		cout << "Element [" << i << "] : ";
		cin >> arr[i];
			
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrayLength)

{
	for (int i = 1; i <= arrayLength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

int TimeRepeated(int arr[100], int arraylength, int Number)
{
	int count = 0;
	for (int i = 1; i <= arraylength; i++)
	{
		if (Number == arr[i])
		{
			count++;
		}
	}
	return count;
}







int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length, NumberToCheck;

	Readarray(arr, length);

	NumberToCheck = ReadPossitiveNum("enter the Number to check");
	
	cout << "Orignal array ";
	PrintArray(arr, length);
	
	cout << "Number " << NumberToCheck
		<< " is repeated " << TimeRepeated(arr, length, NumberToCheck)
		<< " Times ";


}

