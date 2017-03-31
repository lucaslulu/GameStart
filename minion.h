#ifndef _MINION_H_
#define _MINION_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"
#include <memory>
#include <cstdlib>

class Enchantment;

class Minion : public Card
{
protected:
	int atk, def; // attack and defend
	int action;
    int abcost;
    int type = -1; // 0 no alibity 1 ative  2 trigger
    std::vector<std::shared_ptr<Enchantment>> Enhance;  //vectors of Enchantment used on the Minion Card

public:
    Minion(int cost,int atk,int def, std::string name,int type,int abcost = 0);
	virtual ~Minion() = 0;
	int getAtk();
	int getLife();
    int gettype();
    int getabcost();
	void takeAtk(int);
	void NewTurn();
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
    void attackM(std::shared_ptr<Minion> m);
	CType getType() override;
	virtual bool isTrigger(Player &owner) override; // for test

	// The following is the effect work on the minion
    void decorate(std::shared_ptr<Enchantment>);
    void addAtk(int);
    void addDef(int);
    std::vector<std::shared_ptr<Enchantment>> getEnhance();

};

#endif


