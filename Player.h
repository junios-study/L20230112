#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	~Player();

	int MP;

	void Move();
};

