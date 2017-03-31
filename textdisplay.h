//
//  textdisplay.hpp
//  test
//
//  Created by Zhongyuan Zhang on 2017-03-31.
//  Copyright © 2017 Zhongyuan Zhang. All rights reserved.
//

#ifndef textdisplay_h
#define textdisplay_h
#include <vector>
#include <string>
#include "ascii_graphics.h"

class Player;

class Card;
class Minion;

card_template_t convert(std::shared_ptr<Card>);

card_template_t drawplayer(Player & p);

class Handdisplay{
    std::vector <card_template_t> theDisplay;
    public:
        Handdisplay();
    void updatehand(Player &whonotified);
        friend std::ostream &operator<< (std::ostream &out, const Handdisplay &hd);
};



class Buffdisplay{
    std::vector <card_template_t> theDisplay;
public:
    Buffdisplay(std::shared_ptr<Minion>);
    friend std::ostream &operator << (std::ostream &out, const Buffdisplay &bf);
};


class Boarddisplay{
    card_template_t sorcery = CENTRE_GRAPHIC;
    std::vector <std::string> display_p1;  // 0 ritual 2 player 4 grave 5 mini1 6 mini2 7 mini3 8 mini4 9 mini5
    std::vector <std::string> display_p2;
public:
    Boarddisplay(Player &, Player &);
    friend std::ostream &operator<< (std::ostream &out, const Boarddisplay &bd);
};




#endif /* textdisplay_hpp */
