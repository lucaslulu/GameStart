#ifndef _ENCHANTMENT_H_
#define _ENCHANTMENT_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"
#include <memory>
#include <cstdlib>

class Enchantment: public Card
{
public:
	Enchantment(int cost, std::string name, std::string Active);
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	virtual ~Enchantment() = 0;
	CType getType() override;
	bool isTrigger(Player &owner) override;
};

#endif