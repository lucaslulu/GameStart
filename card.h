#ifndef _CARD_H_
#define _CARD_H_

#include <string>
#include <vector>
#include "type.h"

Class Card : public Observer
{
protected:
	string name;
	int cost; // since each card has a cost and a name for sure

	string Active;
	string Trigger;
	// if the card does not have the related ability, 
	// use string "noAbility" to represent
	
public:
	Card(int cost,string name,string Active,string Trigger);
	~Card();
	virtual void useAbility(AbilityType t,Subject &owner) = 0;
	// idea here is that each card is observer of its owner

	string getName();
};

Class Minion : public Card
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
};

Class Ritual : public Card
{
protected:
	int charge;

public:
	Ritual(int cost,int charge,string name, string Trigger);
	virtual ~Ritual() = 0;
	int getCharge();
	virtual void useAbility(AbilityType t, Subject &owner) = 0;

};

// the rest two are for you guys
#endif


