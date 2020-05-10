#ifndef ZLATAR_HPP_INCLUDED
#define ZLATAR_HPP_INCLUDED
#include "Oruzije.hpp"

enum posaoZlatara{combine, remuv};

class Zlatar{
private:
    string ime;
    string nadimak;
    Oruzije a;
    posaoZlatara zlatar;
    int cena;
    int z;
    Gem g1, g2;
public:
    Zlatar (string i, string n, int c, posaoZlatara p, Gem a, Gem b){
        ime=i;
        nadimak=n;
        cena=c;
        zlatar=p;
        g1=a;
        g2=b;
    }
    Zlatar KombajnujGem(Gem a, Gem b){
        int dmg;
        float ats;
        ats=a.getGemats();
        ats=ats+b.getGemats();
        dmg=a.getGemdmg();
        dmg=dmg+b.getGemdmg();
        a.setAts(ats);
        b.setAts(ats);
        a.setDmg(dmg);
        b.setDmg(dmg);
    }
    Zlatar DodajGem(Oruzije o, Gem a){
        bool gag=o.getGem();
        if(gag==true){
            cout<<"Ovo oruzije vec ima gem, da li zelis da ga izvadis?"<<endl;
            cout<<"1. DA"<<endl;
            cout<<"2. NE"<<endl;
            cin>>z;
            if(z=1){
                o.setGemfalse(gag);
            }
            else if(z==2){
                o.setGemtrue(gag);
            }
        }
        else if(gag==false){
            o.setGemtrue(gag);
            int gdmad;
            gdmad=a.getGemdmg();
            o.setDamage(gdmad);
        }
    }
};


#endif // ZLATAR_HPP_INCLUDED
