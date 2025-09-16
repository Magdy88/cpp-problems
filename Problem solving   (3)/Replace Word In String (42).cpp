
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

string ReplaceString(string S1, string StringToReplace, string ReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != S1.npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo);
		pos = S1.find(StringToReplace);
	}

	return S1;

}



int main()
{
	srand((unsigned)time(NULL));

	string S1 = "Welcom to jordan , jordan is a nice country";
	string StringToReplace = "jordan";
	string ReplaceTo = "USA";


	cout << " Orignal String = \n" << S1 << endl;

	cout << "\n\nString After Replace = \n" << ReplaceString(S1, StringToReplace, ReplaceTo);




}




