#include <iostream>
using namespace std;

class GameStats
{
public:
	GameStats();
	GameStats(int levepP, int roomP);

	int getCurrentLevel();

	void setCurrentLevel(int levelP);

private:
	int mLevel;
	int mRoom; // add m to it, shows that it's a member variable. Just easier.
};

GameStats::GameStats()
	: GameStats(1, 1)
{
	cout << "Default constructor invoked." << endl;
}

GameStats::GameStats(int levelP, int roomP)
	:mLevel(levelP), mRoom(roomP)
{
	cout << "Overloaded two-args constructor invoked." << endl;
}

int GameStats::getCurrentLevel()
{
	return mLevel;
}

void GameStats::setCurrentLevel(int levelP)
{
	mLevel = levelP;
}

int main()
{
	GameStats game, game2(5, 3);

	cout << game.getCurrentLevel() << endl;
	cout << game2.getCurrentLevel() << endl;

	cout << endl;
	return 0;
}