
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

const string FileName = "BABAYAGA.txt";

struct stClient
{
	string AccountNumber;
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

stClient ConvertLinetoRecord(string line, string seperator = "#//#")
{
	stClient client;
	vector<string>vString;

	vString = SplitString(line, seperator);

	client.AccountNumber = vString[0];
	client.PinCode = vString[1];
	client.Name = vString[2];
	client.Phone = vString[3];
	client.AccountBalance = stod(vString[4]);

	return client;

}

vector<stClient> LoadCleintsDataFromFile(string FileName)
{
	vector<stClient>vString;
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;
		stClient client;

		while (getline(MyFile, line))
		{
			client = ConvertLinetoRecord(line);
			vString.push_back(client);
		}
		MyFile.close();

	}
	return vString;
}
string ReadAccounterNumber()
{
	string AccountNumber;
	cout << "Please inter Your Accouont Number ? ";
	cin >> AccountNumber;
	return AccountNumber;
}
void PrintClientRecord(stClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool FindClientByAccountNumber(string AccountNumber, stClient &client)
{
	vector<stClient>vClient =LoadCleintsDataFromFile(FileName);

	for (stClient c : vClient)
	{

	   if (AccountNumber == c.AccountNumber)
	    {
		   client = c;
		
		return true;
	   }
	}
	return false;
	
}






int main()
{
	
	stClient client;
	string AccountNumber = ReadAccounterNumber();

	if (FindClientByAccountNumber(AccountNumber,client))
	{
		PrintClientRecord(client);
	}
	else
	{
		cout << "Client With Account Number (" << AccountNumber << ") Not Found ";
	}




}





	