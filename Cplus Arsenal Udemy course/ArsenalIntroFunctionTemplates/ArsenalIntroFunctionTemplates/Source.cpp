#include <iostream>
using namespace std;

//// return the smalls of two numbers using a function template. My version.
//template<typename T>
//void print(T formalP1, T formalP2) {
//	if (formalP1 > formalP2)
//	{
//		cout << formalP1 << endl;
//	}
//	if (formalP2 > formalP1)
//	{
//		cout << formalP2 << endl;
//	}
//	else
//	{
//		cout << "they were equal" << endl;
//	}
//}

///

//// return the smalls of two numbers using a function template. teacher version
//template<typename T>
//T smallest(T xP, T yP)
//{
//	return (xP > yP) ? xP : yP;
//}
//
//int main()
//{
//	cout << smallest(55, 3) << endl;
//
//	return 0;
//}

///

//template<typename T>
//void print(T formalP) { cout << formalP << endl; }
//int main()
//{
//	print<int>(55); // it's better the the type for clarity to reader. <int>
//	print(55); // not clear for person reading to know it's an int.
//
//	print<char>('h');
//	print('h');
//
//	print<double>(55.2222);
//	print(55.2222);
//
//	return 0;
//
//	print<int>(200, 200);
//}

// Create a function to interchange / swap variables. I couldn't do it. Would only output one digit. Use pointers?

// Teacher version


template<typename T>
void interchange(T& xP, T& yP)
{
	T temp;  // local variable
	temp = xP; // Assigns xP to Temp. So temp is xP

	xP = yP; // assigns yP to xP. So xP is yP
	yP = temp; // yP will be stored as xP.

	// the temp is needed as an inbetween since if you said xP = yP, 
	// then yP = xP you will not get the reult you want.
}

int main()
{
	int q{ 33 }, w{ 55 };
	cout << "q: " << q << endl;
	cout << "w: " << w << endl;

	cout << "\n After interchange(q, w)..." << endl;
	interchange(q, w);

	cout << "q: " << q << endl;
	cout << "w: " << w << endl;

	cout << "\n --- End of Program ---" << endl;
	return 0;
}