#include "subject.h"
#include "card.h"
#include "type.h"

Subject::~Subject{}

void Subject::load(Card *c) { cards.emplace_back(o); }

void Subject::TriggerOn()
{
	for(auto O : cards)
	{
		if(O->isTrigger() == true)
		{
			O->useAbility(AbilityType::Trigger);
		}
	}
}

void Subject::Activate(string name)
{
	for(auto O : cards)
	{
		if(O->getname() == name)
		{
			O->useAbility(AbilityType::Active);
		}
	}
}
