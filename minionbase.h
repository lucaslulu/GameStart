#ifndef _MINIONBASE_H_
#define _MINIONBASE_H_
#include "card.h"

class Air_Elemental : public minion{

public:
	Air_Elemental(int cost, int atk, int def, string name);
	~Air_Elemental();
	bool isTrigger(Player &owner);
	void useAbility(AbilityType t, Player &owner);
};

#endif
