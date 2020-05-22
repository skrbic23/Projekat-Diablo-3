#ifndef PRIZIVACDUHOVA_HPP_INCLUDED
#define PRIZIVACDUHOVA_HPP_INCLUDED
#include "Karakter.hpp"
enum    Duhovi{dTenk, dDps};

class PrizivacDuhova:public Karakter{
private:
    Duhovi duhudungunu;
public:
    PrizivacDuhova (string i, string op, string skill, string passive, string p, tipnapada tip, Duhovi tipDuha, unsigned l) : Karakter( i, op, skill, passive, p, tip, l){
        duhudungunu=tipDuha;
    }
    void IspisiKarakter(){
        cout<<"Ja sam prizivac duhova."<<endl;
        Karakter::IspisiKarakter();
    }
};


#endif // PRIZIVACDUHOVA_HPP_INCLUDED
