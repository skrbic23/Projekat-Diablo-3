#ifndef VARVARIN_HPP_INCLUDED
#define VARVARIN_HPP_INCLUDED
#include "Karakter.hpp"
enum DungunVarvarin{Tenk, Dps};

class  Varvarin:Karakter{
private:
    DangunVarvarin tip;
public:
    Varvarin(Varior tipVarvarina):Karater (string op, string skill, string passive, string p, tipnapada tip){
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        daljina=tip;
        tip=tipVarvarina;
    }
};


#endif // VARVARIN_HPP_INCLUDED
