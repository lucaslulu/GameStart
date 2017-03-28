#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "card.h"
#include "cardbase.h"
#include "subject.h"

class player : public subject
{	
	int health;
	vector <shared_ptr<minion>> field;
	vector <shared_ptr<minion>> grave;
	ritual* secret;
	vector <shared_ptr<card>> hand;
	public:

	void summon(char);
	void gotograve(minion);
	
	
};

#endif
