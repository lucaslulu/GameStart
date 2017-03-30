#include "card.h"
using namespace std;

Card::Card(int cost,string name)
  : name{name}, cost{cost}
{
  description = "";
}
  
void Card::addTarget(shared_ptr<Card> c){
    if(c->getType() == CType::Minion)
  {
  	this->targetM.emplace_back(c);
  } else if(c->getType() == CType::Ritual)
  {
  	this->targetR.emplace_back(c);
  }
}

void Card::setDescription(string d)
{
  description = d;
}

 string Card::getName()
 {
    return name;
 }

string Card::getDescription(){
    return description;
}
 
