//#include <iostream>
//using namespace std;
//
//struct GameStats
//{
//	int currentLevel = 3;
//
//	int getCurrentLevel()
//	{
//		return currentLevel;
//	}
//};
//
//int main()
//{
//	GameStats* game = new GameStats;
//
//	cout << game->getCurrentLevel() << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

struct GameStats
{
	int currentLevel = 3;

	int getCurrentLevel()
	{
		return currentLevel;
	}
};

int main()
{
	GameStats game;
	GameStats* ptr = &game;

	cout << ptr->getCurrentLevel() << endl;

	return 0;
}