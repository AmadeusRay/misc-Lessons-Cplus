#include <iostream>
using namespace std;

class Enemy
{
public:
	Enemy()
	{
		++s_EnemyCount;
		cout << "An enemy has entered the game!" << endl;
		cout << "Current Enemies: " << s_EnemyCount << endl;
	}
	~Enemy()
	{
		--s_EnemyCount;
		cout << "An enemy has been destroyed!" << endl;
		cout << "Current Enemies: " << s_EnemyCount << endl;
	}
private:
	static int s_EnemyCount;
};

int Enemy::s_EnemyCount = 0;

int main()
{
	Enemy enemy1;

	{
		Enemy enemy2, enemy3;
	} // <-- this is when enemy 2 and 3 is destroyed.

	Enemy* enemy4 = new Enemy;
	delete enemy4;

	return 0; // <--- this is when enemy1 is destroyed
}