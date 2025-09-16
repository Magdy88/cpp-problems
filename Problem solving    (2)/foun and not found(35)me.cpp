
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

	} while (Num <= 0);
	return Num;
	cout << endl;
}


int RandomNum(int from, int to)
{
	int Random = rand() % (to-from + 1) + from;
	return Random;
}

void FillArray(int arr[100], int arrlength)
{
	for (int i = 0; i <= arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}



short FindPositionNum(int arr[100], int arrlength, int Number)
{
	
	for (int i = 0; i < arrlength; i++)
	{
		
		if (arr[i] == Number)
		{
			return i;
		}

	}return -1;
}






int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrlength = ReadPossitiveNum("Enter Number of Array\n");
	
	FillArray(arr, arrlength);
	
	cout << "Array 1 Element : ";
	PrintArray(arr, arrlength);

	int Number = ReadPossitiveNum("\nplease Inter Number you serch for\n");
	cout << "the number you are looking for is " << Number << endl;

	short NumberPosition = FindPositionNum(arr, arrlength, Number);
	if (NumberPosition == -1)
		cout << "the Number is Not Found";
	else
	{
		cout << "the Number is Found";
	}
}

