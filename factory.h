#ifndef _FACTORY_H_
#define _FACTORY_H_
#include <string>
#include <vector>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "card.h"

const std::string AIR_E = "Air Elemental";
const std::string FIRE_E = "Fire Elemental";
const std::string EARTH_E = "Earth Elemental";

class Factory{
public:
	Factory();
	std::shared_ptr<Card> GenCard(std::string name);
}