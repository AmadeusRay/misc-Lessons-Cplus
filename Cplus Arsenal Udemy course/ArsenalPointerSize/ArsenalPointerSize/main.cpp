#include <iostream>
using namespace std;

//int main()
//{
//	short srt{};
//	int i{};
//	double dbl{};
//	cout << sizeof srt << endl;
//	cout << sizeof i << endl;
//	cout << sizeof dbl << endl;
//	return 0;
//}

struct PlayerStats
{
	int health;
	int armor;
	int mana;
	int weaponDamage;
	int xp;
	int level;
}player1, player2;

int main()
{
	PlayerStats* stats{ &player1 };

	cout << "Stats: " << stats << endl;
	cout << "&stats: " << &stats <<endl;

	stats = nullptr;
	cout << "Stats: " << stats << endl;
	cout << "&stats: " << &stats << endl;


	stats = &player2;
	cout << "Stats: " << stats << endl;
	cout << "&stats: " << &stats << endl;


	return 0;
}