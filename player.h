#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "card.h"
#include <vector>
#include "cardbase.h"

class Player
{	
    std::vector<shared_ptr<Card>> cards;
	int health = 20;

    std::vector <shared_ptr<Minion>> field;
	vector <shared_ptr<Minion>> grave;
	ritual* secret;
	vector <shared_ptr<Card>> hand;

	public:

	~Player();
	void load(shared_ptr<Card> c);
	void TriggerOn();
	void Activate(string name, shared_ptr<Minion> target);
	void summon(char);
	void gotograve(minion);
	
	// the following is the effect
	void powerupI(int,pos); // power up whoever use this 
	void damege(int,shared_ptr<Player> target); // deal damage to chosen target
	void heal(int); // heal for player
};

#endif
