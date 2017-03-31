#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "card.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "cardbase.h"
#include "factory.h"

class Player
{	
	std::shared_ptr<Factory> f; // factory used to make card.

    std::vector<shared_ptr<Card>> deck;
    string name;
	int health = 20;
	int magic = 3;

    std::vector <shared_ptr<Minion>> field;
	vector <shared_ptr<Minion>> grave;
	shared_ptr<Ritual> secret;
	vector <shared_ptr<Card>> hand;
	shared_ptr<Player> opponent

	public:

	Player(string name);
	~Player();
	void loadDeck(ifstream& infile); // maybe it is not necessary
	// void drawCard(); // draw a card from the deck randomly into hand.
	void addOpponent(shared_ptr<Player> O);
	void TriggerOn();
	void Activate(string name, shared_ptr<Minion> target);
	// void summon(char);
	void gotograve(shared_ptr<Minion>);
	void takeDamage(int);
	int getLife();
	
	// the following is the effect
	void damegeO(int); // deal damage to chosen target
	void heal(int); // heal for player

	// test methods
	void printall();
};

#endif
