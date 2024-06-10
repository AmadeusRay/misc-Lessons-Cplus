#include <iostream>
using namespace std;

int main()
{
	int counter = 0;
	int accumulator = 0;
	int temp = 0;

	cout << "Enter 5 values to add together." << endl;
	while (counter < 5)
	{
		
		cin >> temp;
		accumulator += temp;

		++counter;
	}

	cout << "the last value was:" << temp << endl;
	cout << "Counter is:" << counter << endl;
	cout << "Accumulator is:" << accumulator << endl;

	return 0;
}