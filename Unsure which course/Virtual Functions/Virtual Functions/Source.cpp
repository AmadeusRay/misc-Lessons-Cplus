#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay(); // to overried in a child class we have to make it virtual
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override; // putting virtual is good practice 
	//to let them know it's been overriden
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	//Object* obj = new Object;
	//obj->BeginPlay();

	//Actor* act = new Actor;
	//act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	//delete obj;
	//delete act;
	delete pwn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called \n";
	//Object::BeginPlay();  We can call it within Pawn, just an example.
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called \n";
	// Actor::BeginPlay();   We can call it within Pawn, just an example.
}

void Pawn::BeginPlay()  // delete pwn; clears this function (Pawn begin play)
// and anything within it.(Actor and Object begin play)

{
	cout << "Pawn BeginPlay() called \n";
	Object::BeginPlay(); // example of other void funciton being called in here
	Actor::BeginPlay(); // example of other void funciton being called in here

}