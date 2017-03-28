#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>
using namespace std;

class Card;

class Subject {
	vector<shared_ptr<Card>> cards;
public:
	void load(Observer *o);
	// every card drawed from deck became a observer of subject
	void Activate(AbilityType t, string name);
	virtual ~Subject() = 0;
};

#endif;
