
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadName()
{
	string Name;
	cout << "Please intre your Name" << endl;
	getline(cin, Name);
	return Name;
	
	

}

string Encribtion(string Name,short EnkyraptionKey)
{
	for (int i = 0; i <= Name.length(); i++)
	{
		Name[i] = char((int)Name[i] + EnkyraptionKey);
	}
	return Name;
	
}
string Decraption(string Name, short EnKeraptionKey)
{
	for (int i = 0; i < Name.length(); i++)
	{
		Name[i] = char((int)Name[i] - EnKeraptionKey);
	}
	return Name;
}







int main()
{
	short const EnKeraptionKey = 2;

	string Name = ReadName();
	string TextAfterIncrition = Encribtion(Name, EnKeraptionKey);
	string TextAfterDecription= Decraption(TextAfterIncrition, EnKeraptionKey);


	cout << "Text Before Encription : " << Name << endl;
	cout << "Text After Encription : " << TextAfterIncrition << endl;
	cout << "Text After Decription : " << TextAfterDecription << endl;

	
	

}

