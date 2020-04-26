#ifndef VARVARIN_HPP_INCLUDED
#define VARVARIN_HPP_INCLUDED
#include "Karakter.hpp"
enum DungunVarvarin{Tenk, Dps};

class  Varvarin:Karakter{
private:
    DangunVarvarin tipVarvarina;
public:
    Varvarin(string op, string skill, string passive, string p, tipnapada tip, DungunVarvarin dop):Karater (op, skill, passive, p, tipnapada tip){
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        tip=daljina;
        tipVarvarina=vid;
    }
};


#endif // VARVARIN_HPP_INCLUDED
