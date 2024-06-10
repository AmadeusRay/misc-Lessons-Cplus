//#include <iostream>
//using namespace std;
//
//class GameStats
//{
//public:
//	GameStats();
//
//	GameStats(int levelP);
//
//	int getCurrentLevel();
//
//	void setCurrentLevel(int level);
//
//private:
//	int currentLevel;
//};
//
//GameStats::GameStats()
//	:currentLevel(1)
//{
//
//}
//
//GameStats::GameStats(int levelP)
//	:currentLevel(levelP)
//{
//
//}
//
//int GameStats::getCurrentLevel()
//{
//	return currentLevel;
//}
//
//void GameStats::setCurrentLevel(int level)
//{
//	currentLevel = level;
//}
//
//int main()
//{
//
//	GameStats game, game2(5);
//
//	cout << game.getCurrentLevel() << endl;
//	cout << game2.getCurrentLevel() << endl;
//	
//	cout << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Vector2D
//{
//	Vector2D()
//	{
//		cout << "Vector Initialized." << endl;
//		x = 0;
//		y = 0;
//	}
//
//	Vector2D(float xP, float yP)
//	{
//		x = xP;
//		y = yP;
//
//		cout << "Vector Initialized. X: " << x << " and y: " << y << endl;
//	}
//
//	float x;
//	float y;
//};
//
//class PlayerStats
//{
//public:
//	PlayerStats()
//	{
//		health = 100;
//		location = Vector2D(); // this prints out. not good waste computation
//	}
//
//	void setLocation(float xP, float yP)
//	{
//		location.x = xP;
//		location.y = yP;
//	}
//
//	Vector2D getLocation()
//	{
//		return location;
//
//	}
//
//private:
//	int health;
//	Vector2D location;
//};
//
//int main()
//{
//	PlayerStats player1;
//
//	cout << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

struct Vector2D
{
	Vector2D()
		:x(0), y(0)
	{
		cout << "Vector Initialized." << endl;
	}

	Vector2D(float xP, float yP)
	{
		x = xP;
		y = yP;

		cout << "Vector Initialized. X: " << x << " and y: " << y << endl;
	}

	float x;
	float y;
};

class PlayerStats
{
public:
	PlayerStats()
		:health(100), location(15.3f, 40.0f)
	{

	}

	void setLocation(float xP, float yP)
	{
		location.x = xP;
		location.y = yP;
	}

	Vector2D getLocation()
	{
		return location;

	}

private:
	int health;
	Vector2D location;
};

int main()
{
	PlayerStats player1;

	cout << endl;
	return 0;
}
