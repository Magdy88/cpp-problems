
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





int main()
{
	srand((unsigned)time(NULL));





}

