#ifndef _CARD_H_
#define _CARD_H_
#include "type.h"
#include <string>
class Subject;
class Player;

class Card : public Observer
{
protected:
	string name;
	int cost; // since each card has a cost and a name for sure
	
	vector<shared_ptr<Card>> target; 
	// each card has a array of possible target to attack or effect.
	
public:
	void addTarget(shared_ptr<Card> c);
	Card(int cost,string name);
	virtual ~Card() = default;
	virtual void useAbility(AbilityType t,Subject &owner) = 0;
	// the effect differs based on the type of ability it uses.
	virtual bool isTrigger() = 0;
	// idea here is that each card is observer of its owner

	string getName();
};
#endif
