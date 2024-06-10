#include <iostream>
#include <cstdlib> // for rand() but might not need it this?
#include <ctime> // for time() but not not need it for this?
using namespace std;

int main()
{
	int randomNum{}, rolls{ 3 };
	int r{ 6 }; // desired amount of values in the range.
	int lowerBound{ 1 }; // min or starting value in the range.

	//seed randoml number generator
	//srand(time(nullptr)); 

	// to get rid of error about possible data loss "time to int"
	srand(static_cast<unsigned int>(time(nullptr)));

	//Generate D6 dice roll
	for (int i = 0; i < rolls; i++)
	{
		randomNum = lowerBound + rand() % r;
		cout << randomNum << endl;
	}

	return 0;
}