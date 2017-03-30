#ifndef _MINIONBASE_H_
#define _MINIONBASE_H_
#include "minion.h"

class Air_Elemental : public Minion{

public:
    Air_Elemental(int cost, int atk, int def, std::string name,std::string description);
	~Air_Elemental();
	bool isTrigger(Player &owner);
	void useAbility(AbilityType t, Player &owner);
};

class Fire_Elemental : public Minion{
public:
	Fire_Elemental(int cost, int atk, int def, std::string name,std::string description);
	~Fire_Elemental();
	bool isTrigger(Player &owner);
	void useAbility(AbilityType t, Player &owner);
};
#endif

class Earth_Elemental : public Minion{
	public:
	Earth_Elemental(int cost, int atk, int def, std::string name,std::string description);
	~Earth_Elemental();
	bool isTrigger(Player &owner);
	void useAbility(AbilityType t, Player &owner);
};
