#include <iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 8; i++)
	{
		cout << "hi" << endl;
		for (int j = 2; j <= i; j+2)
		{
		cout << j;
		
		}
		cout << "bye" << endl;
	}
	
	return 0;
}