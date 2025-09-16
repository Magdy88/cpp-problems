
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;

enum enPrinmeNum{Prime=1,Not=2};
enPrinmeNum CheckPrime(int Num)
{
	int M = round(Num / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
		{
			return enPrinmeNum::Not;
		}
		else
			return enPrinmeNum::Prime;
	}
	
}
int RandomNum(int from, int to)
{
	int Random = rand() % (to-from + 1) + from;
	return Random;
}

void ReadArray(int arr[100], int& arrlength)
{

	cout << "Enter Number Of Element : ";
	cin >> arrlength;

	for (int i = 0; i, i<arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}


void OnlyPrimeNum(int arrsourse[100], int arrcopy[100], int arrlength, int &arr2length)
{
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (CheckPrime(arrsourse[i]) == enPrinmeNum::Prime)
		{
			arrcopy[counter] = arrsourse[i];
			counter++;
		}
	}
	arr2length = --counter;

}






int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	ReadArray(arr, arrlength);

	int arr2[100], arr2length = 0;
	

	OnlyPrimeNum(arr, arr2, arrlength, arr2length);
	cout << "Arry 1 Element : ";
	PrintArray(arr, arrlength);

	cout << "Prime Number In Array : ";
	PrintArray(arr2, arr2length);

	

}

