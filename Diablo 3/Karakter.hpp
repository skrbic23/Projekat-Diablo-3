#ifndef KARAKTER_HPP_INCLUDED
#define KARAKTER_HPP_INCLUDED

#define  maxlvl=80

using namespace std;
enum tipnapada{mele, rejng, magic};
class Karakter{
protected:
    string opis;
    string skilovi;
    string pasivna;
    string pol;
    tipnapada daljina;
    unsigned lvl;

public:
    Karater (string op, string skill, string passive, string p, tipnapada tip){
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        daljina=tip;
    }
};

#endif // KARAKTER_HPP_INCLUDED
