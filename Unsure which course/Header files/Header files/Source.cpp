#include <iostream>
#include "Object.h"
#include "actor.h"
#include "pawn.h"

using namespace std;

void InheritanceFunction()
{
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	for (int i = 0; i < 3; i++)
	{
		//ObjectArray[i]->BeginPlay();
		//or
		//ObjectArray[i]->ObjectFunction();

		Object* obj = ObjectArray[i];

		Actor* act = dynamic_cast<Actor*>(obj);

		if (act)
		{
			act->ActorFunction();
		}

		// casting to pawn.
		Pawn* pwn = dynamic_cast<Pawn*>(obj);

		if (pwn)
		{
			pwn->PawnFunction();
		}
	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
}

int main()
{

	// make it to a single function
	/*
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	for (int i = 0; i < 3; i++)
	{
		//ObjectArray[i]->BeginPlay();
		//or
		//ObjectArray[i]->ObjectFunction();

		Object* obj = ObjectArray[i];

		Actor* act = dynamic_cast<Actor*>(obj);

		if (act)
		{
			act->ActorFunction();
		}

		// casting to pawn.
		Pawn* pwn = dynamic_cast<Pawn*>(obj);

		if (pwn)
		{
			pwn->PawnFunction();
		}
	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
	*/

	InheritanceFunction();
	system("pause");

}





