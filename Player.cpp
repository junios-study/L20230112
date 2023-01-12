#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	cout << "플레이어 생성." << endl;
}

Player::~Player()
{
	cout << "플레이어 소멸." << endl;
}

void Player::Move()
{
	cout << "플레이어 이동했다." << endl;
}
