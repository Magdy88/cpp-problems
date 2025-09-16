


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

void PrintMiddlerow(int arr[3][3], short row, short colem)
{

	int Middlerow = row / 2;
	
		for (int j = 0; j < colem; j++)
		{
			printf("  %0*d  ", 2, arr[Middlerow][j]);
		}
	
	cout << endl;
}

void printMiddleColems(int arr[3][3], int row, int colems)\
{
	int Middlecolems = colems / 2;
	for (int i = 0; i < row; i++)
	{
		
			printf("  %0*d  ", 2, arr[i][Middlecolems]);
		
	}

}






int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];
	FillMatrixWithNumber(arr, 3, 3);

	cout << setw(5)<<"  Matrix 1 \n\n";
	PrintMatrix(arr, 3, 3);

	cout << "Middle Row =  ";
	PrintMiddlerow(arr, 3, 3);

	cout << "Middle Colems =  ";
	printMiddleColems(arr, 3, 3);


	




	
	
	system("pause>0");
	


	
	
}


