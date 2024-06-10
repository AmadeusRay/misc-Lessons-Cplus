#include <iostream>
using namespace std;

class GameStats
{
public:
	//constructor with default arguments
	GameStats(int levelP = 1, int roomP = 1);

	void ToString();

private:
	int m_Level;
	int m_Room;
};

GameStats::GameStats(int levelP, int roomP)
	: m_Level(levelP), m_Room(roomP)
{
}

void GameStats::ToString()
{
	cout << "----" << endl;
	cout << "Current Level:\t" << m_Level << endl;
	cout << "Current Room:\t" << m_Room << endl;
	cout << "____" << endl;
}

int main()
{
	GameStats game(3, 5);

	game.ToString();

	cout << endl;
	return 0;
}