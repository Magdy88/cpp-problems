
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
	string Name;
	cout << "Please inter your String ? \n";
	getline(cin, Name);
	return Name;

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

void PrintAllVowel(string Name)
{
	
	for (short i = 0; i < Name.length(); i++)
	{
		if (IsVowel(Name[i]))
		{
			cout << Name[i]<< "  ";
		}
	}
}











int main()
{
	srand((unsigned)time(NULL));

	string  S1 = ReadString();

	cout << " Vowel in String  ";
	 PrintAllVowel(S1);
	
	
	


}






