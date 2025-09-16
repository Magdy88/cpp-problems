
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

const string FileName = "TheEnd.txt";

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

stClientData ConvertLinetoRecord(string line, string seperator = "#//#")
{
	stClientData client;
	vector<string>vString;

	vString = SplitString(line, seperator);

	client.AccountNumber = vString[0];
	client.PinCode = vString[1];
	client.Name = vString[2];
	client.Phone = vString[3];
	client.AccountPalance = stod(vString[4]);

	return client;

}

vector <stClientData> LoadCleintsDataFromFile(string FileName)
{
	vector <stClientData> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open())
	{
		string Line;
		stClientData Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

void PrintClientRecord(stClientData Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountPalance;
}

void PrintAllClientsData(vector<stClientData>vString)
{
	cout << "\n\t\t\t\t\tClient List (" << vString.size() << ")Client(s).";
		cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (stClientData Client : vString)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}

int main()
{
	vector<stClientData>vClient = LoadCleintsDataFromFile(FileName);

	PrintAllClientsData(vClient);

	


}





	