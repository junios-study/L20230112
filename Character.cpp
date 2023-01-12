#include "Character.h"
#include <iostream>

using namespace std;

Character::Character()
{
	cout << "캐릭터 Construct." << endl;
}

Character::~Character()
{
	cout << "캐릭터 소멸." << endl;
}

void Character::Move()
{
	cout << "이동했다." << endl;
}

void Character::Attack()
{
}

void Character::Die()
{
}
