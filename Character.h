#pragma once
class Character
{
public:
	Character();
	~Character();

	int HP;
	int AttackPoint;
	int Gold;

	void Move();
	void Attack();
	void Die();
};

