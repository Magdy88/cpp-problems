
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


enum enCharType { smallletter = 1, captial = 2, specialchar = 3, Diget = 4 };
int Random(int from, int to)
{
	int Random = rand() % (to - from + 1) + from;
	return Random;
}

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


string GrenrateWord(enCharType CharType, short length)
{
	string word;

	for (int i = 1; i <= length; i++)
	{
		word = word + GetRandomchar(CharType);
	}
	return word;
}

string GenrateKey()
{
	string Key = "";

	Key = GrenrateWord(enCharType::captial, 4) + "-";
	Key = Key + GrenrateWord(enCharType::captial, 4) + "-";
	Key = Key + GrenrateWord(enCharType::captial, 4) + "-";
	Key = Key + GrenrateWord(enCharType::captial, 4);

	return Key;

}

void GenrateKeys(short NumberOfKeys)
{

	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] :"
			<< GenrateKey() << endl;
	}
}











int main()
{
	srand((unsigned)time(NULL));

	
	GenrateKeys(ReadPossitiveNum("How Many Key to Genrate ?"));
	

}

