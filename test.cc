#include "player.h"

int main(int argc, char* argv[])
{
	string  filename;
	filename = argv[1];
	ifstream deck{filename};
	Player *p = new Player(lucas);

	p->loadDeck(&deck);

	
}