
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;

int ReadPossitiveNum()
{
	int Number;
	cout << "please inter your Numer?";
	cin >> Number;
	return Number;
}
void AddArrayElement(int arr[100], int& arrlength, int Number)
{
	arrlength++;
	arr[arrlength - 1] = Number;
}
void InputUserNumberInArray(int arr[100], int& arrlength)
{
	bool Addmore = true;

	do
	{
		AddArrayElement( arr,arrlength, ReadPossitiveNum());
		cout << "do you want to more Number?[0].No,[1].yes?";
		cin >> Addmore;


	} while (Addmore);

}

void PrintNumber(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";
	}
}





int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0;
	InputUserNumberInArray(arr, arrlength);

	cout << "Array length " << arrlength << endl;
	cout << "Array Element ";
	PrintNumber(arr, arrlength);

}

