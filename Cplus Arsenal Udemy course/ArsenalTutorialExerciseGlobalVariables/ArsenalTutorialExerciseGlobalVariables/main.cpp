#include <iostream>
using namespace std;

/*
int x = 0; // global variable

int square()
{
	x = x * x;
	return x;
}

int main()
{
	cout << "Enter an integer to square: ";
	cin >> x;

	cout << x << " squared is: " << square() << endl;

	cout << "Enter another integer to square: ";
	cin >> x;

	cout << x << " squared is: " << square() << endl;

	cout << "The sum of the two integers is: " << x + x << endl;

	cout << endl;
	return 0;
}
*/

/*
// my solution
int x = 0; // global variable

int y = 0;

int z = 0;

int square()
{
	x = x * x;
	return x;
}

int main()
{
	cout << "Enter an integer to square: ";
	cin >> x;
	y = x;

	cout << x << " squared is: " << square() << endl;
	

	cout << "Enter another integer to square: ";
	cin >> x;
	z = x;

	cout << x << " squared is: " << square() << endl;

	
	cout << "The sum of the two integers is: " << y + z << endl;

	cout << endl;
	return 0;
}
*/

//int x = 0; // global variable

int square(int xP)
{
	return (xP * xP); // does not modify x
}

int main()
{
	int x{}, sum{};

	cout << "Enter an integer to square: ";
	cin >> x;

	cout << x << " squared is: " << square(x) << endl;
	sum += square(x);

	cout << "Enter another integer to square: ";
	cin >> x;

	cout << x << " squared is: " << square(x) << endl;
	sum += square(x);

	cout << "The sum of the two integers is: " << sum << endl;

	cout << endl;
	return 0;
}