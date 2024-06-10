#include <iostream>
using namespace std;

/* My way

void greatestOf3Intergers(int x, int y, int z);

int main()
{
	greatestOf3Intergers(9, 55, 3);

	return 0;
}

void greatestOf3Intergers(int x, int y, int z)
{
	if (x > y)
	{
		cout << x << endl;
		return;
	}
	if (y > x)
	{
		cout << y << endl;
	}
	else
	{
		cout << x << endl;
	}
}
*/

// better way, using other functions

void greatest2intergers(int firstNumber, int secondNumber); // would typicall be in header file

int main()
{
	greatest2intergers(5, 2);

	return 0;
}

void greatest2intergers(int firstNumber, int secondNumber)
{
	if (firstNumber > secondNumber)
	{
		cout << firstNumber << endl;
		return;
	}
	else
	{
		cout << secondNumber << endl;
		return;
	}
}