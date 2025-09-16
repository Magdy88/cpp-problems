
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


stClientData ReadClientData()
{
	stClientData Data;

	cout << "Enter Account Number? ";
	getline(cin >> ws, Data.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Data.PinCode);
	cout << "Enter Name? ";
	getline(cin, Data.Name);
	cout << "Enter Phone? ";
	getline(cin, Data.Phone);
	cout << "Enter AccountBalance? ";
	cin >> Data.AccountPalance;
	return Data;


}

string CnvertToLine(stClientData Data, string sperator = "#@@#")
{
	string StclientRecord = "";

	StclientRecord += Data.AccountNumber + sperator;
	StclientRecord += Data.PinCode + sperator;
	StclientRecord += Data.Name + sperator;
	StclientRecord += Data.Phone + sperator;
	StclientRecord += to_string(Data.AccountPalance);

	return StclientRecord;


}

void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
	}

	MyFile.close();
}

void AddClient()
{
	stClientData Client;
	Client = ReadClientData();
	AddDataLineToFile(FileName, CnvertToLine(Client));
}

void AddClients()
{
	char NewClient = 'Y';

	do
	{
		system("cls");
		cout << "Adding New Client:\n\n";

		AddClient();
		cout << "\nClient Added Successfully, do you want to addmore clients ? Y / N ? ";

		cin >> NewClient;
	} while (toupper(NewClient) == 'Y');
}



int main()
{
	srand((unsigned)time(NULL));

	AddClients();


}





	