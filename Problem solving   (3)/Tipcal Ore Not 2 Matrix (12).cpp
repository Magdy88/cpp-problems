


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

void FillMatrixWithNumber(int arr[3][3], short row, short colems)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			
			arr[i][j] = RandomNumber(1,10);

		}
		
	}
}



void PrintMatrix(int arr[3][3], short row, short colems)
{
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < colems; j++)
		{
			printf("  %0*d  ", 2, arr[i][j]);

		}
		cout << endl;

	}
}

bool IsTiocalMatrix(int arr[3][3], int arr2[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			if (arr[i][j] == arr2[i][j])
			{
				return 1;
			}
			else
			return 0;

			
		}
	}

}










int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];
	int arr2[3][3];
	FillMatrixWithNumber(arr, 3, 3);
	FillMatrixWithNumber(arr2, 3, 3);


	cout <<"  Matrix 1 \n\n";
	PrintMatrix(arr, 3, 3);

	cout << "  Matrix 2 \n\n";
	PrintMatrix(arr2, 3, 3);

	IsTiocalMatrix(arr, arr2, 3, 3);
	if (IsTiocalMatrix(arr, arr2, 3, 3))
	{
		cout << "Tipcal Matrix";
	}
	else
		cout << "Not Tipcal Matric";


	




	
	
	system("pause>0");
	


	
	
}


