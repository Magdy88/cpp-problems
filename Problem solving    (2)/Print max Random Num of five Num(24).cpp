
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

void ReadArray(int arr[100], int &arrlength)
{
	cout << "Enter Number Of Element \n";
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
int printMaxNum( int arr[100], int arrlength)
{
	int Max = 0;
	for (int i = 1; i <= arrlength; i++)
	{
		
		if ( arr[i]> Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}






int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	ReadArray(arr, arrlength);

	cout << "orignal array : ";
	Printarray(arr, arrlength);

	cout << "max Number is " <<
	printMaxNum( arr, arrlength);

}

