#include <iostream>
using namespace std;

class GameStats
{
public:
	GameStats();

	GameStats& setCurrentLevel(int levelP);
	GameStats& setCurrentRoom(int roomP);

	void ToString();

private:
	int m_Level;
	int m_Room;
};

GameStats::GameStats()
	: m_Level(1), m_Room(1)
{
	cout << "Default constructor invoked." << endl;
}

GameStats& GameStats::setCurrentLevel(int levelP)
{
	m_Level = levelP;
	return *this; // not returning a pointer, it's deferencing
}

GameStats& GameStats::setCurrentRoom(int roomP)
{
	m_Room = roomP;
	return *this;
}

void GameStats::ToString()
{
	cout << "_______" << endl;
	cout << "Current Level:\t" << m_Level << endl;
	cout << "Current Room: \t" << m_Room << endl;
	cout << "_______" << endl;
}

int main()
{
	GameStats game;

	game.ToString();
	
	game.setCurrentLevel(5);
	game.setCurrentRoom(9);
	//or
	//game.setCurrentLevel(5).setCurrentRoom(9);  
	//other way is better

	game.ToString();

	cout << endl;
	return 0;
}