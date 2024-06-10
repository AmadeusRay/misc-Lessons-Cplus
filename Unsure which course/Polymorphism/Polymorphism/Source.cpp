#include <iostream>
using namespace std;

class Object
{
public: 
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* ptr_to_object = new Object;  // calling it's own version of object.
	Actor* ptr_to_actor = new Actor; // calling it's own version of Actor.
	Pawn* ptr_to_pawn = new Pawn; // calling it's own version of Pawn.

	Object* ObjectArray[] = {ptr_to_object, ptr_to_actor, ptr_to_pawn}; // instead of an object array, actor, array, pawn array. 
	//It's an array that holes them all.

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called. \n\n";
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called. \n\n";
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called. \n\n";
}