//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int demoVar = 12;
//
//	int* demoPtr = &demoVar;
//
//	cout << *demoPtr << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int demoArray[]{ 1,2,3 };

	int* demoPtr = demoArray;


	cout << *demoPtr << endl;
	cout << demoPtr[0] << endl;
	return 0;
}


