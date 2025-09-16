
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

int CountChar1InString(string Name,char Char1 )
{
	int count = 0;

	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i]==Char1  )
		{
			count++;
		}
	}

	return count;

}








int main()
{
	srand((unsigned)time(NULL));


	string S1 = ReadName();
	char Char1 = ReadCharcter();
	
	cout << "\n Letter '" << Char1 << "' Count = " << CountChar1InString(S1, Char1);


	
	

	

	


}






