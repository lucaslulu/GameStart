#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include "yype.h"

class Subject;
class Player;

class Observer {
public: 
	virtual void useAbility(AbilityType t,Subject &owner) = 0;
	// pass a ability name and munipulate subject based on ability
	// the idea here is that each card is observer of its owner
	
	virtual string getName() = 0;
	virtual ~Observer() = default;
};

#endif
