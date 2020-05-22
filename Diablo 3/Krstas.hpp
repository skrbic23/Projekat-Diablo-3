#ifndef KRSTAS_HPP_INCLUDED
#define KRSTAS_HPP_INCLUDED
#include "Karakter.hpp"
enum Krsti{kTenk};

class Krstas:public Karakter{
private:
    Krsti krstasudungunu;
public:
    Krstas (string i, string op, string skill, string passive, string p, tipnapada tip, Krsti tipKrstasa, unsigned l) : Karakter( i, op, skill, passive, p, tip, l){
        krstasudungunu=kTenk;
    }
    void IspisiKarakter(){
        cout<<"Ja sam krstas."<<endl;
        Karakter::IspisiKarakter();
    }
};


#endif // KRSTAS_HPP_INCLUDED
