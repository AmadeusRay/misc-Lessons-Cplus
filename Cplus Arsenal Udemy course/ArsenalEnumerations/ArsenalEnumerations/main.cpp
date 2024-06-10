#include <iostream>
using namespace std;

enum EGameDifficulty { Easy, Normal, Hard};

enum class ETerrainDifficulty : int
{ Easy, Normal, Hard };

int main()
{
	EGameDifficulty gameDifficulty = EGameDifficulty::Normal;

	ETerrainDifficulty terrainDifficulty = ETerrainDifficulty::Normal;

	gameDifficulty = (EGameDifficulty)3; // have to cast to use 3

	terrainDifficulty = (ETerrainDifficulty)1; // using cast to use 1

	if (gameDifficulty == EGameDifficulty::Hard)
		cout << "Hard" << endl;

	cout << (int)terrainDifficulty << endl;

	cout << "\n___end of program__" << endl;
	return 0;
}