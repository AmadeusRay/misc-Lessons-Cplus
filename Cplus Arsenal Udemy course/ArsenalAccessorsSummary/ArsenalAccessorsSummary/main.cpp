#include <iostream>
using namespace std;

const int x = 55;

int main()
{
	int x = 2;

	cout << ::x << endl; // <-- specifies to refuer to the const above?

	cout << "\n__End of Program___" << endl;
	return 0;
}