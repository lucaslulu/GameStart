#include "spell.h"

Spell::Spell(int cost, string name)
: Card(cost,name) {}
  
bool Spell::isTrigger(Player &owner)
{
  return false;
}

CType Spell::getType()
{
	return CType::Spell;
}
