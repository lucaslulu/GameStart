#ifndef _MINION_H_
#define _MINION_H_
#include "card.h"

class Air_Elemental : public minion{

public:
	Air_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Air_Elemental();
	useAbility(AbilityType t, Subject &owner);

};

#endif
