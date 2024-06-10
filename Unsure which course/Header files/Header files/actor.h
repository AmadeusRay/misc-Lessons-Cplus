#pragma once // makes sure headers are included only once
#include "object.h"

class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction();
};