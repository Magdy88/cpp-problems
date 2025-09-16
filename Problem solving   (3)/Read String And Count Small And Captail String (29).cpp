
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
	cout << "Please inter a String  \n";
	getline(cin, Name);
	return Name;
}

int CountCaptailLetter(string Name)
{
	int count = 0;
	for (int i = 0; i < Name.length(); i++)
	{
		if ( isupper(Name[i]))
		{
			count++;
		}

	}
	return count;
}

int CountSmallLetter(string Name)
{
	int count = 0;
	for (int i = 0; i < Name.length(); i++)
	{
		if ( islower(Name[i]))
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

	cout << "String Length = " << S1.length() << endl;
	cout << "Capital Letter Count = " << CountCaptailLetter(S1) << endl;
	cout << "Small Letter Count = " << CountSmallLetter(S1) << endl;
	

	

	


}






