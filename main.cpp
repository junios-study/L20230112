#include <iostream>

#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "Boar.h"
#include <vector>
#include <list>
#include <stack> 
#include <queue>
#include <map>
#include <set>


using namespace std;

int main()
{
	vector<Character*> Characters;
	map<string, int> M;

	M["Hello"] = 65;

	Character* A = new Player();
	Character* B = new Slime();

	Characters.push_back(new Player);

	srand(time(nullptr));

	int GoblinCount = 0;
	int SlimeCount = 0;
	int BoarCount = 0;

	cin >> GoblinCount;
	cin >> SlimeCount;
	cin >> BoarCount;


	//init
	for (int i = 0; i < SlimeCount; ++i)
	{
		Characters.push_back(new Slime());
	}
	for (int i = 0; i < GoblinCount; ++i)
	{
		Characters.push_back(new Goblin());
	}
	for (int i = 0; i < BoarCount; ++i)
	{
		Characters.push_back(new Boar());
	}

	//process
	for (int i = 0; i < Characters.size(); ++i)
	{
		Characters[i]->Move();
	}

	for (int i = 0; i < Characters.size(); ++i)
	{
		delete Characters[i];
	}

	return 0;
}