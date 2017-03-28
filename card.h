#ifndef _CARD_H_
#define _CARD_H_
class Subject;
class Player;

class Card : public Observer
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
	virtual ~Card() = default;
	virtual void useAbility(AbilityType t,Subject &owner) = 0;
	virtual bool isTrigger() = 0;
	// idea here is that each card is observer of its owner

	string getName();
};
#endif
