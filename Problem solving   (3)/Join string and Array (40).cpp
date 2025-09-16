
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

string JoinString(vector<string >vString, string delim)
{

	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + delim;
	}
	return S1.substr(0, S1.length() - delim.length());

}

string JoinString(string arr[4], short arrlength, string delim)
{
	string S1 = "";
	for (int i = 0; i < arrlength; i++)
	{
		S1 = S1+arr[i] + delim;
	}
	return S1.substr(0, S1.length() - delim.length());
}








int main()
{
	srand((unsigned)time(NULL));
	string arr[4]= { "Mohamed","ali","fadi","Maher" };
	vector<string>JString = { "Mohamed","ali","fadi","Maher" };

	cout << "vector After Joining \n\n"<<
	JoinString(JString, " ");

	cout << "\n\nArray After Join \n"<<
	JoinString(arr, 4, " 555");






	
}






