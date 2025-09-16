
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "MyLib.h";
#include "MyInputLib.h";
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;


char ReadCharcter()
{
	char charcter;
	cout << "Please inter a charcter \n";
	cin >> charcter;
	return charcter;
}

char invertLetter(char char1)
{

	return isupper(char1) ? tolower(char1) : toupper(char1);
	
}



int main()
{
	srand((unsigned)time(NULL));

	char S1 = ReadCharcter();

	cout << "Charcter After Invert \n";
	S1 = invertLetter(S1);
	cout << S1;
	

	

	


}






