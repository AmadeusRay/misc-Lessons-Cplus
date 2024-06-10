#include <iostream>
using namespace std;

int main()
{
	int x{ 5 }, y{ 15 }, * ptr1{ &x }, * ptr2{ nullptr };

	ptr2 = ptr1;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	if (*ptr1 == *ptr1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;

}