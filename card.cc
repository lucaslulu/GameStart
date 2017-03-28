#include "card.h"

Card::Card(int cost,string name,string Active,string Trigger)
  : name{name}, cost{cost}, Active{Active}, Trigger{Trigger} {}
  
 string Card::getName()
 {
    return name;
 }
 
 
