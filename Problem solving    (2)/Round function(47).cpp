
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;



float ReadNum()
{
	float Number;
	cout << "please inter your Numer?\n";
	cin >> Number;
	return Number;
}


float GetfractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float Fraction = GetfractionPart(Number);

	if (abs(Fraction) >= 0.5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;

	}
	else
		return IntPart;

}






int main()
{
    float Number = ReadNum();

	cout << "My round Result is " << MyRound(Number) << endl;
	cout << "c++ round Result : " << round(Number);


}

