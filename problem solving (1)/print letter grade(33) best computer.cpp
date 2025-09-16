
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadGrade(int from, int to)
{
	int grade;
	do
	{
		cout << "please inter your grade from 0 to 100 \n";
		cin >> grade;
	} while (grade<from || grade>to);

	return grade;
}

char PrintStdGrade(int grade)
{
	if (grade >= 90 )
		return 'A';

	else if (grade >= 80 )
		return'B';

	else if (grade >= 70 )
		return 'C';

	else if (grade >= 60 )
		return 'D';

	else if (grade >= 50 )
		return 'E';

	else
		return 'F';

}

int main()
{
	cout << "result = " << PrintStdGrade(ReadGrade(0, 100));
}