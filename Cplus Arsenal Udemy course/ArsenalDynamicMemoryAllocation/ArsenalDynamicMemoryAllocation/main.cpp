#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	ptr = new int; // initializing ptr
	*ptr = 15;

	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr; // when deleting do this. 

	return 0;
}