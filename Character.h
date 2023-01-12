#pragma once
class Character
{
public:
	Character();
	virtual ~Character();

	int HP;
	int AttackPoint;
	int Gold;

	virtual void Move();
	void Attack();
	void Die();
};

