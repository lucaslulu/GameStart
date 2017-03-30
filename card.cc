#include "card.h"
using namespace std;

Card::Card(int cost,string name)
  : name{name}, cost{cost}
{
  description = "";
}
  
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

void setDesription(string d)
{
  description += d;
}

 string Card::getName()
 {
    return name;
 }

string Card::getdescription(){
    return description;
}
 
