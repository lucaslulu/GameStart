#include "minion.h"
using namespace std;

Minion::Minion(int cost,int atk,int def,string Name)
: Card(cost,Name), atk{atk}, def{def}, action{1} {}
  
int Minion::getAtk()
{
	return atk;
}

int Minion::getLife()
{
  return def;
}

void Minion::NewTurn()
{
	action = 1;
}

void Minion::attackM(std::shared_ptr<Minion> m)
{
	if(action == 0)
	{
		return;
	}

	takeAtk(m->getAtk());
	m->takeAtk(atk);
	action -= 1;
}

void Minion::takeAtk(int damege)
{
  def -= damege;
}

CType Minion::getType()
{
	return CType::Minion;
}

void Minion::addAtk(int a)
{
	atk += a;
}

void Minion::addDef(int a)
{
    def += a;
}

void Minion::decorate(shared_ptr <Enchantment> enc){
    Enhance.emplace_back(enc);
}
