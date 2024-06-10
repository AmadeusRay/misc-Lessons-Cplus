//#include <iostream>
//using namespace std;
//
//class GameStats
//{
//public:
//	// default constructor
//	GameStats(); // declared
//
//	int getCurrentLevel();
//	
//	void setCurrentLevel(int level);
//
//private:
//	int currentLevel = 15;
//};
//
//GameStats::GameStats() // initilized?
//{
//	currentLevel = 1; // can access current level in the public section of classGameStates thanks to "::"
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
//	GameStats game;
//
//	cout << game.getCurrentLevel() << endl;
//
//	cout << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class GameStats
//{
//public:
//	// default constructor
//	GameStats(); // declared
//
//	int getCurrentLevel();
//
//	void setCurrentLevel(int level);
//
//private:
//	int currentLevel = 15;
//};
//
//GameStats::GameStats() // initilized?
//{
//	currentLevel = 12; // can access current level in the public section of classGameStates thanks to "::"
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
//	GameStats game;
//	game.setCurrentLevel(5);
//
//	cout << game.getCurrentLevel() << endl;
//
//	cout << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//// example of overriding and a default one to accept parameters. Notice two game stats, one without arg and one with.
//
//class GameStats
//{
//public:
//	// default constructor
//	GameStats();
//	GameStats(int x); // declared
//
//	int getCurrentLevel();
//
//	void setCurrentLevel(int level);
//
//private:
//	int currentLevel = 15;
//};
//
//GameStats::GameStats() // initilized?
//{
//	currentLevel = 2; // can access current level in the public section of classGameStates thanks to "::"
//
//}
//
//GameStats::GameStats(int x) // initilized?
//{
//	currentLevel = x; // can access current level in the public section of classGameStates thanks to "::"
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
//	GameStats game(4); // get's overrided by 5 at setCurrentLevel
//	game.setCurrentLevel(5);
//
//	cout << game.getCurrentLevel() << endl;
//
//	cout << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class GameStats
{
public:
	// default constructor
	GameStats();
	GameStats(int x); // declared

	int getCurrentLevel();

	void setCurrentLevel(int level);

private:
	int currentLevel = 15;
};

GameStats::GameStats() // initilized?
{
	currentLevel = 2; // can access current level in the public section of classGameStates thanks to "::"

}

GameStats::GameStats(int x) // initilized?
{
	currentLevel = x; // can access current level in the public section of classGameStates thanks to "::"

}

int GameStats::getCurrentLevel()
{
	return currentLevel;
}

void GameStats::setCurrentLevel(int level)
{
	currentLevel = level;
}

int main()
{
	GameStats game(4), game2(20); // doing two game for two levels output.
	game.setCurrentLevel(5);

	cout << game.getCurrentLevel() << endl;
	cout << game2.getCurrentLevel() << endl;

	cout << endl;

	return 0;
}