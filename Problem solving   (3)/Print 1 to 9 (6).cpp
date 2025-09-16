


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
			sum++;
			arr[i][j] = sum;

		}
		
	}
}

void PrintMatrix(int arr[3][3], short row, short colems)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colems; j++)
		{
			cout << setw(3) << arr[i][j] << "   " ;

		}
		cout << endl;

	}
}






int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];
	int arrsum[3];

	FillMatrixWithNumber(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	


	
	
}


