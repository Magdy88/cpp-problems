
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




char ReadCharcter()
{
	char Char1 ;
	cout << "Please inter Your Charcter ?\n";
	cin >> Char1;
	return Char1;
}

bool IsVowel(char Vowel)
{
	Vowel = tolower(Vowel);
	if (Vowel == 'a' || Vowel == 'e' || Vowel == 'i' || Vowel == 'o' || Vowel == 'u')
	{
		return true;
	}
	return false;
}











int main()
{
	srand((unsigned)time(NULL));

	char Char1 = ReadCharcter();
	
	if (IsVowel(Char1))
	{
		cout << "Yes Letter " << Char1 << " Is Vowel \n";
	}
	else
	{
		cout << "No Letter " << Char1 << " Is Not Vowel \n";
	}
	
	


}






