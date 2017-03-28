#ifndef _CARD_H_
#define _CARD_H_
#include "type.h"
#include <string>
class Player;

enum class CType {Ritual, Minion, Spell, Enchant}

class Card
{
protected:
	string name;
	int cost; // since each card has a cost and a name for sure
	shared_ptr<Player> opponent;
	
	vector<shared_ptr<Minion>> targetM;
	vector<shared_ptr<Ritual>> targetR;
	// each card has a array of possible target to attack or effect.
	
public:
	void addTarget(shared_ptr<Card> c);
	Card(int cost,string name);
	void addOpponent(shared_ptr<Player> p);
	virtual ~Card() = default;
	virtual Ctype getType() = 0;
	virtual void useAbility(AbilityType t,Subject &owner) = 0;
	// the effect differs based on the type of ability it uses.
	virtual bool isTrigger() = 0;
	// idea here is that each card is observer of its owner

	string getName();
};

#endif
