#include <iostream>
using namespace std;

/* Original. Basic way.

int greatest2intergers(int firstNumber, int secondNumber)
{
	if (firstNumber > secondNumber)
	{
		return (firstNumber);
	}
	else
	{
		return (secondNumber);
	}
}

int main()
{
	cout <<greatest2intergers(5, 2) << endl;

	return 0;
}

*/


/*
// messing with formatting. Which is greater of 2 intergers.

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
*/

// which is greater of 3
int greatest2intergers(int x, int y); // would typically be in header file
int greatest3intergers(int x, int y, int z); // would typically be in header file

int main()
{
	cout << greatest3intergers(5, 101, 4) << endl;

	return 0;
}

int greatest2intergers(int x, int y)
{
	if (x > y)
	{
		//cout << x << endl;
		return x;
	}
	else
	{
		//cout << y << endl;
		return y;
	}
}

int greatest3intergers(int x, int y, int z)
{
	return greatest2intergers(x, greatest2intergers(y, z));

}
