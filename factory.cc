#include "minionbase.h"
#include "factory.h"

using namespace std;

Factory::Factory() {
	srand(time(0));
}

std::shared_ptr<Card> Factory::genCard(std::string name)
{
	if(name == AIR_E)
	{
		shared_ptr<Card> card (new Air_Elemental);
		return card;
	} else if (name == FIRE_E)
	{
		shared_ptr<Card> card (new Fire_Elemental);
		return card;
	} else if (name == EARTH_E)
	{
		shared_ptr<Card> card (new Earth_Elmental);
		return card;
	}
}