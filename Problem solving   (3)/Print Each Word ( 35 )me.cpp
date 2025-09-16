
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



void PrintEachWord(string Name)
{

	for (int i = 0; i < Name.length(); i++)
	{
		if (Name[i] != ' ')
		{
			cout << Name[i];
		}
		else
		{
			cout << endl;
		}
	}

}











int main()
{
	srand((unsigned)time(NULL));

	string  S1 = ReadString();

	cout << " Your String Word Are \n ";
	PrintEachWord(S1);
	
	
	


}






