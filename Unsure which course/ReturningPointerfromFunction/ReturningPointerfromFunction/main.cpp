//#include <iostream>
//using namespace std;
//
//int* createDynamicInt()
//{
//	return new int(5);
//}
//
//int main()
//{
//	int* intPtr1 = createDynamicInt();
//	int* intPtr2 = createDynamicInt();
//
//	cout << *intPtr1 << endl;
//	cout << *intPtr2 << endl;
//
//	*intPtr2 = 100;
//
//	cout << *intPtr1 << endl;
//	cout << *intPtr2 << endl;
//
//	delete intPtr1;
//	delete intPtr2;
//}

//#include <iostream>
//using namespace std;
//
//int* createDynamicArray()
//{
//	int* dynamicArray = new int [5];
//
//	dynamicArray[0] = 250;
//
//	return dynamicArray;
//}
//
//int main()
//{
//	int* ptr = createDynamicArray();
//
//	cout << ptr[0] << endl;
//
//	delete[] ptr;
//
//	cout << endl;
//
//	return 0;
//}


#include <iostream>
using namespace std;

struct playerStats
{
	int score;
};

playerStats* GetPlayerWithGreatestScore(playerStats* pl1, playerStats* pl2)
{
	if (pl1->score > pl2->score)
		return pl1;
	else if (pl2->score > pl1->score)
		return pl2;
	else
		return nullptr;
}

int main()
{
	playerStats* player1 = new playerStats{ 5 }; // player1 is a pointer to playerStats with 5
	playerStats* player2 = new playerStats{ 10 }; // player2 is a pointer to playerStats with 10

	playerStats* Winner = GetPlayerWithGreatestScore(player1, player2); 
	//Winner is a pointer to playerstats getting results of GetPlayerWithGreatestScore

	if (Winner == player1)
	{
		cout << "And the winner is..." << endl;
		cout << "Player 1!" << endl;
		cout << "Player 1 has: " << Winner->score << " Points! " << endl;
	}
	else if (Winner == player2)
	{
		cout << "And the winner is..." << endl;
		cout << "Player 2!" << endl;
		cout << "Player 2 has: " << Winner->score << " points!" << endl;
	}
	else if(Winner == nullptr)
	{
		cout << "It's a draw!" << endl;
	}

	delete player1;
	delete player2;
	cout << endl;

	return 0;
}