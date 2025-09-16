


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

bool isIdentfiyMatrix(int arr[3][3], short row, short colems)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < colems; j++)
		{
			if (i == j && arr[i][j] != 1)
			{
				return false;
			}
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
	
	int arr[3][3] = { { 1,0,0 },{0,1,0},{0,0,1} };



	//FillMatrixWithNumber(arr, 3, 3);


	cout <<"  Matrix 1 \n\n";
	PrintMatrix(arr, 3, 3);


	if (isIdentfiyMatrix(arr, 3, 3))
	{
		cout << "Matrix is identifiy ";

	}
	else
		cout << "Matrix is Not identifiy";
	
	




	
	
	system("pause>0");
	


	
	
}


