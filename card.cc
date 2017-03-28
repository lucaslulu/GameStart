#include "card.h"

Card::Card(int cost,string name)
  : name{name}, cost{cost} {}
  
void Card::addTarget(shared_ptr<Card> c)
{
  if(c->getType() == Ctype::Minion)
  {
  	targetM.emplace_back(c);
  } else if(c->getType() == Ctype::Ritual)
  {
  	targetM.emplace_back(c);
  }
}

 string Card::getName()
 {
    return name;
 }
 
 
