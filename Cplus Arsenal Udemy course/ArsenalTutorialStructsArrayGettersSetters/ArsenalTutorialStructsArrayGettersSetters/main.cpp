#include <iostream>
using namespace std;

//struct GameStats
//{
//	int currentLevel = 7;
//	int gameScores[10]{5, 17};
//};
//
//int main()
//{
//	GameStats game;
//	
//
//	cout << game.currentLevel << endl;
//	cout << game.gameScores[0] << endl;
//
//	return 0;
//}


struct Vector2D
{
	float x;
	float y;
};

struct PlayerStats;

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

	Vector2D getLocation()
	{
		return location;
	}

};

int main()
{
	PlayerStats player1;
	player1.setLocation(5, 45);

	Vector2D vector = player1.getLocation();

	cout << player1.location.x << endl;
	cout << vector.x << endl;

	float f = player1.getLocation().x;

	cout << f << endl;

	return 0;
}
