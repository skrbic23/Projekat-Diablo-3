#ifndef LOVACNADEMONE_HPP_INCLUDED
#define LOVACNADEMONE_HPP_INCLUDED
#include "Karakter.hpp"
enum Lovac {lDps};

class Lovacnademone:public Karakter{
private:
    Lovac loviudungunu;
public:
    Lovacnademone (string i, string op, string skill, string passive, string p, tipnapada tip, Lovac tipLovca, unsigned l) : Karakter ( i, op, skill, passive, p, tip, l){
        loviudungunu=lDps;
    }
    void IspisiKarakter(){
        cout<<"Ja sam lovac na demone."<<endl;
        Karakter::IspisiKarakter();
    }
};

#endif // LOVACNADEMONE_HPP_INCLUDED
