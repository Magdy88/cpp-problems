
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;

enum enchartype{small =1,captial=2};
int ReadPossitiveNum(string message)
{
	int Num;
	do
	{
		cout << message << endl;
		cin >> Num;

	} while (Num <= 0);
	return Num;
}


int RandomNum(int from, int to)
{
	int Random = rand() % (to-from + 1) + from;
	return Random;
}


char GetRandomcharcter(enchartype chartype)
{
	switch (chartype)
	{
	case enchartype::small:
	{
		return (char )RandomNum(97, 122);
		break;
	}
	case enchartype::captial:
	{
		return (char)RandomNum(65, 90);
		break;
	}
	}
}
string Getword(enchartype chartype, int length)
{
	string word;
	for (int i = 0; i <= length; i++)
	{
		word = word + GetRandomcharcter(chartype);
	}
	return word;
}

string GetKey()
{
	string key = "";

	key = Getword(enchartype::captial, 4) + "-";
	key = key + Getword(enchartype::captial, 4) + "-";
	key = key + Getword(enchartype::captial, 4) + "-";
	key = key + Getword(enchartype::captial, 4) ;

	return key;

}

void fillArray(string arr[100], int arrlength)
{

	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = GetKey();
	}
}
void PrintArray(string arr[100], int arrlength)
{

	for (int i = 0; i < arrlength; i++)
	{
		cout << "Array [" << i << "]";
		fillArray(arr, arrlength);
		cout << endl;
	}
}




int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrlength = ReadPossitiveNum("How Many Keys you Genrate \n");
	

	cout << "Array Element \n\n";
	fillArray(arr, arrlength);

	PrintArray(arr, arrlength);
	

}

