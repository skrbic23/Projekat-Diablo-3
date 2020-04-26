#ifndef ARMOR_HPP_INCLUDED
#define ARMOR_HPP_INCLUDED

using namespace std;

enum deoArmora{Glava,Ramena,Torzo,Zglob,Ruke,Struk,Noge,Stopalo,Nakit,Offhend};

enum Reriti{common, megic, sett, rare, legendary};

enum Color{bela, plava, zelena, zuta, narandzasta};

class Armor{
protected:
    deoArmora tip;
    Reriti zastupljenost;
    Color boja;
    unsigned armor;
    string primBoost[100];
    string secBoost[100];
    string bonus[100];

public:

};


#endif // ARMOR_HPP_INCLUDED
