#include <iostream>
using namespace std;

//int main()
//{
//	int x{ 12 }, y{ 999 };
//	x = 250;
//
//	int* ptr = &x;
//	int& x_Ref = x; // references must be initialized. Needs to equal something.
//
//	ptr = &y;
//
//	x_Ref = y; // stores y in x
//	x_Ref = 500; // then changes x to 500
//
//	cout << "x: " << x << endl;
//	cout << "x_Ref:" << x_Ref << endl;
//	cout << "*ptr: " << *ptr << endl;
//
//	return 0;
//}


//
//int main()
//{
//	int demoArray[] = { 1, 2, 3 };
//	
//	int i = 0;
//	for (int& temp : demoArray)  // creating a reference for each. 1 then 2 then 3
//	{
//		cout << &demoArray[i] << endl;
//		cout << &temp << endl;
//		
//		cout << "____________________" << endl;
//		i++;
//	}
//	for (int const& temp : demoArray)
//	{
//
//		cout << temp << endl;
//	}
//
//	return 0;
//}

int main()
{
	const int& literalRef = 1; // destoryed if put in function. Would be out of scope.

	cout << &literalRef << endl;
	cout << literalRef << endl;

	return 0;
}