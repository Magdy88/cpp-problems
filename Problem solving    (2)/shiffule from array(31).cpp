


#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "MyLib.h";
#include "MyInputLib.h";
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;





int ReadNum(string message)
{
	int Num;
	do
	{
		cout << message ;
		cin >> Num;

	} while (Num <= 0);
	return Num;
}
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}



void FillArray(int arr[100], int arrlength)
{
	for (int i = 1; i <= arrlength; i++)
	{
		arr[i] = RandomNumber(1, 10);
	}
	cout << endl;
}


void Printarray(int arr[100], int arrlength)
{
	for (int i = 1; i <= arrlength; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}

void arr1shuffle(int arr[100], int arrlength)
{
	for (int i = 1; i <= arrlength; i++)
	{
		Swap(arr[RandomNumber(i, arrlength) ], arr[RandomNumber(i,
			arrlength) ]);
	}
}




int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrsh[100];

	int arrlength =ReadNum("please inter your array lenght\n");
	FillArray(arr, arrlength);

    cout << "arr1 : ";
	Printarray(arr, arrlength);
	arr1shuffle(arr, arrlength);

	
	Printarray(arr, arrlength);




	
	



	
	
}


