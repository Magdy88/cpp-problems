
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
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

stClient ReadClientData()
{
	stClient client;

	cout << "Please inter Your Client Data : \n\n";

	cout << "Enter YOur Accounter Number ? ";
	getline(cin, client.AccountNumber);
	cout << "Enter YOur Pin Code ? ";
	getline(cin, client.PinCode);
	cout << "Enter YOur Name ?";
	getline(cin, client.Name);
	cout << "Enter YOur Phoen ? ";
	getline(cin, client.Phone);
	cout << "Enter YOur Accoounter Balance ?";
	cin >> client.AccountBalance;

	return client;


}

string ConverRecordToLine(stClient client, string seperator = "#//#")
{
	string Line = "";

	Line += client.AccountNumber + seperator;
	Line += client.PinCode + seperator;
	Line += client.Name + seperator;
	Line += client.Phone + seperator;
	Line += to_string (client.AccountBalance);

	return Line;
}



int main()
{

	stClient client;

	client =ReadClientData();
	cout << ConverRecordToLine(client);
	


}





	