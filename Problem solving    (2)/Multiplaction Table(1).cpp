
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void PrintHeader()
{
	cout << "\t\t\t\t Multiblaction Table From 1 to 10 \n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "    " << i << "   ";
	}
	cout << "\n ";
	cout << "\n----------------------------------------------------------------------------------------\n";

}

string space(int i)
{
	for (int i = 1; i <= 10; i++)
	{
		
		if (i > 10)
			return  "  |";
		else
			return "   |";

	}
}

void PrintMultiFrom1ToN()
{
	PrintHeader();


	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << space(i) << "\t";

		for (int j = 1; j <= 10; j++)
		{
			cout<<" " << i * j << "\t";
		}
		cout << endl;
	}
}






int main()
{
	PrintMultiFrom1ToN();
	
	
}
