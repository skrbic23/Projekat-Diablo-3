#ifndef MISITIK_HPP_INCLUDED
#define MISITIK_HPP_INCLUDED
#include "armor.hpp"
#include "Oruzije.hpp"
#include "Gem.hpp"
#include <stdlib.h>

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
    Mistic (string i, string n, int c){
        ime=i;
        nadimak=n;
        cena=c;
    }
    void Encant( Armor *ar, Oruzije *dmg){
    int i=rand()%100;
    if(i%10==0){
        cout<<"Nisi dobio nista"<<endl;
    }
    else if(i%10==1){
        i=ar->getArmor();
        i=i+10;
       ar->setArmor(i);
       cout<<"dobili ste 10 armora na deo armora"<<endl;
    }
    else if(i%10==2){
        i=dmg->getDamage();
        i=i+10;
        dmg->setDamage(i);
        cout<<"Dobili ste 10 dmg na oruzije"<<endl;
    }
    else if(i%10==3){
        i=ar->getArmor();
        i=i+20;
       ar->setArmor(i);
       cout<<"Dobili ste 20 armora na dati deo armora"<<endl;
    }
    else if(i%10==4){
        i=dmg->getDamage();
        i=i+20;
        dmg->setDamage(i);
        cout<<"Dobili ste 20 dmg na oruzije"<<endl;
    }
    else if (i%10==5){
        ar->setColor(bela);
        cout<<"Armor je sad beo"<<endl;
    }
    else if(i%10==6){
        ar->setColor(narandzasta);
        cout<<"Armor je sad narandzast"<<endl;
    }
    else if(i%10==7){
        ar->setColor(zuta);
        cout<<"Armor je sad zut"<<endl;
    }
    else if(i%10==8){
        ar->setColor(plava);
        cout<<"Armor je sad plav"<<endl;
    }
    else if(i%10==9){
        i=ar->getArmor();
        i=i+20;
        ar->setArmor(i);
        i=dmg->getDamage();
        i=i+20;
        dmg->setDamage(i);
        cout<<"Dobil ste 20 dmg i 20 armora na izabrane delove"<<endl;
    }
    }
    void Tranformisi(Armor *ar, Color p){
        ar->setColor(p);
    }
    void ispisMistik(){
        cout<<"Ime: "<<ime<<endl;
        cout<<"Nadimak: "<<nadimak<<endl;
        cout<<"Cena: "<<cena<<endl;
    }
    int getCena()const{
        return cena;
    }
    string getNaziv(){
        return ime;
    }
};

#endif // MISITIK_HPP_INCLUDED
