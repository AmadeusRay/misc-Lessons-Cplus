#include <iostream>

using namespace std;

int main()
{
	const int CHARACTERS = 2;
	const int ENCOUNTERS = 3;

	int xpGainedPerEncounter[CHARACTERS][ENCOUNTERS]
	{
		{4, 7, 8},
		{6, 5, 9}
	};

	//cout << xpGainedPerEncounter[1][2] << endl << endl; // [1] is which set. [2] and which one in the set.

	for (int j = 0; j < ENCOUNTERS; j++)
	{
		for (int i = 0; i < CHARACTERS; i++)
		{
			cout << xpGainedPerEncounter[i][j] << " ";
		}
		cout << endl;
	}
}
