#ifndef _CARDBASE_H_
#define _CARDBASE_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"


class Minion : public Card
{
protected:
	int atk, def; // attack and defend
	int action;

public:
    Minion(int cost,int atk,int def, std::string name,std::string description);
	virtual ~Minion() = 0;
	int getLife();
	void takeAtk(int);
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	CType getType() override;
	virtual bool isTrigger(Player &owner) override;
};

class Ritual : public Card
{
protected:
	int charge;
	int activepoint;
	
public:
	Ritual(int cost,int activepoint,int charge,std::string name,std::string description);
	virtual ~Ritual() = 0;
	int getCharge();
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	CType getType() override;
    virtual bool isTrigger(Player &owner) override;
};

class Spell : public Card
{
public:
	Spell(int cost, std::string name, std::string Active,std::string description);
	virtual ~Spell() = 0;
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	CType getType() override;
	bool isTrigger(Player &owner) override;
};

class Enchantment: public Card
{
public:
	Enchantment(int cost, std::string name, std::string Active,std::string description);
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	virtual ~Enchantment() = 0;
	CType getType() override;
	bool isTrigger(Player &owner) override;
};
#endif


