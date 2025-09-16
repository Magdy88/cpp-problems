
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

string  ReadString()
{
	string S1 = "";
	cout << "Please inter Your string ? \n";
	getline(cin, S1);
	return S1;
}

string RemovePunctiotion(string S1)
{
	string S2 = " ";
	for (int i = 0; i < S1.length(); i++)
	{
		if (ispunct(S2[i]))
		{
			S2 = S1;
		}
	}
	return S2;
}





int main()
{
	srand((unsigned)time(NULL));

	string S1 = "Welcome to Jordan, Jordan is a nice country; it'samazing.";

	cout << " Orignal String = " << S1 << endl;

	cout << RemovePunctiotion(S1);

}




