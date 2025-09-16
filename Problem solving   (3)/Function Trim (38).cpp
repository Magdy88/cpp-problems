
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

string  ReadString()
{
	string S1 = "";
	cout << "Please inter Your string \n";
	getline(cin, S1);
	return S1;
}
string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}

string TrimRight(string S1)
{
	for (int i = S1.length()-1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i+1);
		}
	}
	return "";
}

string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}







int main()
{
	srand((unsigned)time(NULL));

	string S1 = "    Mohamed Magdy    \n\n";

	cout << "string = " << S1 << "\n\n";
	cout << "Trim Left = " << TrimLeft(S1);
	cout << " Trim Right = " << TrimRight(S1);
	cout << "trim = " << Trim(S1);
	
}






