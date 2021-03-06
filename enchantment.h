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
    std::string atk_change;
    std::string def_change;
    std::string active;
    int type; // 0 is enhance type 1 is prevent ability
public:
    Enchantment(int cost, std::string name, std::string atk_change = "" ,std::string def_change = "",int type = -1);
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	virtual ~Enchantment() = 0;
	CType getType() override;
	bool isTrigger(Player &owner) override;
    
    //get the details of the Enchantment
    std::string getatk_change();
    std::string getdef_change();
    int getEntype();
};

#endif
