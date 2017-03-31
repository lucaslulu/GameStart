#include "player.h"

void Player::takeDamage(int damage)
{
	health -= damage;
}

void Player::getLife()
{
	return health;
}

Player::Player(string name)
	: name{name} {}

Player::~Player() {}

void Player::addOpponent(shared_ptr<Player> O)
{
	opponent = O;
}

// used to load deck onto the player
void Player::loadDeck(ifstream& infile)
{
	string name;
	while(inflie >> name)
	{
		shared_ptr<Card> c = f->genCard(name);
		deck.emplace_back(c);
	}
}

// detect the trigger and use the triggered ability
void Player::TriggerOn()
{
	for(auto c : field)
	{
		if(c->isTrigger)
		{
			c->useAbility(CType::Trigger,*this);
		}
	}
	if(secret->isTrigger)
	{
		secret->useAbility(CType::Trigger,*this);
	}
}

void Player::Active(string name, shared_ptr<Minion> target)
{
	if(auto c : field)
	{
		if(c->getName)
		{
			c->useAbility(CType::Active,*this);
		}
	}
}

void Player::gotograve(shared_ptr<Minion> m)
{
	grave.emplace_back(m);
}

void Player::takeDamage(int d)
{
	health -= d;
}
	
int Player::getLife()
{
	return health;
}

void Player::damegeO(int d); // deal damage to opponent
{
	opponent->takeDamage(d);
}
void Player::heal(int h) // heal for player
{
	health += h;
}


// test one 
void Player::printall()
{
	for(auto o : deck)
	{
		cout << o->getName();
	}
}
