#ifndef ZLATAR_HPP_INCLUDED
#define ZLATAR_HPP_INCLUDED
#include "Oruzije.hpp"

enum posaoZlatara{combine, remuv};

class Zlatar{
private:
    string ime;
    string nadimak;
    int cena;
    int z;
    int uspesnost;
public:
    Zlatar (string i, string n, int c){
        ime=i;
        nadimak=n;
        cena=c;
    }
    Zlatar KombajnujGem(Gem *a, Gem *b){
        int dmg;
        float ats;
        ats=a->getGemats();
        ats=ats+b->getGemats();
        dmg=a->getGemdmg();
        dmg=dmg+b->getGemdmg();
        a->setAts(ats);
        b->setAts(ats);
        a->setDmg(dmg);
        b->setDmg(dmg);
    }
    Zlatar DodajGem(Oruzije *o, Gem *a){
        bool gag=o->getGem();
        if(gag==true){
            cout<<"Ovo oruzije vec ima gem, da li zelis da ga izvadis?"<<endl;
            cout<<"1 DA"<<endl;
            cout<<"2 NE"<<endl;
            cin>>z;
            if(z=1){
                o->setGemfalse(gag);
            }
            else if(z==2){
                o->setGemtrue(gag);
            }
        }
        else if(gag==false){
            gag=true;
            o->setGemtrue(gag);
        }
    }
    string getNaziv(){
        return ime;
    }
    int getCena(){
        return cena;
    }
    void ispisZlatar(){
        cout<<"Ime: "<<ime<<endl;
        cout<<"Nadimak: "<<nadimak<<endl;
        cout<<"Cena: "<<cena<<endl;
    }
    int getUspesnost() const{
        return uspesnost;
    }
};


#endif // ZLATAR_HPP_INCLUDED
