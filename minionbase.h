#ifndef _MINIONBASE_H_
#define _MINIONBASE_H_
#include "cardbase.h"

class Air_Elemental : public Minion{

public:
    Air_Elemental(int cost, int atk, int def, std::string name,std::string description);
	~Air_Elemental();
	bool isTrigger(Player &owner);
	void useAbility(AbilityType t, Player &owner);
};

#endif
