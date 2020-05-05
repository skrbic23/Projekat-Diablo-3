#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED
#include "armor.hpp"
#include "Gem.hpp"
enum Oruzija{twohand, ondhand, range};

class Oruzije: public Gem{
protected:
    Oruzija tip;
    Reriti tipzastupljenosti;
    int damage;
    float udarciposekundi;
    string prim;
    string sec;
    string boostt;
    bool gem;
public:
    Oruzije(Oruzija tipOruzija, Reriti z, int d, float u, string p, string s, string b, bool g, float dmg , float ats):Gem(dmg, ats) {
    tip=tipOruzija;
    tipzastupljenosti=z;
    damage=d;
    udarciposekundi=u;
    prim=p;
    sec=s;
    boostt=b;
    gem=g;
    if(g==true){
        setDmg(dmg);
        setAts(ats);
        }
    else if(g==false){
        setDmg(0);
        setAts(0);
        }
    }
    int setDamage(int i){
        damage=i;
    }
    bool setGemtrue(bool g){
        g=true;
        gem=g;
    }
        bool setGemfalse(bool g){
        g=false;
        gem=g;

    }
};

#endif // ORUZIJE_HPP_INCLUDED
