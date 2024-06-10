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
	Vector2D location;

	void setLocation(float p, float q)
	{
		location.x = p;
		location.y = q;
	}

	void setLocation(Vector2D vec)
	{
		location.x = vec.x;
		location.y = vec.y;
	}

	Vector2D getLocation()
	{
		return location;
	}
};

int main()
{
	PlayerStats player1;

	player1.setLocation(5, 45);

	cout << player1.location.x << endl;

	Vector2D NewLocation{ 3, 7 };

	player1.setLocation(NewLocation);

	cout << player1.location.x << endl;

	return 0;

}

