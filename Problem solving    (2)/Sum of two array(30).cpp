
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
}


int RandomNum(int from, int to)
{
	int Random = rand() % (to-from + 1) + from;
	return Random;
}

void fillArray(int arr[100], int arrlength)
{

	for (int i = 0; i<arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}

void PrintArray(int arr[100], int &arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void SumOfTwoArray(int arr[100], int arr2[100], int arrsum[100], int arrlength)
{
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		arrsum[counter] = arr[i] + arr2[i];
		counter++;
	}
	
	
}








int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrsum[100], arr2[100];

	int arrlength = ReadPossitiveNum("Enter your Element Num ?");

	fillArray(arr, arrlength);
	fillArray(arr2, arrlength);
	
SumOfTwoArray(arr, arr2, arrsum, arrlength);


	cout << "Arry 1 Element : ";
	PrintArray(arr, arrlength);

	cout << "Array 2 Element :";
	PrintArray(arr2, arrlength);

	cout << "Sum Of two array : ";
    PrintArray(arrsum, arrlength);


	
	

	

}

