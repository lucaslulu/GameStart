#ifndef _CARDBASE_H_
#define _CARDBASE_H_
#include "card.h"

class Air_Elemental : public minion{

public:
	Air_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Air_Elemental();
	useAbility(AbilityType t, Subject &owner);

};

class Fire_Elemental : public minion{

public:
	Fire_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Fire_Elemental();
	useAbility(AbilityType t, Subject &owner);

};        

class Water_Elemental : public minion{

public:
	Water_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Water_Elemental();
	useAbility(AbilityType t, Subject &owner);

};


class Ice_Elemental : public minion{

public:
	Ice_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Ice_Elemental();
	useAbility(AbilityType t, Subject &owner);

}; 

class Elementer : public minion{

public:
	Elementer(int cost, int atk, int def, string name, string Active, string Trigger);
	~Elementer();
	useAbility(AbilityType t, Subject &owner);

};

class Wisp : public minion{

public:
	Wisp(int cost, int atk, int def, string name, string Active, string Trigger);
	~Wisp();
	useAbility(AbilityType t, Subject &owner);

};


class Earth_Elemental : public minion{

public:
	Earth_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Earth_Elemental();
	useAbility(AbilityType t, Subject &owner);

};    


class Unknown_Elemental : public minion{

public:
	Unknown_Elemental(int cost, int atk, int def, string name, string Active, string Trigger);
	~Unknown_Elemental();
	useAbility(AbilityType t, Subject &owner);

};        


class Elemental_Empire : public minion{

public:
	Elemental_Empire(int cost, int atk, int def, string name, string Active, string Trigger);
	~Elemental_Empire();
	useAbility(AbilityType t, Subject &owner);

};        

class Faerie_Dragon : public minion{

public:
	Faerie_Dragon(int cost, int atk, int def, string name, string Active, string Trigger);
	~Faerie_Dragon();
	useAbility(AbilityType t, Subject &owner);

};         

class Dark_Drake : public minion{

public:
	Dark_Drake(int cost, int atk, int def, string name, string Active, string Trigger);
	~Dark_Drake();
	useAbility(AbilityType t, Subject &owner);

};         

class Mana_Wyrm : public minion{

public:
	Mana_Wyrm(int cost, int atk, int def, string name, string Active, string Trigger);
	~Mana_Wyrm();
	useAbility(AbilityType t, Subject &owner);

};           

class Blue_Eyes : public minion{

public:
	Blue_Eyes(int cost, int atk, int def, string name, string Active, string Trigger);
	~Blue_Eyes();
	useAbility(AbilityType t, Subject &owner);

};           

class Blue_Eyes_Chaos : public minion{

public:
	Blue_Eyes_Chaos(int cost, int atk, int def, string name, string Active, string Trigger);
	~Blue_Eyes_Chaos();
	useAbility(AbilityType t, Subject &owner);

};          

class Black_Magician : public minion{

public:
	Black_Magician(int cost, int atk, int def, string name, string Active, string Trigger);
	~Black_Magician();
	useAbility(AbilityType t, Subject &owner);

};        

class Star_Dust : public minion{

public:
	Star_Dust(int cost, int atk, int def, string name, string Active, string Trigger);
	~Star_Dust();
	useAbility(AbilityType t, Subject &owner);

};       

class Death_Wing : public minion{

public:
	Death_Wing(int cost, int atk, int def, string name, string Active, string Trigger);
	~Death_Wing();
	useAbility(AbilityType t, Subject &owner);

};

#endif
