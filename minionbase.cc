#include "minionbase.h"
using namespace std;

Air_Elemental::Air_Elemental()
  : Minion(1,0,1,"Air Elemental")
{
  setDescription("1 Gain +1 Attack");
  setDescription("\n when it leaves the field, deal 1 damage to the opponent");
}
  
Air_Elemental::~Air_Elemental() {}

bool Air_Elemental::isTrigger(Subject &owner)
{ return false;}

void Air_Elemental::useAbility(AbilityType t, Player &owner)
{}
/*
bool Air_Elemental::isTrigger(Subject &owner)
{
	if(def <= 0)
	{
		return true;
	}
  return false;
}
void Air_Elemental::useAbility(AbilityType t, Player &owner)
{
  if(action == 0)
  {
    return;
  }
  
  if(t == AbilityType::Active)
  {
    addAtk(1);
  }

  if (t == AbilityType::Trigger)
  {
  	owner.damegeO(1,owner.opponent);
  }
  action -= 1;
}

*/

Fire_Elemental::Fire_Elemental()
  : Minion(2,2,1,"Fire Elemental")
{
  setDescription("1 Gain +1 Attack");
  setDescription("\n when it leaves the field, deal 1 damage to the opponent");
}
  
Fire_Elemental::~Fire_Elemental() {}

bool Fire_Elemental::isTrigger(Subject &owner)
{ return false;}

void Fire_Elemental::useAbility(AbilityType t, Player &owner)
{}


Earth_Elemental::Earth_Elemental()
  : Minion(2,1,3,"Earth Elemental")
{
  setDescription("1 Gain +1 Attack");
  setDescription("\n when it leaves the field, deal 1 damage to the opponent");
}
  
Earth_Elemental::~Earth_Elemental() {}

bool Earth_Elemental::isTrigger(Subject &owner)
{ return false;}

void Earth_Elemental::useAbility(AbilityType t, Player &owner)
{}