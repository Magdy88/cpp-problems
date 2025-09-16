
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stinfo
{
	int age;
	bool hasdrivelicence;
	bool hasrecommedition;
};

stinfo readinfo()
{
	stinfo info;

	cout << "enter your age \n ";
	cin >> info.age;
	cout << "enter your drive lince \n";
	cin >> info.hasdrivelicence;
	cout << " if he has recommedition \n";
	cin >> info.hasrecommedition;
	
	return info;
}
bool isaccepted(stinfo info)
{
	if (info.hasrecommedition)
	{
		return true;
	}
	else
		return (info.age > 21 && info.hasdrivelicence);
}

void printinfo(stinfo info)
{
	if (isaccepted(info))
		cout << "heired";
	else
		cout << "rejected";
}


int main()
{
	
	printinfo(readinfo());



	return 0;


}