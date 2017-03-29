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
	shared_ptr<Ritual> secret;
	vector <shared_ptr<Card>> hand;
	shared_ptr<Player> opponent

	public:

	~Player();
	// void load(shared_ptr<Card> c); maybe it is not necessary
	void addOpponent(shared_ptr<Player> O);
	void TriggerOn();
	void Activate(string name, shared_ptr<Minion> target);
	void summon(char);
	void gotograve(minion);
	void takeDamage(int);
	void getLife();
	
	// the following is the effect
	void powerupI(int,pos); // power up whoever use this 
	void damegeO(int,shared_ptr<Player> target); // deal damage to chosen target
	void heal(int); // heal for player
};

#endif
