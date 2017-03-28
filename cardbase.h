#ifndef _CARDBASE_H_
#define _CARDBASE_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"

class Minion : public Card
{
protected:
	int atk, def;
	int action;

public:
	Minion(int cost,int atk,int def, string Name, string Active, string Trigger);
	virtual ~Minion() = 0;
	int getLife();
	void takeAtk(int);
	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	virtual bool isTrigger() = 0;
};

class Ritual : public Card
{
protected:
	int charge;

public:
	Ritual(int cost,int charge,string name, string Trigger);
	virtual ~Ritual() = 0;
	int getCharge();
	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	virtual bool isTrigger() = 0;
};

class Spell : public Card
{
public:
	Spell(int cost, string name, string Active);
	virtual ~Spell() = 0;
	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	bool isTrigger();
};

class Enchantment: public Card
{
public:
	Enchantment(int cost, string name, string Active);
	virtual ~Enchantment() = 0;
	bool isTrigger();
};
#endif


