
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
	cout << "Please inter Your string ? \n";
	getline(cin, S1);
	return S1;
}


vector<string>SplitString(string S1, string delim)
{
	vector<string>vstring;
	short Pos = 0;
	string sWord;


	while ((Pos = S1.find(delim)) != S1.npos)
	{
		sWord = S1.substr(0, Pos);
		if (sWord != "")
		{
			vstring.push_back(sWord);
		}
		S1.erase(0, Pos + delim.length());
	}

	if (S1 != "")
	{
		vstring.push_back(S1);

	}

	return vstring;

}

string ReverseWord(string S1)
{
	vector<string >vString;
	string S2 = "";

	vString = SplitString(S1, " ");

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		iter--;
		S2 = S2 + *iter + " ";

	}
	S2.substr(0, S2.length() - 1);
	return S2;

}



int main()
{
	srand((unsigned)time(NULL));
	

	cout << ReverseWord(ReadString());


	
}






