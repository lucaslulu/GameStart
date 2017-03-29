#include "enchantment.h"

Enchantment::Enchantment(int cost, string name,string description)
: Card(cost,name,description) {}
  
bool Enchantment::isTrigger(Player &owner)
{
  return false;
}

CType Enchantment::getType()
{
	return CType::Enchant;
}