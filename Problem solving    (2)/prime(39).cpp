
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;
enum enPrimeornotPrime { Prime = 1, notPrime = 2 };
int RandomNum(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}

enPrimeornotPrime CheckNum(int Num)
{
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
		{
			return enPrimeornotPrime::notPrime;

		}
		else
			return enPrimeornotPrime::Prime;

	}
}

void fillArray(int arr[100], int &arrlength)
{
	cout << "enter your element ?";
	cin >> arrlength;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}
void AddArrayElement(int arr[100], int& arrlength, int Number)
{
	arrlength++;
	arr[arrlength - 1] = Number;
}

void PrintNumber(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}


void primeArray(int arr[100], int arr2[100], int arrlength, int &arr2length)
{
	for (int i = 0; i < arrlength; i++)
	{
		if (CheckNum(arr[i])==enPrimeornotPrime::Prime)
		{
		AddArrayElement( arr2, arr2length,arr[i]);
	    }
	}
}





int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0, arr2length = 0;
	fillArray(arr, arrlength);
	int arr2[100];
	primeArray(arr, arr2, arrlength, arr2length);
	
	cout << "Array Element 1 ";
	PrintNumber(arr, arrlength);
	cout << endl;
	cout << "Array Element 2 ";
	PrintNumber(arr2, arr2length);

}

