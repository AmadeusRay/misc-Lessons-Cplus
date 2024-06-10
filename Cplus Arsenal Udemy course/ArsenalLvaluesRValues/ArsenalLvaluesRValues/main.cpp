#include <iostream>
using namespace std;

//int main()
//{
//	int x = 5;
//
//
//
//	int& x_ref = x;
//	x_ref = 50;
//
//
//	cout << x_ref << endl;
//
//
//	return 0;
//}

// learning static

//
//int& getInt() // alias for temp
//{
//	static int temp = 10; // without static variable goes out of scope.
//	return temp;
//}
//
//int main()
//{
//	int &x = getInt(); // alias for getInt
//	x += 50;
//
//	cout << getInt() << endl;
//
//	return 0;
//}


//int &getInt() // alias for temp
//{
//	static int temp = 10; // without static variable goes out of scope.
//	temp++;
//
//	return temp;
//}
//
//int main()
//{
//	int *ptr{&getInt()};
//
//	*ptr += 500;
//
//	getInt() += 50;
//
//	cout << getInt() << endl;
//
//	return 0;
//}




void printScore(const int & x) // constant L value reference
{
	cout << x << endl;
}

void printScore(float && x) // R value reference... it's like the float goes in but not int
{
	x = 997;
	cout << x << endl;
}

void printScore(int && x) // R value reference... int goes in but not the float
{
	x += 5;
	cout << x << endl;
}

int main()
{
	int score{ 75 };

	printScore(score);
	printScore(88.0f);
	printScore(12);

	return 0;
}