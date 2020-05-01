#ifndef MISITIK_HPP_INCLUDED
#define MISITIK_HPP_INCLUDED
#include <cstdlib>
#include "armor.hpp"
#include "Oruzije.hpp"
#include "Gem.hpp"
enum posaoMistika{encentuj, transformisi};

class Mistic: public Armor,public Gem,public Oruzije{
private:
    string ime;
    string nadimak;
    Armor armor;
    Gem dodajemdmg;
    Gem dodajemats;
    posaoMistika posao;
    int cena;
public:
    Mistic (string i, string n, int c, posaoMistika p){
        ime=i;
        nadimak=n;
        cena=c;
        posao=p;
    }
    Mistic Encant(int i){
    i=rand()%100
    if(i%10==0){
        cout<<"Nisi dobio nista"<<endl;
    }
    else if(i%10==1){
       setArmor(armor+10);
    }
    else if(i%10==2){
        setDamage(damage+10);
    }
    else if(i%10==3){
        setArmor(armor+20);
    }
    else if(i%10==4){
        setDamage(damage+20);
    }
    else if (i%10==5){
        setColor(bela);
    }
    else if(i%10==6){
        setColor(narandzasta);
    }
    else if(i%10==7){
        setColor(zuta);
    }
    else if(i%10==8){
        setColor(plava);
    }
    else if(i%10==9){
        setColor(zelena);
    }
    else {
        setArmor(armor+20);
        setDamage(damage+20);
    }
    }
    Mistic Tranformisi(Color p){
        setColor(p);
    }
};

#endif // MISITIK_HPP_INCLUDED
