#include <iostream>
using namespace std;

class Character
{
public:
	Character(); // constructor
	~Character(); // destructor

	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Character* Char = new Character;
	cout << *Char->CharacterAge << endl; // I added this.
	cout << *Char->CharacterHealth << endl; // I added this.
	delete Char;

	system("pause");
}

Character::Character()
{
	cout << "A new character was created. \n";

	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}

Character::~Character()
{
	cout << "New Character was destroyed. \n";

	delete CharacterAge;
	delete CharacterHealth;
}
