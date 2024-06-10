#include <iostream>
using namespace std;

//int main()
//{
//	int i = 1;
//	double d = 1.5;
//
//	void* ptr = &i;
//	ptr = &d;
//
//	*(double*)ptr = 5.5;
//
//	cout << *(double*)ptr << endl;
//
//	return 0;
//}

int main()
{
	void* ptr = nullptr; // better to avoid void ptr

	short i = 256;
	ptr = &i;

	unsigned char y = *(unsigned char*)ptr;

	cout << (int)y << endl;

	return 0;
}