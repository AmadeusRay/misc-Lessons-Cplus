#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();

	void TakeDamage(float damage);

private:
	string Name;
	float Health;

protected:
	int NumberOfLimbs;

};

class Goblin : public Creature
{
public:
	Goblin();
	int GetNumberOfLimbs();
};

int main()
{
	Goblin Gobby;
	cout << "His name is "<< Gobby.GetName() << endl; // Gets getName. 
	cout << "He has "<< Gobby.GetNumberOfLimbs() << " limbs" << endl;
	Gobby.TakeDamage(35.0);


	system("pause");
}

Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created! \n";
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName() // Sets Get Name
{
	return Name;  // Return Name (publicly) and sets it into Get Name () publicly. *******
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;

	if (Total <= 0.f)
	{
		cout << GetName() << "has died!\n";
	}

	else
	{
		Health -= damage;
	}

	cout << "Health: " << Health << endl;
}

Goblin::Goblin()
{
	NumberOfLimbs = 5;

	

	//Name = "Gobby";   // Don't have access need different way. 
	SetName("Gobby");
}

int Goblin::GetNumberOfLimbs() // because NumberOfLimbs is not public, 
//this makes the info public. So we use this to run it and this returns the private info.
{
	return NumberOfLimbs;  // returns the private info directly from NumberOfLimbs. 
	//Now we use Get Number of limbs to get the same info as Number of Limbs.
}