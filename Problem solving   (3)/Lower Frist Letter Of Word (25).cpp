
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

string ReadName()
{
	string Name;
	cout << "Pleas inter your Name?\n";
	getline(cin, Name);
	return Name;
}


string LowerFristLetterOfWord(string Name)
{
	bool IsFristLetter = true;
	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ' && IsFristLetter)
		{
			Name[i] = tolower(Name[i]);
		}
		IsFristLetter = (Name[i]==' ' ? true : false);
	}
	return Name;
}


int main()
{
	srand((unsigned)time(NULL));

	string S1 = ReadName();

	cout << "String After Conversion \n";
	S1= LowerFristLetterOfWord(S1);

	cout << S1;


}






