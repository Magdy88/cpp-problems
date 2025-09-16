
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



int Myceil(int Number)
{
	if (Number > 0)
	{
		return ++Number;
	}
	else
		return int(Number);
	 

}






int main()
{
    float Number = ReadNum();

	cout << "My round Result is " << Myceil(Number) << endl;
	cout << "c++ round Result : " << ceil(Number);


}

