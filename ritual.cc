#include "ritual.h"

Ritual::Ritual(int cost,int activepoint,int charge,string name)
  : Card(cost,name), activepoint{activepoint}, charge{charge} {}
  
int Ritual::getCharge()
{
  return charge;
}

CType Ritual::getType()
{
	return CType::Ritual;
}
