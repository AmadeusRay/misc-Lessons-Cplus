#pragma once // makes sure headers are included only once
#include "actor.h"

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction();

};