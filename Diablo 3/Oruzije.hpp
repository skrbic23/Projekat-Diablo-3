#ifndef ORUZIJE_HPP_INCLUDED
#define ORUZIJE_HPP_INCLUDED
#include <string>
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
    Oruzije():Gem(){
    tip=twohand;
    tipzastupljenosti=common;
    damage=0;
    udarciposekundi=1;
    prim="Nema";
    sec="Nema";
    boostt="Nema";
    gem=false;
    }

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
    int getDamage()const{
        return damage;
    }
    bool getGem()const{
        return gem;
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
    friend ostream& operator<<(ostream& oruzije, const Oruzije& o);
};

ostream& operator<<(ostream& oruzije, const Oruzije& o){
    oruzije<<"Tip: "<<o.tip<<endl;
    oruzije<<"Reriti: "<<o.tipzastupljenosti<<endl;
    oruzije<<"Damage: "<<o.damage<<endl;
    oruzije<<"Udarci po sekundi: "<<o.udarciposekundi<<endl;
    oruzije<<"Primarni boost: "<<o.prim<<endl;
    oruzije<<"Sekundarni boost: "<<o.sec<<endl;
    oruzije<<"Boost: "<<o.boostt<<endl;
    oruzije<<"Gem: "<<o.gem<<endl;
    return oruzije;
}
#endif // ORUZIJE_HPP_INCLUDED
