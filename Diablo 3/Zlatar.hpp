#ifndef ZLATAR_HPP_INCLUDED
#define ZLATAR_HPP_INCLUDED
#include "Oruzije.hpp"

enum posaoZlatara{combine, remuv};

class Zlatar: public Oruzije{
private:
    string ime;
    string nadimak;
    Oruzije a;
    posaoZlatara zlatar;
    int cena;
    int z;
    Gem g;
public:
    Zlatar (string i, string n, int c, posaoZlatara p){
        ime=i;
        nadimak=n;
        cena=c;
        zlatar=p;
    }
    Zlatar KombajnujGem(Gem c, Gem b){
        setAts(c.dodajemats+b.dodajemats);
        setDamage(c.dodajemdmg+c.dodajemdmg);
    }
    Zlatar DodajGem(Oruzije o, Gem g){
        if(o.gem=true){
            cout<<"Ovo oruzije vec ima gem, da li zelis da ga izvadis?"<<endl;
            count<<"1. DA"<<endl;
            cout<<"2. NE"<<endl;
            cin>>z;
            if(z=1){
                o.gem= false;
            }
            else{
                continue
            }
        }
        else if(o.gem=false){
            o.gem=true;
            o.gemm=g;
        }
    }
};


#endif // ZLATAR_HPP_INCLUDED
