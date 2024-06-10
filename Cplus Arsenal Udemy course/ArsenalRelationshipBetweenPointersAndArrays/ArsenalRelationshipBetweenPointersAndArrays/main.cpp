#include <iostream>
using namespace std;

//int main()
//{
//	int demoArray[]{ 1,2,3 };
//
//	cout << demoArray << endl;
//	cout << &demoArray[0] << endl; // ends with 8
//	cout << &demoArray[1] << endl; // 4 bytes a way from 8... 9, A, B, C... So the end of the line is C. 4 bytes away
//	cout << demoArray[2] << endl;
//
//	int* ptr{ demoArray };
//	cout << ptr << endl;
//	cout << *ptr << endl;
//	cout << ptr[2] << endl;
//
//	return 0;
//}



//

//int main()
//{
//	int array[]{ 1,2,3 };
//	int* ptr{ array };
//	cout << ptr[1] << endl;
//	cout << array[1] << endl;
//
//	return 0;
//}

int main()
{
	char demoChar{ 'b' };

	int demoArray[]{ 1,2,3 };
	cout << &demoArray[0] << endl;
	cout << &demoArray[1] << endl;
	cout << &demoArray[2] << endl;

	return 0;
}