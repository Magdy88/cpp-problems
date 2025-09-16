
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Please inter Your Num ?";
	cin >> Num;
	return Num;
}

string NumberToText(int Num)
{
	if (Num == 0)
	{
		return "";
	}

	if (Num >= 1 && Num <= 19)
	{
		string arr[]= { "", "One" , "Two" ,
             "Three" , "Four" , "Five" , "Six" , "Seven" ,
             "Eight" , "Nine" , "Ten" , "Eleven" , "Twelve" ,
             "Thirteen" , "Fourteen" , "Fifteen" , "Sixteen" ,
             "Seventeen" ,"Eighteen", "Nineteen"};

		return arr[Num] + " ";
	}

	if (Num >= 20 && Num <= 99)
	{
		string arr[] = { "" , "" , "Twenty" , "Thirty" , "Forty" , "Fifty" ,
	 "Sixty", "Seventy" , "Eighty" , "Ninety" };

		return arr[Num / 10] + " " + NumberToText(Num % 10);
	}

	if (Num >= 100 && Num <= 199)
	{
		return "One Hundred " + NumberToText(Num % 100);
	}

	if (Num >= 200 && Num <= 999)
	{
		return NumberToText(Num / 100) + "Handreds " + NumberToText(Num % 100);
	}

	if (Num >= 1000 && Num <= 1999)
	{
		return " One Thounsand " + NumberToText(Num % 1000);
	}

	if (Num >= 2000 && Num <= 100000)
	{
		return NumberToText(Num / 1000) + "Thousand " + NumberToText(Num % 1000);
	}

}

int main()
{

	int Number = ReadNumber();

	cout << NumberToText(Number);





	return 0;
}
