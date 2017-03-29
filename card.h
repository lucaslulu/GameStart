#ifndef _CARD_H_
#define _CARD_H_
#include "type.h"
#include <string>
#include <vector>
#include <memory>
#include <cstdlib>
class Player;

enum class CType {Ritual, Minion, Spell, Enchantment};

class Minion;

class Ritual;

class Card
{
protected:
	std::string name;
    std::string description;  // the description of a card's ability
	int cost; // since each card has a cost and a name for sure
	
	std::vector<std::shared_ptr<Minion>> targetM;
	std::vector<std::shared_ptr<Ritual>> targetR;
	// each card has a array of possible target to attack or effect.
	
public:
    Card(int cost,std::string name);
	void addTarget(std::shared_ptr<Card> c);
	virtual ~Card() = default;
	void setDescription(string d);
	virtual CType getType() = 0;
	//virtual void useAbility(AbilityType t,Subject &owner) = 0;
	// the effect differs based on the type of ability it uses.
	virtual bool isTrigger(Player &owner) = 0;
	// idea here is that each card is observer of its owner

	std::string getName();  // return name of card
    std::string getDescription(); //return a description of a card
};

#endif
