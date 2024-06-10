#include <iostream>
using namespace std;

struct Vector2D
{
	float x;
	float y;
};

struct PlayerStats
{
	int health;
	int armor;
	int mana;
	int weaponDamage;
	int xp;
	int level;
	Vector2D location;
}player1;

struct AIStats
{
	int health;
	int weaponDamage;
	Vector2D location;
}rat{ 100, 25, {5, 22} }, alien{ 100, 50, {33, 54 } };

int main()
{
	cout << "rat Location x = " << rat.location.x << endl;
	cout << "rat Location y = " << rat.location.y << endl;

	cout << "alien Location x = " << alien.location.x << endl;
	cout << "alien Location y = " << alien.location.y << endl;

	cout << alien.weaponDamage << endl;

	return 0;
}