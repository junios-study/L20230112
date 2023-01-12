#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	virtual ~Player();

	int MP;

	virtual void Move() override;
};

