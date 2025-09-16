
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
	bool MarkForDelet = false;
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
string ConvertRecordToLine(stClient Client, string Seperator =
	"#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);
	return stClientRecord;
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

bool FindClientByAccountNumber(string AccountNumber,vector<stClient>vClient
	, stClient &client)
{

	for (stClient c : vClient)
	{

	   if (c.AccountNumber ==AccountNumber )
	    {
		   client = c;
		
		return true;
	   }
	}
	return false;
	
}

bool MarkClientForDeletByAccountNumber(string AccountNumber, vector<stClient>& vClients)
{

	for (stClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelet = true;
			return true;
		}
	}
	return false;
}

vector<stClient>SaveClientDataToFile(string FileName, vector<stClient> &vClints)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);

	string DataLine;
	if (MyFile.is_open())
	{
		for (stClient &c : vClints)
		{
			if (c.MarkForDelet == false)
			{
				DataLine = ConvertRecordToLine(c);
				MyFile << DataLine << endl;
				
			}
		}
		MyFile.close();
	}
	return vClints;


}

stClient ChangeClinetRecord(string AccountNumber)
{
	stClient client;

	client.AccountNumber = AccountNumber;
	cout << "Enter YOur Pin Code ? ";
	getline(cin>>ws, client.PinCode);
	cout << "Enter YOur Name ?";
	getline(cin, client.Name);
	cout << "Enter YOur Phoen ? ";
	getline(cin, client.Phone);
	cout << "Enter YOur Accoounter Balance ?";
	cin >> client.AccountBalance;

	return client;

}


bool UpdateDataByAccountNumber(string AccountNumber, vector<stClient>& vClients)
{
	stClient client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, client))
	{
		PrintClientRecord(client);

		cout << "\nAre You Sure To Update Client  Y/N ?";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			
			for (stClient& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClinetRecord(AccountNumber);
					break;
				}
			}
			SaveClientDataToFile(AccountNumber, vClients);


			vClients = LoadCleintsDataFromFile(FileName);
			cout << "Client Update Sussfuly \n";

			return true;
			
		}
	}

	else
	{
		cout << "Client With Account Number (" << AccountNumber << ") Not Found";

		return false;
	}
}





int main()
{
	
	vector<stClient>vClient = LoadCleintsDataFromFile(FileName);
	string AccountNumber = ReadAccounterNumber();

	UpdateDataByAccountNumber(AccountNumber, vClient);





}





	