#include "minionbase.h"
using namespace std;

Air_Elemental::Air_Elemental()
  : Minion(1,0,1,"Air Elemental"), atk{0}, def{1}, pos{-1} 
{
  setDescription("1 Gain +1 Attack");
  setDescription("\n when it leaves the field, deal 1 damage to the opponent");
}
  
Air_Elemental::~Air_Elemental() {}

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
    owner.powerupI(1,pos);
  }

  if (t == AbilityType::Trigger)
  {
  	owner.damege(1,owner.opponent);
  }
  action -= 1;
}

