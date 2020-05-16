#ifndef KOVAC_HPP_INCLUDED
#define KOVAC_HPP_INCLUDED
#include "armor.hpp"
#include "Oruzije.hpp"

enum posaoKovaca{forge , salvage, buy, sell};

class Kovac{
private:
    string ime;
    string nadimak;
    posaoKovaca posao;
    int cena;
    int i;
public:
        Kovac (string i, string n, int c, posaoKovaca p){
        ime=i;
        nadimak=n;
        cena=c;
        posao=p;
        }
};


#endif // KOVAC_HPP_INCLUDED
