//#include <iostream>
//using namespace std;

//int main()
//{
//	int demoArray[]{ 2,4,6 };
//	int* ptr1{ demoArray };
//
//	*(ptr1 + 1) = 700;
//
//	*(demoArray + 2) = 7;
//
//	cout << *(demoArray + 1) << endl;
//	cout << *(ptr1 + 2) << endl;
//}


//

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x{5}, y{97};
//
//	int* ptr{&x};
//
//	ptr[0] = 3;
//	cout << ptr[0] << endl; //  no offset since 0 bytes of offset
//	cout << ptr[1] << endl; // 1 is 4 bytes of offset.
//	cout << ptr[2] << endl;
//
//	return 0;
//}


#include <iostream>
using namespace std;

int main()
{
	int demoArray[]{ 3, 6, 8 };
	int* ptr1{ demoArray };

	//cout << &demoArray[1] << endl;
	//cout << (demoArray + 1) << endl;
	//cout << (ptr1 + 1) << endl;
	// // simply an offset, 4 bytes added to address.

	demoArray[1] = 5; // change [1] to 5 instead of 6.

	cout << demoArray[2] << endl;
	cout << *(demoArray + 1) << endl;
	cout << *(ptr1 + 1) << endl;
	// deferenced, all print 6. This is from the array above.



	return 0;

}