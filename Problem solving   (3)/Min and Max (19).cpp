





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

int ReadNum()
{
	int Round;
	cout << "Enter The Number To Count in Matrix :";
	cin >> Round;
	return Round;

}
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
/*
void FillMatrixWithNumber(int arr[3][3], short row, short colems)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{

			arr[i][j] = RandomNumber(0,1);

		}

	}
}
*/


void PrintMatrix(int arr[3][3], short row, short colems)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < colems; j++)
		{
			cout << setw(3) << arr[i][j];

		}
		cout << endl;

	}
}

bool IsNumberInMatrix(int arr[3][3], int Number, short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			if (arr[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}


void PrintInterstedNumber(int arr[3][3],int arr2[3][3], short row, short colems)
{
	int Number;
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			Number = arr[i][j];

			if (IsNumberInMatrix(arr2,Number,row,colems))
			{
				cout <<setw(3) <<Number<<"   ";
			}
		}
	}
	
}









int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = { { 77,5,12 },{22,20,1},{1,0,9} };
	\int arr2[3][3] = { { 5,80,90 },{22,77,1},{10,8,33} };


	//FillMatrixWithNumber(arr, 3, 3);
	cout << " \n Matrix 1 \n";
	PrintMatrix(arr, 3, 3);

	cout << "  \n Matrix 2 \n";
	PrintMatrix(arr2, 3, 3);

	cout << "\nIntersted Number =  ";
	PrintInterstedNumber(arr, arr2, 3, 3);
	system("pause>0");





}





