#include "card.h"

Card::Card(int cost,string name,string Active,string Trigger)
  : name{name}, cost{cost}, Active{Active}, Trigger{Trigger} {}
  
void Card::addTarget(shared_ptr<Card> c)
{
  target.emplace_back(c);
}

 string Card::getName()
 {
    return name;
 }
 
 
