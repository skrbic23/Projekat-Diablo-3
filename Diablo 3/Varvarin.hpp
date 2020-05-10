#ifndef VARVARIN_HPP_INCLUDED
#define VARVARIN_HPP_INCLUDED
#include "Karakter.hpp"
#include <iostream>
#include <fstream>


enum DungunVarvarin{vTenk, vDps};


class  Varvarin: public Karakter{
private:
    DungunVarvarin variorudungunu;
    string nazivfile;
    static int BrojVarvarina;
public:
    Varvarin(string i, string op, string skill, string passive, string p, tipnapada tip, DungunVarvarin tipVarvarina ) : Karakter(){
        ime=i;
        opis=op;
        skilovi=skill;
        pasivna=passive;
        pol=p;
        daljina=tip;
        variorudungunu=tipVarvarina;
        BrojVarvarina++;
        string nazivfile="Varvarin.txt";
    }
    void pisiTxtVarvarin(string nazivFajla, Varvarin v, char mode='w'){
    ofstream fajl;

    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }
    fajl <<v.ime<<","<<v.opis<<","<<v.skilovi<<","<<v.pasivna<<","<<v.pol<<","<<v.daljina<<","<<v.variorudungunu<<'\n'<< endl;
    fajl.close();

    }
    void citajTxtVarvarin(string nazivFajla){
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

    }
    int getbrojVarvarina(){
        return BrojVarvarina;
    }
    friend pisiTxtVarvarin();
    friend citajTxtVarvarin();
    friend ostream& operator<<(ostream& izlaz, const Varvarin& v);
};
ostream& operator<<(ostream& izlaz, const Varvarin& v){
    izlaz<<"Ispis Varvarina: "<<v.ime<<endl;
    izlaz<<"Opis: "<< v.opis<<endl;
    izlaz<<"Skilovi: "<<v.skilovi<<endl;
    izlaz<<"Pasivne: "<<v.pasivna<<endl;
    izlaz<<"Pol: "<<v.pol<<endl;
    izlaz<<"Range: "<<v.daljina<<endl;
    izlaz<<"Tip variora u raidu: "<<v.variorudungunu<<endl;
    return izlaz;
}
int Varvarin::BrojVarvarina=0;
#endif // VARVARIN_HPP_INCLUDED
