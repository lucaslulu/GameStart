#include "subject.h"
#include "card.h"
#include "type.h"

Subject::~Subject{}

void Subject::load(shared_ptr<Card> o) { cards.emplace_back(o); }

void Subject::TriggerOn()
{
	for(auto O : cards)
	{
		if(O->isTrigger() == true)
		{
			O->useAbility(AbilityType::Trigger,*this);
		}
	}
}

void Subject::Activate(string name)
{
	for(auto O : cards)
	{
		if(O->getname() == name)
		{
			O->useAbility(AbilityType::Active,*this);
		}
	}
}

void Subject::Activate(string name,string target)
{
	for(auto O : cards)
	{
		if(O->getname() == name)
		{
			O->useAbility(AbilityType::Active,*this,target);
		}
	}
}
