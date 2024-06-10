#include <iostream>

using namespace std;

int main()
{
	for (auto x : "Bob is the man!")
	{
		if (x == ' ')
		{
			cout << "_";
		}
		else
		{
			cout << x;
		}
	}

	return 0;
}