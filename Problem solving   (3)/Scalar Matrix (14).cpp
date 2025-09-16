


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
	cout << "How many round 1 to 10 ?\n";
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

bool isScalarMatrix(int arr[3][3], short row, short colems)
{
	int FristDiget = arr[0][0];
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < colems; j++)
		{
			if (i == j && arr[i][j]!= FristDiget)
				return false;

			else if (i != j && arr[i][j] != 0)
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
	
	//int arr[3][3] = { { 1,0,0 },{0,1,0},{0,0,1} };
	int arr[3][3] = { { 9,0,0 },{0,9,0},{0,0,9} };



	//FillMatrixWithNumber(arr, 3, 3);


	cout <<"  Matrix 1 \n\n";
	PrintMatrix(arr, 3, 3);


	if (isScalarMatrix(arr, 3, 3))
	{
		cout << "Matrix is Scalar ";

	}
	else
		cout << "Matrix is Not Scalar ";
	
	




	
	
	system("pause>0");
	


	
	
}


