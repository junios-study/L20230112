#include <iostream>

#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "Boar.h"

using namespace std;

int main()
{
	Player* NewPlayer = new Player;
	Slime* NewSlime = new Slime;
	Goblin* NewGoblin = new Goblin;
	Boar* NewBoar = new Boar;

	NewPlayer->Move();
	NewSlime->Move();
	NewGoblin->Move();
	NewBoar->Move();

	delete NewPlayer;
	delete NewSlime;
	delete NewGoblin;
	delete NewBoar;


	return 0;
}