





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

bool IspalondormeMatrix(int arr[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems/2; j++)
		{
			if (arr[i][j] != arr[i ][colems - j - 1])
			{
				return false;
			}
			

		}
	}
	return true;
}










int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = { { 1,2,1 },{5,5,5},{7,3,7} };
	//int arr2[3][3] = { { 5,80,90 },{22,77,1},{10,8,33} };


	//FillMatrixWithNumber(arr, 3, 3);
	cout << " \n Matrix 1 \n";
	PrintMatrix(arr, 3, 3);


	if (IspalondormeMatrix(arr, 3, 3))
	{
		cout << "Yes its Palondorme";

	}
	else
		cout << "No its Not Palondorm";




}





