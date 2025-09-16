
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


int  ReadPossitiveNum()
{
	int arrlength;
	cout << "please inter Number OF Element : \n";
	cin >> arrlength;
	
	return arrlength;

}


int RandomNum(int from,int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}

void PrintNum( int arrlength)
{
	

	for (int i = 1; i <= arrlength; i++)
	{
		cout << RandomNum(1, 100) << "  ";

	}
}






int main()
{
	srand((unsigned)time(NULL));

	int Num = ReadPossitiveNum();

	cout << "Orignal array : ";
	PrintNum(Num);

}

