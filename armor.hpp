#ifndef ARMOR_HPP_INCLUDED
#define ARMOR_HPP_INCLUDED
enum deoArmora{Glava,Ramena,Torzo,Zglob,Ruke,Struk,Noge,Stopalo,Nakit,Offhend};

enum Reriti{common, megic, sett, rare, legendary};

class Armor{
private:
    deoArmora tip;
    Reriti zastupljenost;
    unsigned armor;
    string primBoost[100];
    string secBoost[100];
    string bonus[100];

public:

};


#endif // ARMOR_HPP_INCLUDED
