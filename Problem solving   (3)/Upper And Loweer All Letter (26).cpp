
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


string UpperAllLetter(string Name)
{
	for (int i = 0; i < Name.length(); i++)
	{
		Name[i] = toupper(Name[i]);
	}
	return Name;
}

string LowerAllLetter(string Name)
{
	for (int i = 0; i < Name.length(); i++)
	{
		Name[i] = tolower(Name[i]);
	}
	return Name;
}



int main()
{
	srand((unsigned)time(NULL));

	string S1 = ReadName();
	cout << "Upper All Letter \n";
	S1 = UpperAllLetter(S1);
	cout << S1 << endl;

	cout << "Lower All Letter \n";
	S1 = LowerAllLetter(S1);
	cout << S1;


	

	


}






