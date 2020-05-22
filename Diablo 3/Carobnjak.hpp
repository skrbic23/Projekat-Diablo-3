#ifndef CAROBNJAK_HPP_INCLUDED
#define CAROBNJAK_HPP_INCLUDED
#include "Karakter.hpp"

enum Wizard{wHiler, wDps};

class Carobnjak: public Karakter{
public:
    Wizard carudangunu;

public:
    Carobnjak (string i, string op, string skill, string passive, string p, tipnapada tip, Wizard tipCarobnjaka, unsigned l) : Karakter( i, op, skill, passive, p, tip, l){
        carudangunu=tipCarobnjaka;
    }
    void IspisiKarakter(){
        cout<<"Ja sam carobnjak."<<endl;
        Karakter::IspisiKarakter();
    }
};

#endif // CAROBNJAK_HPP_INCLUDED
