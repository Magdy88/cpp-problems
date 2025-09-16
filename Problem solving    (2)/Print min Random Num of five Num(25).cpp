
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;




int RandomNum(int from,int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}

void Readarray(int arr[100], int &arrlength)
{
	cout << "enter Number of element : ";
	cin >> arrlength;

	for (int i = 1; i <= arrlength; i++)
	{
		arr[i] = RandomNum(1, 100);
	}
}

void Printarray(int arr[100], int arrlength)
{
	for (int i = 1; i <= arrlength; i++)
	{
		cout << arr[i] << "  ";

	}
	cout << endl;
}
int PrintMin(int arr[100], int arrlength)
{
	int min = 0;
	min = arr[1];
	for (int i = 1; i <= arrlength; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	Readarray(arr, arrlength);

	cout << "Array Element : ";
	Printarray(arr, arrlength);

	cout << "Min Number is : " <<
		PrintMin(arr, arrlength);
}

