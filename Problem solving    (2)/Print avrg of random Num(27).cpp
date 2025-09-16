
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




int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	Readarray(arr, arrlength);

	cout << "Array 1 Element : ";
	Printarray(arr, arrlength);

	cout << "Array 2 Element : ";
	Printarray(arr, arrlength);

}

