#ifndef _MINION_H_
#define _MINION_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"
#include <memory>
#include <cstdlib>

class Minion : public Card
{
protected:
	int atk, def; // attack and defend
	int action;

public:
    Minion(int cost,int atk,int def, std::string name);
	virtual ~Minion() = 0;
	int getAtk();
	int getLife();
	void takeAtk(int);
	void NewTurn();
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	void attackM(std::shared_ptr<Minion> m);
	CType getType() override;
	virtual bool isTrigger(Player &owner) = 0; // for test

	// The following is the effect work on the minion
	void addAtk(int);
};

#endif


