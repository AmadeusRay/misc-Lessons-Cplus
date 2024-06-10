#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int j = 2;
	int k = 3;

	if ((i <= k && i < j) && j <= k) // without parathese, 
	//it will not specify how to do the formula

	{
		cout << "This will be printed. " << endl;
	}

	system("pause");
}
