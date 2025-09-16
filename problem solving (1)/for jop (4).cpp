
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stinfo
{
	int age;
	bool hasdrivelicence;

};

stinfo readinfo( )
{
	stinfo info;

	cout << "please inter your age \n";
	cin >> info.age;
	cout << "please inter your drive licence \n";
	cin >> info.hasdrivelicence;

	return info;

}

bool isaccepted(stinfo info)
{
	return (info.age > 21 && info.hasdrivelicence);

}

void printresult(stinfo info)
{
	if (isaccepted(info))

		cout << "hired";
	else
		cout << "rejected";
	
	

}

int main()
{
	
	printresult(readinfo());




	return 0;


}