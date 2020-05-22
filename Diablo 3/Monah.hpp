#ifndef MONAH_HPP_INCLUDED
#define MONAH_HPP_INCLUDED
#include "Karakter.hpp"

enum Monk{mHiler, mDps};

class Monah:public Karakter{
private:
    Monk monahudungunu;
public:
    Monah (string i, string op, string skill, string passive, string p, tipnapada tip, Monk tipMonka, unsigned l) : Karakter( i, op, skill, passive, p, tip, l){
        monahudungunu=tipMonka;
    }
    void IspisiKarakter(){
        cout<<"Ja sam monah."<<endl;
        Karakter::IspisiKarakter();
    }
};

#endif // MONAH_HPP_INCLUDED
