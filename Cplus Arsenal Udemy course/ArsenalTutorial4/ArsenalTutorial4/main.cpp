#include <iostream>
using namespace std;

int main()
{
	int characterHealth = 0;
	bool done = false;

	while (!done)
	{
		cout << "Enter an integer greater than or equal to 0 and less than or equal to 100: ";
		cin >> characterHealth;
		if (characterHealth < 0 || characterHealth > 100)
		{
			// repeat input validation loop
			cout << "please try again" << endl;
		}
		else
		{
			done = true;
		}
	}
	/*
	while (characterHealth < 0 || characterHealth > 100)
	{
		cout << endl;
		cout << "Enter an integer greater than or equal to 0 and less than or equal to 100: ";
		cin >> characterHealth;
	}*/

	if (characterHealth == 0)
	{
		cout << "\nGame Over." << endl;
	}
	else if (characterHealth > 0 && characterHealth <= 100)
	{
		cout << "\nStill in the game!" << endl;
	}
	else
	{
		cout << endl;
		cout << "________________________" << endl;
		cout << "...Malfunction...Malfunction...Malfunction..." << endl;
		cout << "------------------------" << endl;
	}
}