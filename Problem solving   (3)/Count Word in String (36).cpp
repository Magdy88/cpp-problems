
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

string  ReadString()
{
	string S1 = "";
	cout << "Please inter Your string \n";
	getline(cin, S1);
	return S1;
}

int CountWord(string S1)
{
	string delim = " "; // delimiter
	short pos = 0;
	string sWord; 
	int counter = 0;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			//cout << sWord << endl;
			counter++;
		}
		
		S1.erase(0, pos + delim.length()); 
	}


	if (S1 != "")
	{
		//cout << S1 << endl; 
		counter++;
	}
	return counter;
}








int main()
{
	srand((unsigned)time(NULL));

	cout << PrintEachWordInString(ReadString());

}






