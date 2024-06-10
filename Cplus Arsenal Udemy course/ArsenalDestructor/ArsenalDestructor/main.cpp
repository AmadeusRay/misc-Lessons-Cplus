//#include <iostream>
//using namespace std;
//
//// result is "destructor invoked!" three times.
//
//class Entity
//{
//public:
//	//Constructor
//	Entity() 
//	{ 
//		member = new int(15);
//	}
//
//	//Destructor
//	~Entity()
//	{
//		cout << "Destructor invoked!" << endl;
//		delete member;
//	}
//
//private:
//	int *member;
//};
//
//int main()
//{
//	{
//		Entity entity1, entity2;
//	} // 2 destructors called
//
//	Entity *entity3 = new Entity;
//	delete entity3; // destructor called for entity3
//}

#include <iostream>
using namespace std;

struct Vector2D
{
	Vector2D()
	{
		x = 0;
		y = 0;
	}

	Vector2D(float xP, float yP)
	{
		x = xP;
		y = yP;
	}

	~Vector2D()
	{
		cout << "Vectord2D Object Destroyed!" << endl;
	}

	float x;
	float y;
};

class PlayerStats
{
public:
	PlayerStats()
	{
		health = 100;
		location = new Vector2D(5.4f, 3.3f);
	}

	~PlayerStats()
	{
		delete location;
		cout << "PlayerStats Object Destroyed!" << endl;
	}

	void setLocation(float xP, float yP)
	{
		location->x = xP;
		location->y = yP;
	}

	Vector2D getLocation()
	{
		if (location)
			return *location;
		else
			return Vector2D();
	}

private:
	int health;
	Vector2D* location;
};

int main()
{
	PlayerStats player1;

	cout << player1.getLocation().x << endl;

	cout << endl;
	return 0;
}