
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

const string FileName = "Meg.txt";

struct stClientData
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountPalance;
};


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



stClientData ConvertlineToRecord(string line, string sperator="#@@#")
{
	stClientData Data;
	vector<string>vString;

	vString = SplitString(line, sperator);

	Data.AccountNumber = vString[0];
	Data.PinCode = vString[1];
	Data.Name = vString[2];
	Data.Phone = vString[3];
	Data.AccountPalance = stod(vString[4]);

	return Data;

}

vector<stClientData> LoadClientDataFromFile(string fileName)
{
	vector<stClientData>vClient;

	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;
		stClientData Client;
		while (getline(MyFile, line))
		{
			Client = ConvertlineToRecord(line);
			vClient.push_back(Client);
		}
		MyFile.close();
	}
	return vClient;


}

void PrintClientCard(stClientData Client)
{
	cout << "\nThe following are the client details:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountPalance;
}

bool FindClientByAccountNumbe(string AccountNumber, stClientData &Client)
{
	vector<stClientData> vClient = LoadClientDataFromFile(FileName);


	for (stClientData C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	
		return false;

}

string ReadClientAccountNumber()
{
	string AccountNumber = "";
	cout << "\nPlease enter AccountNumber? ";
	cin >> AccountNumber;
	return AccountNumber;
}







int main()
{
	srand((unsigned)time(NULL));

	stClientData Client;
	string AccountNumber = ReadClientAccountNumber();

	if (FindClientByAccountNumbe(AccountNumber, Client))
	{
		PrintClientCard(Client);
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNumber <<
			") is Not Found!";
	}
	

}


