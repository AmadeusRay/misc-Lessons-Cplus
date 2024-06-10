#include <iostream>
/*
int main()
{
	int a = 100;

	int* aPtr;
	aPtr = &a;

	std::cout << *aPtr << std::endl; // the * gives the variable within the address

	int b = 50;

	aPtr = &b; // without *, just shows address (useless).

	std::cout << aPtr << std::endl; // not using cout, instead std::cout 
	//since we don't have std namespace command ealier

	system("pause");
}
*/

/*
int main()
{
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10 }; // array, continous in memory

	int* NumPtr = numbers; // types have to be consistant. int above and here would 
	//have to change to float to work.
	
	std::cout << *NumPtr << std::endl; 

	NumPtr++;   // adds one, so we goto next one. Makes one

	std::cout << *NumPtr << std::endl;

	NumPtr++;   // Makes 2

	std::cout << *NumPtr << std::endl;

	NumPtr += 3; // makes 5   since it moves the array +3 to slot 5.

	std::cout << *NumPtr << std::endl;

	system("pause");
} */

#include <string>
using namespace std;

struct Container
{
	string Name; // because we added namespace std above, we don't have to say std::string

	int X;
	int Y;
	int Z;
};

int main()
{
	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;  // needs parentheses, *ptrcont is not container. 
	// VS works right to left, so you need the paranthese so it can do the pointer first.
	// paranthese always gets read first. This is considered an ugly way.
	cout << PtrToCont->Name << endl; // This is considered cleaner. This is the standard.
	cout << PtrToCont->X << endl;
	cout << (*PtrToCont).Y << endl;
	cout << (*PtrToCont).Z << endl;

	system("pause");
}