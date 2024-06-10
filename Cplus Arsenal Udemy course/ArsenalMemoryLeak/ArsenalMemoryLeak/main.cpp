#include <iostream>
using namespace std;

void leakMemory()
{
	int* localPtr = new int;
	delete localPtr;
	localPtr = nullptr; // get in the habit of using this.
}

int main()
{
	leakMemory();
	return 0;
}