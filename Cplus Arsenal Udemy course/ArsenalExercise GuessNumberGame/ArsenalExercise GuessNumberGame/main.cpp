#include <iostream>
#include <cstdlib> // for rand() but might not need it this?
#include <ctime> // for time() but not not need it for this?
using namespace std;

int main()
{
	int randomNum{}, rolls{ 1 };
	int r{ 50 }; // desired amount of values in the range.
	int lowerBound{ 1 }; // min or starting value in the range.

	
	int guess;
	guess = 0;

	// to get rid of error about possible data loss "time to int"
	srand(static_cast<unsigned int>(time(nullptr)));

	//Generate D6 dice roll
	for (int i = 0; i < rolls; i++)
	{
		randomNum = lowerBound + rand() % r;
	}

	cout << "guess a numbet between 1 and 50:" << endl;

	while (guess != randomNum)
	{
		cin >> guess;

			if (guess < randomNum)
			{
				cout << "It's higher! Try again." << endl;
			}

			else if (guess > randomNum)
			{
				cout << "It's lower! Try again." << endl;
			}

			else if (guess = randomNum)
			{
				cout << "You Win!" << endl;
			}
	}
}


//could have used do while loop. Also could have not made everything in the main function.