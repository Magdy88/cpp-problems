
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


enum enCharType { smallletter = 1, captial = 2, specialchar = 3, Diget=4 };
int Random(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}



char GetRandomchar(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::smallletter:
	{
		return (char)Random(97, 122);
		break;
	}
	case enCharType::captial:
	{
		return (char)Random(65, 90);
		break;
	}
	case enCharType::specialchar:
	{
		return (char)Random(33, 47);
		break;
	}
	case enCharType::Diget:
	{
		return Random(1, 10);
		break;
	}
	}
	}





int main()
{
	srand((unsigned)time(NULL));

	
	cout << GetRandomchar(enCharType::smallletter) << endl;
	cout << GetRandomchar(enCharType::captial) << endl;
	cout << GetRandomchar(enCharType::specialchar) << endl;
	cout << GetRandomchar(enCharType::Diget) << endl;
	
	

}

