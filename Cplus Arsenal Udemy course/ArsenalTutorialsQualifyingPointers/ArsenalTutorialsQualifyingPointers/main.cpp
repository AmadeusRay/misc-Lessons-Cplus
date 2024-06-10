#include <iostream>
using namespace std;

//int main()
//{
//	const int DEMO_CONSTANT{ 12 };
//	int y{ 999 };
//
//	const int* ptr{ &DEMO_CONSTANT };
//
//	cout << *ptr << endl;
//
//	return 0;
//}

int main()
{
	const int DEMO_CONSTANT{ 12 };
	int y{ 999 };

	int* ptr{ &y };

	*ptr = 224;
	cout << *ptr << endl;
	return 0;
}