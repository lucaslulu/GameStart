#include "card.h"

class player
{
	int health;
	vector <minion*> field;
	vector <minion*> grave;
	ritual* secret;
	vector <card*> hand;
	public:

	void summon(char);
	void gotograve(minion);

	
}
