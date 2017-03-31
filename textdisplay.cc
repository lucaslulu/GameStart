//
//  textdisplay.cpp
//  test
//
//  Created by Zhongyuan Zhang on 2017-03-31.
//  Copyright © 2017 Zhongyuan Zhang. All rights reserved.
//

#include "textdisplay.h"

#include <iostream>
#include <vector>
using namespace std;

enum class CType {Ritual, Minion, Spell, Enchant};

class Card;

card_template_t convert(std::shared_ptr<Card> c){
    card_template_t card;
    string name = c->getname();
    int cost = c->getcost();
    string desc = c->getdescription();
    CType type = c->getType();
    
    if (type == CType::Ritual){
        card = display_ritual(name, cost, c->getactivepoint(), desc, c->getcharge());
    } else if(type == CType::Enchant){
        if(c->getEntype() == 1){
            card = display_enchantment(name, cost, desc);
        } else{
            card = display_enchantment_attack_defence(name, cost, desc, c->getatk_change(),c->getdef_change());
        }
    }else if (type == CType::Spell) {
        card = display_spell(name, cost, desc);
    } else if (type == CType::Minion){
        int atk = c->getatk();
        int def = c->getdef();
        int minitype = c.gettype();
        if(minitype == 0){
            card = display_minion_no_ability(name, cost, atk, def);
        } else if (minitype == 1){
            card = display_minion_activated_ability(name, cost, atk, def, c->getabcost(), desc);
        } else if (minitype == 2) {
            card = display_minion_triggered_ability(name, cost, atk, def, desc);
        }
    }
    return card;
}


                   

                   
card_template_t playercard(Player & p){
    int playernum = p.getnum();
    string name = p.getname();
    int life = p.geLife();
    int magic = p.getMagic();
    card_template_t player_card = display_player_card(playernum, name, life, magic);
    return player_card;
}


//Handisplay

Handdisplay::Handdisplay(){
    for(int i = 0 ; i < 5; i ++){
        card_template_t new_card = CARD_TEMPLATE_EMPTY;
        theDisplay.emplace_back(new_card);
    }
}

void Handdisplay::updatehand(Player &playerselect){
    vector<shared_ptr<Card>> hand = playerselect.gethand();
    for(int i = 0 ; i < 5; i ++){
        card_template_t new_card = convet(hand[i]);
        theDisplay[i] = new_card;
    }
}

SubscriptionType Handdisplay::subType() const {
    return SubscriptionType::Hand;
}


ostream &operator<<(ostream &out, const Handdisplay &hd) {
    for(int i = 0 ; i< 11 ; i++){
        for (int j = 0; j < 5; j++){
            out << hd.theDisplay[j][i];
            out <<endl;
        }
    }
    return out;
}


//BUff display

Buffdisplay::Buffdisplay(shared_ptr<Minion> m){
    card_template_t minion = convert(shared_ptr<Minion> m);
    theDisplay.emplace_back(minion);
    vector<shared_ptr<Enchantment>> enchat = m.getEnhance();
    int size = enchant.size();
    for (int i = 0; i < size; i++){
        card_template_t en_card = convert(enchant[i])
        theDisplay.emplace_back(en_card);
    }
}

ostream Buffdisplay::&operator << (std::ostream &out, const Buffdisplay &bf){
    //print the minion
    int buffsize = theDisplay.size() - 1 ;// number of buff cards added to the current Minion
    int line = buffsize/5;
    int rest = buffsize - line * 5;
    for (int i = 0; i < 11; i++){
        out << bf.theDisplay[0][i];
        out << endl;
    }
    for(int k = 0;k < line; k++){
     for(int i = 0 ; i< 11 ; i++){
        for (int j = 0; j < 5; j++){
            out << bf.theDisplay[1 + j + 5 * k][i];
            out <<endl;
        }
      }
    }
}






//Board Display


Boarddisplay::Boarddisplay(Player & p1, Player & p2){
    //p1 initialize
    card_template_t p1 = playercard(p1);
    card_template_t r1 = convert(p1.secret);
    card_template_t g1 = convert(p1.grave.back());
    display_p1.emplace_back(r1);
    display_p1.emplace_back(CARD_TEMPLATE_EMPTY);
    display_p1.emplace_back(p1);
    display_p1.emplace_back(CARD_TEMPLATE_EMPTY);
    display_p1.emplace_back(g1);
    for(int i = 0 ; i < 5; i ++){
        if(p1.field[i] != 0){
            card_template_t new_card = convert(p1.field[i]);
        } else {
            card_template_t new_card = CARD_TEMPLATE_BORDER;
        }
        
        display_p1.emplace_back(new_card);
    }
    card_template_t p2 = playercard(p2);
    card_template_t r2 = convert(p2.ritual);
    card_template_t g2 = convert(p2.grave.back());
    display_p2.emplace_back(r2);
    display_p1.emplace_back(CARD_TEMPLATE_EMPTY);
    display_p2.emplace_back(p2);
    display_p1.emplace_back(CARD_TEMPLATE_EMPTY);
    display_p2.emplace_back(g2);
    for(int i = 0 ; i < 5; i ++){
        if(p2.field[i] != 0){
            card_template_t new_card = convert(p2.field[i]);
        } else {
            card_template_t new_card = CARD_TEMPLATE_BORDER;
        }
        
        display_p2.emplace_back(new_card);
    }
}




ostream Boarddisplay::&operator<< (std::ostream &out, const Boarddisplay &bd){
        //upper bound
        out << EXTERNAL_BORDER_CHAR_TOP_LEFT;
        for(int i = 0; i < 165; i++){
            out << EXTERNAL_BORDER_CHAR_LEFT_RIGHT;
        }
        out<< EXTERNAL_BORDER_CHAR_TOP_RIGHT << endl;
        
        // p1
        for(int i = 0; i < 11; i++){
            out << EXTERNAL_BORDER_CHAR_UP_DOWN;
            for(int j = 0; j < 5; j++){
                out << display_p1[j][i];
            }
            out << EXTERNAL_BORDER_CHAR_UP_DOWN; <<endl;
        }
        for(int i = 0; i < 11; i++){
            out << EXTERNAL_BORDER_CHAR_UP_DOWN;
            for(int j = 5; j < 10; j++){
                out << display_p1[j][i];
            }
            out << EXTERNAL_BORDER_CHAR_UP_DOWN; <<endl;
        }
        
            
        
        //sorcery icon
        for (int i = 0; i < 10; i++){
            out << bd.sorcery[i] << endl;
            }
        // p2
        
        for(int i = 0; i < 11; i++){
            out << EXTERNAL_BORDER_CHAR_UP_DOWN;
            for(int j = 0; j < 5; j++){
                out << display_p2[j][i];
            }
            out << EXTERNAL_BORDER_CHAR_UP_DOWN; <<endl;
        }
        for(int i = 0; i < 11; i++){
            out << EXTERNAL_BORDER_CHAR_UP_DOWN;
            for(int j = 5; j < 10; j++){
                out << display_p2[j][i];
            }
            out << EXTERNAL_BORDER_CHAR_UP_DOWN; <<endl;
        }
            
        //lower bound
        out << EXTERNAL_BORDER_CHAR_BOTTOM_LEFT;
        for(int i = 0; i < 165; i++){
            out << EXTERNAL_BORDER_CHAR_LEFT_RIGHT;
        }
        out<< EXTERNAL_BORDER_CHAR_BOTTOM_RIGHT << endl;
    return out;
}

