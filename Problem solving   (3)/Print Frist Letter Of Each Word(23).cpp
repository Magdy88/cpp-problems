
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


string ReadString()
{
	string Name = "";
	cout << "Pleas Enter Your String ?\n";
	getline(cin, Name);
	return Name;
}

void PrintTheFristLetterOfWord(string Name)
{

	bool IsFristLetter = true;

	cout << "Frist Letter Of This String\n";
	for ( int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ' && IsFristLetter)
		{
			cout << Name[i] << endl;
		}

		IsFristLetter = (Name[i] == ' ' ? true : false);
		

	}

}




int main()
{
	srand((unsigned)time(NULL));

	PrintTheFristLetterOfWord(ReadString());
}



