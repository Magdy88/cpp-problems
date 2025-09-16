
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


string  ReadName()
{
	string Name;
	cout << "Please inter a String ? \n";
	getline(cin, Name);
	return Name;
}

char ReadCharcter()
{
	char Char1 ;
	cout << "Please inter Your Charcter ?\n";
	cin >> Char1;
	return Char1;
}

char InvertLetter(char Char1)
{
	return islower(Char1) ? toupper(Char1) : tolower(Char1);
}

int CountLetter(string Name, char Char1, bool Agree = true)
{
	int count = 0;

	for (int i = 0; i < Name.length(); i++)
	{
		if (Agree)
		{
			if (Name[i] == Char1)
			{
				count++;
			}
			
		}
		else
		{
			if (tolower(Name[i]) == tolower(Char1))
			{
				count++;
			}
		}
	}
	return count;
}









int main()
{
	srand((unsigned)time(NULL));


	string S1 = ReadName();
	char Char1 = ReadCharcter();
	
	cout << "\n Letter '" << Char1 << "' Count = " << CountLetter(S1, Char1);

	cout << endl;

	cout << "Letter '" << Char1 << "' Or '" << InvertLetter(Char1) << "' Count = " <<
		CountLetter(S1, Char1,false);
	
	

	

	


}






