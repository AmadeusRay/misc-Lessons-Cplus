#include <iostream>

using namespace std;

void LogInt(int y = 0)
{
	cout << y << endl;
}

int main()
{
	int x{ 5 };

	x++;

	for (int i = 0; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	LogInt(x);

	return 0;
}