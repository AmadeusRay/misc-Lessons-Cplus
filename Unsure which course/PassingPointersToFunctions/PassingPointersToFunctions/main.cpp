//#include <iostream>
//using namespace std;
//
//void incrementScore(int x)
//{
//	x++;
//	cout << x << endl;
//}
//
//int main()
//{
//	int score = 5;
//
//	incrementScore(score);
//
//	cout << score << endl;
//
//	cout << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void incrementScore(int *x)
//{
//	//x++;     // offset for pointer itself. Not actually changing variable
//
//	(*x)++;
//	//cout << x << endl; // need to deference it. * needed.
//	cout << *x << endl;
//}
//
//int main()
//{
//	int score = 5;
//
//	int* ptr{ &score };
//
//	incrementScore(ptr);
//
//	cout << score << endl;
//
//	cout << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

void incrementScore(int *const x)
{
	(*x)++;
	cout << *x << endl;
}

void printScore(const int* const x)
{
	cout << *x << endl;
}

int main()
{
	int score = 5;

	int* ptr{ &score };

	incrementScore(ptr);

	printScore(&score);

	cout << endl;

	return 0;
}