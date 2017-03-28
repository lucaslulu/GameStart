#include "cardbase.h"

Minion::Minion(int cost,int atk,int def,string Name, string Active, string Trigger)
  : card(cost,Name,Active,Trigger), atk{atk}, def{def}, action{1} {}
  
int Minion::getLife()
{
  return def;
}

void Minion::takeAtk(int damege)
{
  def -= damege;
}

Ritual::Ritual(int cost,int activepoint,int charge,string name, string Trigger)
  : card(cost,Name,"N",Trigger), activepoint{activepoint}, charge{charge} {}
  
int Ritual::getCharge()
{
  return charge;
}

Spell::Spell(int cost, string name, string Active)
  : card(cost,Name,Active,"N") {}
  
bool Spell::isTrigger()
{
  return false;
}

Enchantment::Enchantment(int cost, string name, string Active)
  : card(cost,Name,Active,"N") {}
  
bool Enchantment::isTrigger()
{
  return false;
}

