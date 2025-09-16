


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
	cout << "Enter The Number To Count in Matrix :" ;
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
			cout << setw(3)<<arr[i][j];

		}
		cout << endl;

	}
}

int countZero(int arr[3][3], short row, short colems)
{
	int counter = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			if (arr[i][j] == 0)
			{
				counter++;
			}
		}
	}
	return counter;
}

int countNumberBigerThanZero(int arr[3][3], short row, short colems)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			if (arr[i][j] > 0)
			{
				counter++;
			}
		}
	}
	return counter;
}









int main()
{
	srand((unsigned)time(NULL));
	
	//int arr[3][3] = { { 1,0,0 },{0,1,0},{0,0,1} };
	int arr[3][3] = { { 0,0,12 },{0,0,1},{0,0,9} };


	//FillMatrixWithNumber(arr, 3, 3);
	cout <<"  Matrix 1 \n\n";
	PrintMatrix(arr, 3, 3);

	


	
	
	system("pause>0");
	


	
	
}


