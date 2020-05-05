#ifndef VARVARIN_HPP_INCLUDED
#define VARVARIN_HPP_INCLUDED
#include "Karakter.hpp"
#include <iostream>
#include <fstream>


enum DungunVarvarin{vTenk, vDps};

void Pisiufile(string Nazivfile, string prva, string druga, string treca,string cetvrta, string peta, string sesta, char mode='app'){
    ofstream mojfile("Proba.txt", ios::app);
    mojfile<<prva<<', '<<druga<<', '<<treca<<', '<<cetvrta<<', '<<peta<<', '<<sesta<<endl;
    mojfile.close();
}

void Citajizfajle(string Nazivfile){
    ifstream mojfile("Proba.txt");
    string linija;
    if (mojfile.is_open()){
            while(getline(mojfile, linija)){
                cout<<linija<<'\n';
            }
        mojfile.close();
    }
        else
            cout<<"nesto si zabrljo"<<endl;
}

class  Varvarin: public Karakter{
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
        Pisiufile("Varvarinupis.txt", opis, skilovi, pasivna, pol, daljina, variorudungunu);
    }
    friend Pisiufile();
    friend Citajizfajle();
};


#endif // VARVARIN_HPP_INCLUDED
