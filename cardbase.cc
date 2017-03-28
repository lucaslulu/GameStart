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

Ritual::Ritual(int cost,int activepoint,int charge,string name)
  : card(cost,Name), activepoint{activepoint}, charge{charge} {}
  
int Ritual::getCharge()
{
  return charge;
}

Spell::Spell(int cost, string name)
  : card(cost,Name) {}
  
bool Spell::isTrigger()
{
  return false;
}

Enchantment::Enchantment(int cost, string name)
  : card(cost,Name) {}
  
bool Enchantment::isTrigger()
{
  return false;
}

