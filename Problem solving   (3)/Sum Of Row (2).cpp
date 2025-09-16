


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
void FillMatrixWithRandomNumber(int arr[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;

	}
}

int RowSum(int arr[3][3], short NumberOfRow, short colems)
{
	int sum = 0;
	
	for (int j = 0; j < colems; j++)
	{
		sum += arr[NumberOfRow][j];
	}
	return sum;
	
}

void PrintRowSum(int arr[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		cout << "Row " << i + 1 << " sum is " << RowSum(arr, i, colems);
		cout << endl;

	}
}




int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];

	FillMatrixWithRandomNumber(arr, 3, 3);

		cout << "Matrix is \n";
		PrintMatrix(arr, 3, 3);

		cout << "\n\n\n";

		PrintRowSum(arr, 3, 3);
	



	
	
}


