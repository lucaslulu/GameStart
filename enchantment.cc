#include "enchantment.h"
using namespace std;

Enchantment::Enchantment(int cost, string name,string atk_change,string def_change, int type)
: Card(cost,name),atk_change{atk_change},def_change{def_change},type{type} {}
  
bool Enchantment::isTrigger(Player &owner)
{
  return false;
}

CType Enchantment::getType()
{
	return CType::Enchant;
}
string Enchantment::getatk_change(){
    return atk_change;
}
string Enchantment::getdef_change(){
    return atk_change;
}

int Enchantment::getEntype(){
    return type;
}
