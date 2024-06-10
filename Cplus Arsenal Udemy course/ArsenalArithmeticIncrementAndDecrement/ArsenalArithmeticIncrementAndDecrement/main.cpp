#include <iostream>
using namespace std;

//int main()
//{
//	int demoArray[]{ 2, 4, 6, 8, 10 };
//	int* ptr1{ demoArray + 1};
//	int* ptr2{ demoArray + 4 };
//
//	int offset = ptr2 - ptr1;
//	cout << offset << endl;
//
//	return 0;
//}

int main()
{
	int demoArray[]{ 2, 4, 6 };
	int* ptr1{ nullptr };

	ptr1 = demoArray;

	cout << ptr1 << endl;
	cout << &ptr1 << endl;

	return 0;
}