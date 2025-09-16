
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


vector<string>SplitString(string S1,string delim)
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








int main()
{
	srand((unsigned)time(NULL));
	vector<string>vString;

	vString = SplitString(ReadString(), " ");

	cout << "Token = " << vString.size() << endl;
	for (string& s : vString)
	{
		cout << s << endl;
	}

}






