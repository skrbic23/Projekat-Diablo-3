#ifndef ARMOR_HPP_INCLUDED
#define ARMOR_HPP_INCLUDED

using namespace std;

enum deoArmora{Glava,Ramena,Torzo,Zglob,Ruke,Struk,Noge,Stopalo,Nakit};

enum Reriti{common, megic, sett, rare, legendary};

enum Color{bela, plava, zelena, zuta, narandzasta};
class Armor{
protected:
    int id;
    deoArmora tip;
    Reriti zastupljenost;
    Color boja;
    unsigned armor;
    string primBoost;
    string secBoost;
    string bonus;
public:
    Armor (){
    tip=Glava;
    zastupljenost=common;
    boja=bela;
    armor=0;
    primBoost="Nema";
    secBoost="Nema";
    bonus="Nema";
    id=1111;
    }
    Armor (deoArmora t, Reriti z, Color kol, unsigned a, string p, string s, string b,int e){
        tip=t;
        zastupljenost=z;
        boja=kol;
        armor=a;
        primBoost=p;
        secBoost=s;
        bonus=b;
        id=e;
    }
    unsigned setArmor(unsigned a){
        armor=a;
    }
    unsigned getArmor() const {
        return armor;
    }
    int getarmorId() const{
        return id;
    }
    Color setColor(Color p){
        boja=p;
    }
    void ispisideoArmora(){
    cout<<"Deo: "<<tip<<endl;
    cout<<"Reriti: "<<zastupljenost<<endl;
    cout<<"Boja: "<<boja<<endl;
    cout<<"Armor: "<<armor<<endl;
    cout<<"Primarni boost: "<<primBoost<<endl;
    cout<<"Sekundarni boost: "<<secBoost<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Id: "<<id<<endl;
    }
    friend ostream& operator<<(ostream& izlaz, const Armor& a);
};
ostream& operator<<(ostream& izlaz, const Armor& a){
    izlaz<<"Deo: "<<a.tip<<endl;
    izlaz<<"Reriti: "<<a.zastupljenost<<endl;
    izlaz<<"Boja: "<<a.boja<<endl;
    izlaz<<"Armor: "<<a.armor<<endl;
    izlaz<<"Primarni boost: "<<a.primBoost<<endl;
    izlaz<<"Sekundarni boost: "<<a.secBoost<<endl;
    izlaz<<"Bonus: "<<a.bonus<<endl;
    izlaz<<"Id: "<<a.id<<endl;
    return izlaz;
}

#endif // ARMOR_HPP_INCLUDED
