//#include <iostream>
//using namespace std;
//
//struct GameStats
//{
//	int currentLevel = 7;
//};
//
//int main()
//{
//	GameStats game;
//
//	cout << game.currentLevel << endl;
//
//	cout << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class GameStats
//{
//
//public:
//	int getCurrentLevel()
//	{
//		return currentLevel;
//	}
//	void setCurrentLevel(int level)
//	{
//		currentLevel = level;
//	}
//
//private:
//	int currentLevel = 7;
//};
//
//int main()
//{
//	GameStats game;
//
//	game.setCurrentLevel(3);
//
//	cout << game.getCurrentLevel() << endl;
//
//	cout << endl;
//	return 0;
//}

#include <iostream>
#include "level.h"
using namespace std;


int main()
{
	GameStats game;
	game.setCurrentLevel(3);

	cout << game.getCurrentLevel() << endl;

	cout << endl;
}