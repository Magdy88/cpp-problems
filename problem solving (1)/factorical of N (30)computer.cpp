
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int checknegnum(string massage)
{
	int N;
	do
	{
		cout << massage << endl;
		cin >> N;
			
		
	} while (N < 0);
	return N;

}

void printfactoricalnum(int N)
{
	int fact = 1;
	for (int i = N; i >= 1; i--)
	{
		fact *= i;
	}
	cout << "factorical with for loop is " << fact << endl;
	
}



int main()
{
	printfactoricalnum(checknegnum("enter N"));
	

}