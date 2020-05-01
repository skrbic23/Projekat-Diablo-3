#ifndef VARVARIN_HPP_INCLUDED
#define VARVARIN_HPP_INCLUDED
#include "Karakter.hpp"
enum DungunVarvarin{vTenk, vDps};

class  Varvarin:Karakter{
private:
    DungunVarvarin variorudungunu;
public:
    Varvarin(string op, string skill, string passive, string p, tipnapada tip, DungunVarvarin tipVarvarina ){
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        daljina=tip;
        variorudungunu=tipVarvarina;
    }
};


#endif // VARVARIN_HPP_INCLUDED
