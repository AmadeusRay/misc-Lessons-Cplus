//#include <iostream>
//using namespace std;

////int var = 6;
//
//extern int var; // extern says it's defined in another file
//
//int main()
//{
//	cout << var << endl;
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//extern void demoFunction();
//
//
//int main()
//{
//	demoFunction();
//
//	return 0;
//}

#include <iostream>
using namespace std;

static int s_Var = 5;

static void demoFunction() // use static to make sure it's in file scope
// static used to avoid polluting global name space
{
	cout << "Hello from main.cpp!" << endl;
}

int main()
{
	demoFunction();

	return 0;
}