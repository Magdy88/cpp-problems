
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
	for (int i = 0; i <= arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}

void copyfillArray(int arr[100],int arr2[100], int arrlength)
{
	int counter = arrlength-1;
	for (int i = 0; i < arrlength; i++)
	{
		arr2[i] = arr[counter];
		counter--;
	}
}


void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}









int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100];

	int arrlength = ReadPossitiveNum("Enter Num Of Element ? ");

	fillArray(arr, arrlength);
    copyfillArray(arr, arr2, arrlength);

	cout << "Array 1 Element  ";
	PrintArray(arr, arrlength);

	
	cout << endl;

	cout << "Array 2 Element  ";
	PrintArray(arr2, arrlength);


	
	


	

}

