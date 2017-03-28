#include "minion.h"

Air_Elemental::Air_Elemental(int cost, int atk, int def, int pos,string name)
  : card(1,"Air Elemental"), atk{1}, def{1}, pos{pos} {}
  
Air_Elemental::~Air_Elemental() {}

bool Air_Elemental::isTrigger(Subject &owner)
{
  return false;
}
void Air_Elemental::useAbility(AbilityType t, Subject &owner)
{
  if(t == AbilityType::Active)
  {
    owner.powerup(1,pos);
  }
}

