#ifndef _SPELL_H_
#define _SPELL_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"
#include <memory>
#include <cstdlib>

class Spell : public Card
{
public:
	Spell(int cost, std::string name, std::string Active);
	virtual ~Spell() = 0;
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	CType getType() override;
	bool isTrigger(Player &owner) override;
};

#endif