





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


void PrintFaboinccciRecurcion(short Number, int Prav1, int Prav2)
{
	int FabNumber = 0;

		if (Number > 0)
		{
			FabNumber = Prav1 + Prav2;
			Prav1 = Prav2;
			Prav2 = FabNumber;
			cout << FabNumber << "   ";

			
			PrintFaboinccciRecurcion(Number - 1, Prav1, Prav2);
		}

}











int main()
{
	srand((unsigned)time(NULL));

	//int arr[3][3] = {{ 1,2,1},{5,5,5},{7,3,8} };
	//int arr2[3][3] = { {5,80,90}, {22,77,1},{10,8,33} };
	//int Number;
	
	//fillMatrixWithNumber(arr, 3, 3);

	PrintFaboinccciRecurcion(10, 0, 1);
}





