
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;

int ReadNum()
{
	int Num;
	cout << "Please intre your Num from 1 to 10 " << endl;
	cin >> Num;
	return Num;
	
	

}

int RandomNum(int from , int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;

}







int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNum(1, 10) << endl;
	cout << RandomNum(1, 10) << endl;
	cout << RandomNum(1, 10) << endl;

	
	

}

