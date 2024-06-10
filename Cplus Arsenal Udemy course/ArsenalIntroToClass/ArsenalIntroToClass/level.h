#pragma once

class GameStats
{

public:
	void setCurrentLevel(int level);

	int getCurrentLevel();

private:
	int currentLevel = 7;
};

