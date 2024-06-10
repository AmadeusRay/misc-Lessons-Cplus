#include <iostream>
using namespace std;

struct Vector2D
{
	float x = 3.0f;
	float y = 5.0f;
};

struct PlayerStats;

struct PlayerStats
{
	int health = 100;
	int armor = 0;
	Vector2D location;

	void setLocation(float p, float q)
	{
		location.x = p;
		location.y = q;
	}

	Vector2D getLocation()
	{
		return location;
	}

};

int main()
{
	PlayerStats player1, player2;

	PlayerStats players[]{ player1, player2 };

	cout << players[1].getLocation().y << endl;

	return 0;
}
