
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;



int RandomNum(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}


void FillArray(int arr[100], int &arrlength)
{
	cout << "please inter your Numer?";
	cin >> arrlength;
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

int printOddNumberCount(int arr[100], int arrlength)
{
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] % 2 != 0)
		{
			counter++;
		}
	}
	return counter;
}








int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length = 0;
	FillArray(arr, length);
	
	cout << "Array Element 1 ";
	PrintArray(arr, length);
	cout << endl;
	cout << "odd Number count is " <<
		printOddNumberCount(arr, length);

	

}

