#include "player.h"

void Player::takeDamage(int damage)
{
	health -= damage;
}

void Player::getLife()
{
	return health;
}

Player::~Player() {}

void Player::addOpponent(shared_ptr<Player> O)
{
	opponent = O;
}

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