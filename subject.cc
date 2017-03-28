#include "subject.h"
#include "observer.h"
#include "type.h"

Subject::~Subject{}

void Subject::load(Observer *o) { observers.emplace_back(o); }

void Subject::Activate(AbilityType t, string name)
{
	for(auto O : observers)
	{
		if(O->getName() == name)
		{
			O->useAbility(t,*this);
		}
	}
}

