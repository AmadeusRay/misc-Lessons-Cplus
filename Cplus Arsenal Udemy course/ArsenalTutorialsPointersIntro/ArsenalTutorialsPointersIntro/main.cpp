#include <iostream>
using namespace std;

int main()
{
	int demoVar = 15;

	//delcare pointer and set it to null (to point to nowhere)
	int* demoPtr = nullptr;
	cout << demoPtr << endl;
	//get address of demoVar using the address-of operator &
	//set demoPtr to the memory address of demoVar.
	demoPtr = &demoVar;
	//dereference demoPtr so that we can read from the memory
	cout << *demoPtr << endl;

	*demoPtr = 12;

	cout << *demoPtr << endl;

}