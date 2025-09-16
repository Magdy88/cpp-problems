
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadNum()
{
	string Pass;
	cout << "Please intre your pass" << endl;
	cin >> Pass;
	return Pass;
	
	

}

bool GessPass(string TruePass)
{
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{ 
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;
				
				cout << "trial" << "[" << counter << "] :" << word << endl;

				if (word == TruePass)
				{
					
					cout << "Pass is :" << TruePass << endl;
					cout << "found After " << counter << " Triles" << endl;
					return true;
				}
				word = "";

			}
		}
	}
	
	return false;
	
}









int main()
{
	
	GessPass(ReadNum());
	
	

}

