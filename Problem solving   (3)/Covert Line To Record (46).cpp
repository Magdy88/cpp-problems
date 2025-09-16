
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

struct stClient
{
	string AccontNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;

};

vector<string>SplitString(string S1, string delim)
{
	vector<string>Vstring;
	short pos;
	string sWord;

	while ((pos = S1.find(delim)) != S1.npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			Vstring.push_back(sWord);

		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		Vstring.push_back(S1);
	}

	return Vstring;
}

stClient ConvertLinetoRecord(string line,string seperator="#//#")
{
	stClient client;
	vector<string>vString;

	vString = SplitString(line, seperator);

	client.AccontNumber = vString[0];
	client.PinCode = vString[1];
	client.Name = vString[2];
	client.Phone = vString[3];
	client.AccountBalance =stod(vString[4]);

	return client;

}

void PrintClientRecord(stClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccontNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}



int main()
{
	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

	cout << "\nLine Record is:\n";
	cout << stLine;

	stClient Client = ConvertLinetoRecord(stLine);
	PrintClientRecord(Client);

}






	