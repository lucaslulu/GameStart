#include "cardbase.h"

Minion::Minion(int cost,int atk,int def,string Name)
  : card(cost,Name), atk{atk}, def{def}, action{1} {}
  
int Minion::getLife()
{
  return def;
}

void Minion::takeAtk(int damege)
{
  def -= damege;
}

Ctype Minion::getType()
{
	return Ctype::Minion;
}

Ritual::Ritual(int cost,int activepoint,int charge,string name)
  : card(cost,Name), activepoint{activepoint}, charge{charge} {}
  
int Ritual::getCharge()
{
  return charge;
}

Ctype Ritual::getType()
{
	return Ctype::Ritual;
}

Spell::Spell(int cost, string name)
  : card(cost,Name) {}
  
bool Spell::isTrigger()
{
  return false;
}

Ctype Spell::getType()
{
	return Ctype::Spell;
}

Enchantment::Enchantment(int cost, string name)
  : card(cost,Name) {}
  
bool Enchantment::isTrigger()
{
  return false;
}

Ctype Enchantment::getType()
{
	return Ctype::Enchant;
}