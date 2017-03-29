#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>


class Card;

class Subject {
    std::vector<std::shared_ptr<Card>> cards;
public:
	void load(Observer *o);
	// every card drawed from deck became a observer of subject
    void Activate(std::string name);
    void Activate(std::string name, std::string target);
	void TriggerOn();
	virtual ~Subject() = 0;
};

#endif;
