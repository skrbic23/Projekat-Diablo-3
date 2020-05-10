#ifndef MISITIK_HPP_INCLUDED
#define MISITIK_HPP_INCLUDED
#include "armor.hpp"
#include "Oruzije.hpp"
#include "Gem.hpp"
#include <cstdlib>
enum posaoMistika{encentuj, transformisi};

class Mistic{
private:
    string ime;
    string nadimak;
    posaoMistika posao;
    int cena;
    Oruzije dmg;
    Armor ar;
    Gem gems;
public:
    Mistic (string i, string n, int c, posaoMistika p, Oruzije o, Armor a, Gem g){
        ime=i;
        nadimak=n;
        cena=c;
        posao=p;
        dmg=o;
        ar=a;
        gems=g;
    }
    Mistic Encant(int i){
    i=rand()%100;
    if(i%10==0){
        cout<<"Nisi dobio nista"<<endl;
    }
    else if(i%10==1){
        i=ar.getArmor();
        i=i+10;
       ar.setArmor(i);
    }
    else if(i%10==2){
        i=dmg.getDamage();
        i=i+10;
        dmg.setDamage(i);
    }
    else if(i%10==3){
        i=ar.getArmor();
        i=i+20;
       ar.setArmor(i);
    }
    else if(i%10==4){
        i=dmg.getDamage();
        i=i+20;
        dmg.setDamage(i);
    }
    else if (i%10==5){
        ar.setColor(bela);
    }
    else if(i%10==6){
        ar.setColor(narandzasta);
    }
    else if(i%10==7){
        ar.setColor(zuta);
    }
    else if(i%10==8){
        ar.setColor(plava);
    }
    else {
        i=ar.getArmor();
        i=i+20;
        ar.setArmor(i);
        i=dmg.getDamage();
        i=i+20;
        dmg.setDamage(i);
    }
    }
    Mistic Tranformisi(Color p){
        ar.setColor(p);
    }
};

#endif // MISITIK_HPP_INCLUDED
