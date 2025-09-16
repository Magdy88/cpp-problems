
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;



void fillArray(int arr[100], int &arrlength)
{
	int arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintNumber(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}

bool isPalindromNumber(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] != arr[length- i - 1] )

		return false;
	}
	return true;
}







int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length = 0;
	fillArray(arr, length);
	
	cout << "Array Element 1 ";
	PrintNumber(arr, length);
	cout << endl;
	if (isPalindromNumber(arr, length))
		cout << "yes array  is palindrom";
	else
		cout << "no array  is not palindrom";

	

}

