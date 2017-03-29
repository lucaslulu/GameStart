#ifndef _RITUAL_H_
#define _RITUAL_H_

#include <string>
#include <vector>
#include "card.h"
#include "type.h"
#include <memory>
#include <cstdlib>

class Ritual : public Card
{
protected:
	int charge;
	int activepoint;
	
public:
	Ritual(int cost,int activepoint,int charge,std::string name);
	virtual ~Ritual() = 0;
	int getCharge();
//	virtual void useAbility(AbilityType t, Subject &owner) = 0;
	CType getType() override;
    virtual bool isTrigger(Player &owner) override;
};

#endif