#include "minionbase.h"
using namespace std;

Air_Elemental::Air_Elemental(int cost, int atk, int def, int pos,string name,string description)
  : card(1,"Air Elemental"), atk{0}, def{1}, pos{pos} {}
  
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
  if(t == AbilityType::Active)
  {
    owner.powerupI(1,pos);
  }

  if (t == AbilityType::Trigger)
  {
  	owner.damege(1,owner.opponent);
  }
}

