
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct stname
{
	string fristname;
	string lastname;
};

stname readname()
{
	stname fullname;

	cout << "please inter frist name \n";
	cin >> fullname.fristname;
	cout << "please inter last name \n";
	cin >> fullname.lastname;
	 
	return fullname;
}
string getfullname(stname fullname )
{
	string name;
	
		name = fullname.fristname + " " + fullname.lastname;

	return name;
}

void printname(string name)
{
	cout << name;
}


int main()
{
	printname(getfullname (readname()));
}