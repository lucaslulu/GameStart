#include "card.h"
using namespace std;

Card::Card(int cost,string name,string description)
  : name{name}, cost{cost}, description(description) {}
  
void Card::addTarget(shared_ptr<Card> c)
{
  if(c->getType() == CType::Minion)
  {
  	targetM.emplace_back(c);
  } else if(c->getType() == CType::Ritual)
  {
  	targetM.emplace_back(c);
  }
}

 string Card::getName()
 {
    return name;
 }

string Card::getdestription(){
    return description;
}
 
