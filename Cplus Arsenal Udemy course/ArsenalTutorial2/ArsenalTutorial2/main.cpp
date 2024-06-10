#include <iostream>
using namespace std;

int main()
{
	bool isAlive(true), hasHead(true), hasLegs(true);

	if (hasHead && hasLegs && isAlive)
	{
		cout << "Still in the game!" << endl;
	}

	int health = 25;
	cout << "Character health is:" << health << endl;

	return 0;
}