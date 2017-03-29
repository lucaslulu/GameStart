#include "cardbase.h"
using namespace std;

Minion::Minion(int cost,int atk,int def,string Name,string description)
: Card(cost,Name,description), atk{atk}, def{def}, action{1} {}
  
int Minion::getLife()
{
  return def;
}

void Minion::takeAtk(int damege)
{
  def -= damege;
}

CType Minion::getType()
{
	return CType::Minion;
}

bool Minion::isTrigger(){
    return 0; // just for test
}

Ritual::Ritual(int cost,int activepoint,int charge,string name,string description)
  : Card(cost,name,description), activepoint{activepoint}, charge{charge} {}
  
int Ritual::getCharge()
{
  return charge;
}

CType Ritual::getType()
{
	return CType::Ritual;
}

Spell::Spell(int cost, string name,string Active, string description)
: Card(cost,name,description), Active{Active} {}
  
bool Spell::isTrigger()
{
  return false;
}

CType Spell::getType()
{
	return CType::Spell;
}

Enchantment::Enchantment(int cost, string name,string description)
: Card(cost,name,description) {}
  
bool Enchantment::isTrigger()
{
  return false;
}

CType Enchantment::getType()
{
	return CType::Enchant;
}
