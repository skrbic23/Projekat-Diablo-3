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
    string primBoost;
    string secBoost;
    string bonus;
public:
    Color boja;
    unsigned armor;
    Armor (deoArmora t, Reriti z, Color kol, unsigned a, string p, string s, string b){
        tip=t;
        zastupljenost=z;
        boja=kol;
        armor=a;
        primBoost=p;
        secBoost=s;
        bonus=b;
    }
    unsigned setArmor(unsigned a){
        armor=a;
    }

    Color setColor(Color p){
        boja=p;
    }
};


#endif // ARMOR_HPP_INCLUDED
